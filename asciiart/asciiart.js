/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

const L = parseInt(readline());
const H = parseInt(readline());
const T = readline();
const array = [];

const tUpper = T.toUpperCase();

for (let i = 0; i < T.length; i++) {
    const ascii = tUpper.charCodeAt(i);
    if (ascii < 65 || ascii > 90)
        array.push(26);
    else
        array.push(ascii - 65);
}

for (let i = 0; i < H; i++) {
    const ROW = readline();
    let line = "";
    for (let j = 0; j < array.length; j++) {
        const start = array[j] * L;
        line += ROW.slice(start, start + L);
    }
    console.log(line);
}
