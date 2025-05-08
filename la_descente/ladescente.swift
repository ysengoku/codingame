import Glibc
import Foundation

public struct StderrOutputStream: TextOutputStream {
    public mutating func write(_ string: String) { fputs(string, stderr) }
}
public var errStream = StderrOutputStream()

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/


// game loop
while true {
    var max: Int = 0
    var index: Int = 0
    for i in 0...7 {
        let mountainH = Int(readLine()!)! // represents the height of one mountain.
        if (max < mountainH) {
            max = mountainH
            index = i
        }
    }

    // Write an action using print("message...")
    // To debug: print("Debug messages...", to: &errStream)

    print(index)     // The index of the mountain to fire on.

}

