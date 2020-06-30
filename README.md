# CPPND: Capstone Snake Game Example

<img src="snake_game.gif"/>

The Capstone Project gives you a chance to integrate what you've learned throughout this program. This project will become an important part of your portfolio to share with current and future colleagues and employers.

In this project, you can build your own C++ application or extend this Snake game, following the principles you have learned throughout this Nanodegree Program. This project will demonstrate that you can independently create applications using a wide range of C++ features.

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* SDL2 >= 2.0
  * All installation instructions can be found [here](https://wiki.libsdl.org/Installation)
  * Note that for Linux, an `apt` or `apt-get` installation is preferred to building from source.
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./SnakeGame`.

## Code Structure
### Classes
1. Game - the class that holds the game loop inside of it and handles the logic of the game and uses other classes to handle the game.
2. Controller - the class that handles input for the game loop and is used inside the function Game::Run to update the game based on user input.
3. Renderer - the class that handles the rendering of the game and is passed to Game::Run to be used in the game loop to render the game window and update the graphics.
4. Snake - the class that encapsulates the behavior of the main player-controlled entity, the snake and all of the data structures that it uses.
5. IO - the class that handles the input/output of the menu and reads and writes to the file leaderboard.txt in data, and can print the contents of the file for us.
6. Menu - the class that handles the user input to decide what to do in main.cpp

### Files
1. main.cpp - the file where the int main() function is created and the file where all of the classes are tied together to make the actual logic that is executed.

## Rubric
1. "The project demonstrates an understanding of C++ functions and control structures" by using lots of control structures in class IO in the function IO::Add for overriding a user's high score with their new high score and in main.cpp where the input the user selected was put through a control structure to decide the next block of code to execute.
2. "The project reads data from a file and process the data, or the program writes data to a file" in class IO where function IO::Write writes the values in the scores map to the leaderboard.txt file in data and in IO::Print where the data from leaderboard.txt is read and parsed and then printed to the console.
3. "The project accepts user input and processes the input" in class Menu under function Menu::makeMenu where an input of 1-3 is accepted to decide what to do in main.cpp and input is retaken if the number is not from 1-3 or it is not a number.
4. "The project uses Object Oriented Programming techniques" in class Menu and class IO where these classes each have private data members (attributes) and have public functions (class methods) to perform the neccessary tasks.
5. "Classes use appropriate access specifiers for class members" in class Menu and class IO, every data member and/or class method is under a private, protected, or public access specifier and no values or functions are not contained by an access specificier.
