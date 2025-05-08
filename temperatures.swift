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

let n = Int(readLine()!)! // the number of temperatures to analyse
if (n == 0) {
    print(0)
    exit(0)
}
var closest = 5526
for i in ((readLine()!).split(separator: " ").map(String.init)) {
    let t = Int(i)!
    if (abs(t) < abs(closest) || (t > 0 && abs(t) == abs (closest))) {
        closest = t;
    }
}

// Write an answer using print("message...")
// To debug: print("Debug messages...", to: &errStream)

print(closest)

