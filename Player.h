#pragma once
#include <string>

class Player {
    private:
        std::string name;
        int number;
        int score;
    public:
        Player(std::string name, int number);
        int getScore();
        int getNumber();
        std::string getName();
        ~Player();
};
