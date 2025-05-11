/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

const N = parseInt(readline());
let arr = [];
for (let i = 0; i < N; i++) {
    const pi = parseInt(readline());
    arr.push(pi);
}
arr.sort(function(a, b) {
    return a - b;
});

let minDiff = 10000000;
const len = arr.length;
for (let i = 0; i < len; ++i) {
    const diff = arr[i] - arr[i - 1];
    if (diff < minDiff) {
        minDiff = diff;
    }
}

// Write an answer using console.log()
// To debug: console.error('Debug messages...');

console.log(minDiff);

