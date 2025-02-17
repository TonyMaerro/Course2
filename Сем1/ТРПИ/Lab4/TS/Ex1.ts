// 1.	Реализуйте функцию без параметров.
//  Вызовите ее с произвольным количеством
//   аргументов. Если вы передали не более
//    3-х аргументов, то функция должна возвращать
//     строку, состоящую из значений всех аргументов.
//      Если вы передали более 3-х, но не более 5-ти
//       аргументов – то типы аргументов. Если более 5-ти
//        и не более 7-ми – то   количество аргументов.
//         Если более 7-ми – то сообщение о том, что 
//         количество аргументов очень большое.

console.log(func(1, 2, 3));
console.log(func(1, '2', 3, 4, 5));
console.log(func(1, '2', 3, 4, 5, 6, 7));
console.log(func(1, '2', 3, 4, 5, 6, 7, 8, 9, 10));

function func(...args: any[]): string | number | void 
{
    if (args.length <= 3) 
    {
        return args.join(', ');

    } else if (args.length <= 5) 
    {
        return args.map((item) => typeof item).join(', ');

    } else if (args.length <= 7) 
    {
        return args.length;
    } else 
    {
        return 'Количество аргументов очень большое';
    }
}