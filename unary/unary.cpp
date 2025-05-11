#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bitset>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

string decimalToBinary(int) {

} 

int main()
{
    string message;
    getline(cin, message);

    string binary = "";
    string res = "";
    for (auto it = message.begin(); it != message.end(); it++) {
        int digit = static_cast<int>(*it);
        binary += bitset<7>(digit).to_string();
    }
    // cerr << binary << endl;

    for (auto it = binary.begin(); it != binary.end();) {
        char c = *it;
        int count = 1;
        ++it;
        while (*it == c) {
            ++count;
            ++it;
        }
        // cerr << "c:  " << c << "count: " << count << endl;
        if (c == '0') {
            res += "00 ";
        } else {
            res += "0 ";
        }
        while (count--) {
            res += "0";
        }
        if (it != binary.end()) {
            res += " ";
        }
    }
    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    cout << res << endl;
}
