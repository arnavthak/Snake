#include "menu.h"
#include <iostream>

void Menu::makeMenu() {
    int input;
    
    std::cout << "Please enter an int from 1-3:\n" 
    << "1 is to play\n" << "2 is to see the rankings\n" << "3 is to quit\n" << std::endl;

    while (std::cin >> input) {
        if (input==1 || input==2 || input==3) {
            break;
        } else {
            std::cout << "Please enter a number from 1-3\n" << std::endl;
        }
    }

    choice = input;
}