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

let N = Int(readLine()!)!
var arr: [Int] = []
var minDiff = 10000000
if N > 0 {
    for i in 0...(N-1) {
        let pi = Int(readLine()!)!
        arr.append(pi)
    }
    // print(arr, to: &errStream)
    arr.sort()
    // print(arr, to: &errStream)

    for i in 0...(N-2) {
        let diff = arr[i + 1] - arr[i]
        if (diff < minDiff) {
            minDiff = diff
        }
    }
}

// Write an answer using print("message...")
// To debug: print("Debug messages...", to: &errStream)

print(minDiff)

