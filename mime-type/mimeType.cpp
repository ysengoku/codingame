#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <sstream>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int n; // Number of elements which make up the association table.
    cin >> n; cin.ignore();
    int q; // Number Q of file names to be analyzed.
    cin >> q; cin.ignore();

    unordered_map<string, string> mime;
    for (int i = 0; i < n; i++) {
        string ext; // file extension
        string mt; // MIME type.
        cin >> ext >> mt; cin.ignore();
        transform(ext.begin(), ext.end(), ext.begin(), ::toupper);
        mime.insert({ext, mt});
    }

    for (int i = 0; i < q; i++) {
        string fname;
        getline(cin, fname); // One file name per line.
        if (fname.find('.') == string::npos ||
            *(fname.end() - 1) == '.') {
          cout << "UNKNOWN" << endl;
          continue;  
        }
        auto pos = fname.rfind('.');
        if (pos == string::npos || pos + 1 == fname.size()) {
            cout << "UNKNOWN" << endl;
        } else {
            string toCheck = fname.substr(pos + 1);
            transform(toCheck.begin(), toCheck.end(), toCheck.begin(), ::toupper);
            if (mime.find(toCheck) == mime.end()) {
                cout << "UNKNOWN" << endl;
            } else {
                cout << mime[toCheck] << endl;
            }
        }
    }
}
