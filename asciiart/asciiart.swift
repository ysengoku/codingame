import Glibc
import Foundation

public struct StderrOutputStream: TextOutputStream {
    public mutating func write(_ string: String) { fputs(string, stderr) }
}
public var errStream = StderrOutputStream()

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

let L = Int(readLine()!)!
let H = Int(readLine()!)!
let T = readLine()!

var TUpper:String = T.uppercased();
// print(TUpper, to: &errStream)
var arr: [UInt8] = []
let notAlpha:UInt8 = 91 - 65
for char in TUpper {
    guard let ascii:UInt8 = char.asciiValue else {exit(1)}
    if (ascii < 65 || ascii > 90) {
        arr.append(notAlpha)
    } else {
        arr.append(ascii - 65)
    }
}
// print(arr, to: &errStream)

if H > 0 {
    for i in 0...(H-1) {
        let ROW = readLine()!
        var line:String = ""
        for j in arr {
            let start:Int = Int(j) * L
            let startIndex = ROW.index(ROW.startIndex, offsetBy: start)
            let endIndex = ROW.index(startIndex, offsetBy: L)
            let range = startIndex..<endIndex
            line += ROW.substring(with: range)
        }
        print(line)
    }
}

// Write an answer using print("message...")
// To debug: print("Debug messages...", to: &errStream)

