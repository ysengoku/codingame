/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

const n = parseInt(readline()); // the number of temperatures to analyse
var inputs = readline().split(' ');

if (n === 0) {
    console.log(0);
    return;
}
let closest = 5526;
for (let i = 0; i < n; i++) {
    const t = parseInt(inputs[i]);// a temperature expressed as an integer ranging from -273 to 5526
    if (Math.abs(t) < Math.abs(closest) || t > 0 && (Math.abs(t) === Math.abs(closest))) {
        closest = t;
    }
}

// Write an answer using console.log()
// To debug: console.error('Debug messages...');

console.log(closest);

