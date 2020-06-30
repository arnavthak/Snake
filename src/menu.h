#ifndef MENU_H
#define MENU_H

class Menu {

public:
    // general behavior methods
    void makeMenu();
    // getters/setters
    int getChoice() { return choice; }
private:
    int choice;
};

#endif