# Golf of Life, Game of Life in 348 characters.
A code golf version of Conway's Game of Life made in C++, but it will work with a C compiler and a few changes to the headers.
If anyone wants help understanding it, I can make a hint file, but at the moment I have no intentions of doing so.
The program can be compiled simply with `g++ life.cpp`.
So far I have not been able to find a version of the game of life any smaller than this one (it may be a world record but I doubt that). I am, however, almost certain that it can be done with even fewer characters, I just don't know how yet.
### How to run it
After compiling with `g++ life.cpp -olife` just run the outputted file (Windows: `life`, Linux `./life`). The board is by default an 18x18 field but that can easily be atlered by changing `#define s 20` to any number. Just remember that the board is 2 less than s. After starting the program, the board is randomly populated (sorry, no user input) and each generation can be stepped by pressing `enter`. Enjoy!
