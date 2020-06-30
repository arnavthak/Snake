#ifndef IO_H
#define IO_H

#include <string>
#include <map>

// The class that manages scoreboard.txt in ../data
class IO {

public:
    // constructor
    IO(std::string path);
    // general behavior methods
    void Print();
    void Write();
    void Add(const int point);
private:
    // The path to scoreboard.txt or other output file
    std::string filename;
    // Links numericals scores to player name
    std::map<std::string, int> scores;
};

#endif