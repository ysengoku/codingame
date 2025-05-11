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
    int n;
    cin >> n; cin.ignore();
    vector<int> p;
    for (int i = 0; i < n; i++) {
        int pi;
        cin >> pi; cin.ignore();
        p.push_back(pi);
    }
    sort(p.begin(), p.end());

    int minDiff = 10000000;
    auto itEnd = p.end();
    for (auto it = p.begin(); it != itEnd; ++it) {
        int diff = abs(*it - *(it - 1));
        if (diff < minDiff) {
            minDiff = diff;
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << minDiff << endl;
}
