﻿namespace lab15;
static partial class TPL
{
    public static int Sum(params int[] nums) => nums.Sum();
    public static double GetSquareOfCyrcle(int radius) => Math.PI * radius * radius;
   
    public static double GetRadius(double square) => Math.Sqrt(square / Math.PI);
    
    public static void Ex4_1()
    {
        Console.WriteLine("-----------Задание 4 в1---------");
        
        var task1 = Task.Run(() => Sum(1, 2, 3, 4, 5, 6, 7, 8, 9, 10));
        var task2 = task1.ContinueWith(n => GetSquareOfCyrcle(n.Result));
        var task3 = task2.ContinueWith(square => GetRadius(square.Result));

        Console.WriteLine("Результат четвертого задания: " + task3.Result);
    }

    public static void Ex4_2()
    {
        Console.WriteLine("-----------Задание 4 в2--------");

        // На основе объекта ожидания и методов GetAwaiter(),GetResult();

        Task<int> task1 = new(() => Sum(12, 232, 232));
        task1.Start();

        task1.GetAwaiter().GetResult();

        Task<double> task2 = new(() => GetSquareOfCyrcle(task1.Result));
        task2.Start();

        task2.GetAwaiter().GetResult();

        Task<double> task3 = new(() => GetRadius(task2.Result));
        task3.Start();

        task3.GetAwaiter().GetResult();

        Console.WriteLine("Результат четвертого задания: " + task3.Result);
    }
}
