#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }

    vector<int> temperatures;
    int closest = 5526;
    for (int i = 0; i < n; i++) {
        int t; // a temperature expressed as an integer ranging from -273 to 5526
        cin >> t; cin.ignore();
        if (abs(t) < abs(closest) || (abs(t) == abs(closest) && t > 0))
            closest = t;
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << closest << endl;
}
