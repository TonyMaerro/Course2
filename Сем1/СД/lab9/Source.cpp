// C++ implementation of the above approach
#include <iostream>
#include<vector>
#include<algorithm>
#include <windows.h>
#include <limits.h>
using namespace std;


#define V 5

#define CHILD 3
#define GENES ABCDE

#define START 0

#define POP_SIZE 5


int map[V][V] = {
	{ INT_MAX, 25, 40, 31, 27},
	{ 5, INT_MAX, 17, 30, 25},
	{ 19, 15, INT_MAX, 6, 1},
	{ 9, 50, 24, INT_MAX, 6 },
	{ 22, 8, 7, 10, INT_MAX } 
};

struct individual 
{
	string gnome;
	int fitness;
};


int rand_num(int start, int end)
{
	int r = end - start;
	int rnum = start + rand() % r;
	return rnum;
}


bool repeat(string s, char ch)
{
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ch)
			return true;
	}
	return false;
}


string mutatedGene(string gnome)
{
	while (true) {
		int r = rand_num(1, V);
		int r1 = rand_num(1, V);
		if (r1 != r) {
			char temp = gnome[r];
			gnome[r] = gnome[r1];
			gnome[r1] = temp;
			break;
		}
	}
	return gnome;
}

string create_gnome()
{
	string gnome = "0";
	while (true) {
		if (gnome.size() == V) {
			gnome += gnome[0];
			break;
		}
		int temp = rand_num(1, V);
		if (!repeat(gnome, (char)(temp + 48)))
			gnome += (char)(temp + 48);
	}
	return gnome;
}

int cal_fitness(string gnome)
{
	int f = 0;
	for (int i = 0; i < gnome.size() - 1; i++) 
	{
		if (map[gnome[i] - 48][gnome[i + 1] - 48] == INT_MAX)
			return INT_MAX;
		f += map[gnome[i] - 48][gnome[i + 1] - 48];
	}
	return f; 
}

int cooldown(int temp)
{
	return (90 * temp) / 100;
}

bool lessthan(
	individual t1,
	individual t2)
{
	return t1.fitness < t2.fitness;
}

void TSPUtil(int map[V][V])
{
	int gen = 1;
	int gen_thres = 30;

	vector<individual> population;
	individual temp;

	for (int i = 0; i < POP_SIZE; i++) 
	{
		temp.gnome = create_gnome();
		temp.fitness = cal_fitness(temp.gnome);
		population.push_back(temp);
	}

	cout << "\n������������� �����������: " << endl
		<< "����� ��������\n";
	
	for (int i = 0; i < POP_SIZE; i++)
	{
		cout << population[i].gnome << " "
			 << population[i].fitness << endl;
	}
	cout << "\n";

	int temperature = 10000;

	sort(population.begin(), population.end(), lessthan);

	while (temperature > 100 && gen <= gen_thres) 
	{
		cout << endl << "������ ����: " << population[0].gnome << endl;
		cout << endl << "�����: " << population[0].fitness << endl;

		cout << "\n������� �����������: " << temperature << "\n";
		vector<individual> new_population;

		for (int i = 0; i < CHILD; i++) 
		{
			individual p1 = population[i];
			
			while (true)
			{	
				string new_g = mutatedGene(p1.gnome);
				individual new_gnome;
				new_gnome.gnome = new_g;
				new_gnome.fitness = cal_fitness(new_gnome.gnome);

				if (new_gnome.fitness <= population[i].fitness) {
					new_population.push_back(new_gnome);
					break;
				}
				else {
					new_gnome.fitness = INT_MAX;
					new_population.push_back(new_gnome);
					break;
				}
			}
		}

		temperature = cooldown(temperature);
		for (int i = 0; i < CHILD; i++)
		{
			population.push_back(new_population[i]);
		}
		sort(population.begin(), population.end(), lessthan);

		for (int i = 0; i < CHILD; i++)
		{
			population.pop_back();
		}
	
		cout << "��������� " << gen << " \n";
		cout << "����� �������� \n";

		for (int i = 0; i < POP_SIZE; i++)
			cout << population[i].gnome << " "
			<< population[i].fitness << endl;
		gen++;
	}
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	TSPUtil(map);
}
