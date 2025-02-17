import Iterator from "./Iterator.js";
import products from "./Ex1.js";
const iterator = new Iterator(products.Products);
const filterByCost = (iterator, costStart, costEnd) => {
    const result = [];
    let current;
    iterator.reset();
    while (iterator.hasNext()) {
        current = iterator.next();
        if (current.Price >= costStart && current.Price <= costEnd) {
            result.push(current);
        }
    }
    return result;
};
const filterBySize = (iterator, size) => {
    const result = [];
    iterator.reset();
    while (iterator.hasNext()) {
        const current = iterator.next();
        if (current.Size === size) {
            result.push(current);
        }
    }
    return result;
};
const filterByColor = (iterator, color) => {
    const result = [];
    iterator.reset();
    while (iterator.hasNext()) {
        const current = iterator.next();
        if (current.Color === color) {
            result.push(current);
        }
    }
    return result;
};
let prods1 = filterByCost(iterator, 100, 200);
console.log(`
    Exesize 2
    Отфильтрованные по цене от 100 до 200
`);
prods1.forEach(element => {
    console.log(element.ID);
});
let prods2 = filterBySize(iterator, 23);
console.log(`
    Отфильтрованные по размеру 23
    `);
prods2.forEach(element => {
    console.log(element.ID);
});
let prods3 = filterByColor(iterator, "Red");
console.log(`
    Отфильтрованные по цвету Red
    `);
prods3.forEach(element => {
    console.log(element.ID);
});
