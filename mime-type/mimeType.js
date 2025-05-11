/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

const N = parseInt(readline()); // Number of elements which make up the association table.
const Q = parseInt(readline()); // Number Q of file names to be analyzed.
const dic = {};
for (let i = 0; i < N; i++) {
    var inputs = readline().split(' ');
    const EXT = inputs[0]; // file extension
    const MT = inputs[1]; // MIME type.
    dic[EXT.toUpperCase()] = MT;
}
// console.error(dic);
for (let i = 0; i < Q; i++) {
    const FNAME = readline(); // One file name per line.
    // console.error(FNAME);
    if (!FNAME.includes('.')) {
        console.log('UNKNOWN');
        continue;
    }
    const split = FNAME.split('.');
    let ext = split[split.length - 1];
    ext = ext.toUpperCase();
    // console.error(ext);
    res = dic[ext] ? dic[ext] : 'UNKNOWN';
    console.log(res);
}

// For each of the Q filenames, display on a line the corresponding MIME type. If there is no corresponding type, then display UNKNOWN.

