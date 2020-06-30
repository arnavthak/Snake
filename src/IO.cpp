#include "IO.h"

#include <iostream>
#include <fstream>
#include <utility>
#include <algorithm>
#include <vector>

IO::IO(std::string path) : filename(path) {
    std::ifstream fileIn(path);
    std::string scorer;
    int score;
    while (fileIn >> scorer) {
        fileIn >> score;
        scores.insert(std::make_pair(scorer, score));
    }
}

void IO::Print() {
    if (scores.empty()) {
        std::cout << "No record is available!" << std::endl;
        return;
    }
    
    std::vector<std::pair<std::string, int>> sortScores;
    
    std::map<std::string, int>::iterator it;
    for (it = scores.begin(); it != scores.end(); it++) {
        sortScores.push_back(std::make_pair(it->first, it->second));
    }

    std::sort(sortScores.begin(), sortScores.end(), [] (const std::pair<std::string, int> a, const std::pair<std::string, int> b) {
        return (a.second > b.second);
    });

    std::cout << "Player" << " " << "Score" << std::endl;
    for (int i = 0; i < sortScores.size(); i++) {
        std::cout << sortScores[i].first << " " << sortScores[i].second << std::endl;
    }
}

void IO::Write() {
    std::ofstream out(filename);
    std::map<std::string, int>::iterator it;
    for (it = scores.begin(); it != scores.end(); it++) {
        out << it->first << " " << it->second << '\n';
    }
}

void IO::Add(const int point) {
    std::string player;
    char response;
    
    std::map<std::string, int>::iterator it;
    std::cout << "Name: ";

    while (std::cin >> player) {
        it = scores.find(player);
        if (it != scores.end()) {
            std::cout << "Name already present... Type y to override or n to not." << std::endl;
            std::cin >> response;
            if (response == 'y') {
                break;
            } else {
                std::cout << "Name: ";
            }
        } else {
            break;
        }
    }

    scores[player] = point;
}