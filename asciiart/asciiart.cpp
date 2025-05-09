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
    int l;
    cin >> l; cin.ignore();
    int h;
    cin >> h; cin.ignore();
    string t;
    getline(cin, t);
    // cerr << "Before: " << t << endl;
    transform(t.begin(), t.end(), t.begin(), ::toupper);
    // cerr << "After: " << t << endl;
    vector<int> vec;
    for (auto it = t.begin(); it != t.end(); it++) {
        if (*it < 65 || *it > 90)
            vec.push_back(26);
        else
            vec.push_back(*it - 65);
    }
    // for (auto it = vec.begin(); it != vec.end(); it++)
    //     cerr << *it << endl;
    for (int i = 0; i < h; i++) {
        string row;
        getline(cin, row);

        string line;
        for (auto it = vec.begin(); it != vec.end(); it++) {
            int start = *it * l;
            line += row.substr(start, l);
        }
        cout << line << endl;
    }
}
