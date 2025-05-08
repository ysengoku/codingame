#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/

int main()
{
    int light_x; // the X position of the light of power
    int light_y; // the Y position of the light of power
    int initial_tx; // Thor's starting X position
    int initial_ty; // Thor's starting Y position
    cin >> light_x >> light_y >> initial_tx >> initial_ty; cin.ignore();

    int offset_x = light_x - initial_tx;
    int offset_y = light_y - initial_ty;

    // game loop
    while (1) {
        int remaining_turns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remaining_turns; cin.ignore();

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        string dir = "";

        if (offset_y > 0) {
            dir += "S";
            --offset_y;
        }
        if (offset_y < 0) {
            dir += "N";
            ++offset_y;
        }
        if (offset_x > 0) {
            dir += "E";
            --offset_x;
        }
        if (offset_x < 0) {
            dir += "W";
            ++offset_x;
        }

        // A single line providing the move to be made: N NE E SE S SW W or NW
        cout << dir << endl;
    }
}
