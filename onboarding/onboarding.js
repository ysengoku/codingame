/**
 * CodinGame planet is being attacked by slimy insectoid aliens.
 * <---
 * Hint:To protect the planet, you can implement the pseudo-code provided in the statement, below the player.
 **/


// game loop
while (true) {
    const enemy1 = readline(); // name of enemy 1
    const dist1 = parseInt(readline()); // distance to enemy 1
    const enemy2 = readline(); // name of enemy 2
    const dist2 = parseInt(readline()); // distance to enemy 2

    // Write an action using console.log()
    // To debug: console.error('Debug messages...');


    // You have to output a correct ship name to shoot ("Buzz", enemy1, enemy2, ...)
    const name = dist1 < dist2 ? enemy1 : enemy2;
    console.log(name);
}

