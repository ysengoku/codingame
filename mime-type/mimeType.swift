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

let N = Int(readLine()!)! // Number of elements which make up the association table.
let Q = Int(readLine()!)! // Number Q of file names to be analyzed.
var extentions: [String: String] = [:]
if N > 0 {
    for i in 0...(N-1) {
        let inputs = (readLine()!).split(separator: " ").map(String.init)
        let EXT = inputs[0] // file extension
        let MT = inputs[1] // MIME type.
        extentions[EXT.uppercased()] = MT
    }
    // print(extentionsto: &errStream)
}
if Q > 0 {
    for i in 0...(Q-1) {
        let FNAME = readLine()! // One file name per line.
        print(FNAME, to: &errStream)
        guard let lastIndex = FNAME.lastIndex(of: ".") else {
            print("UNKNOWN")
            continue;
        }
        let extIndex = FNAME.index(after: lastIndex)
        var ext = String(FNAME.substring(from: extIndex))
        ext = ext.uppercased()
        // print(ext, to: &errStream)
        
        guard let value = extentions[ext] else {
            print("UNKNOWN")
            continue;            
        }
        print(value)
    }
}

// Write an answer using print("message...")
// To debug: print("Debug messages...", to: &errStream)

