#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * The while loop represents the game.
 * Each iteration represents a turn of the game
 * where you are given inputs (the heights of the mountains)
 * and where you have to print an output (the index of the mountain to fire on)
 * The inputs you are given are automatically updated according to your last actions.
 **/

int main()
{

    // game loop
    while (1) {
        std::vector<int> mountains;
        for (int i = 0; i < 8; i++) {
            int mountain_h; // represents the height of one mountain.
            cin >> mountain_h; cin.ignore();
            mountains.push_back(mountain_h);
        }

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        int max = 0;
        int index = 0;
        for (int i  = -1; i < 8; ++i) {
            if (max < mountains[i]) {
                max = mountains[i];
                index = i;
            }
        }

        cout << index << endl; // The index of the mountain to fire on.
    }
}
