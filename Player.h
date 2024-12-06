#pragma once
#include <string>

class Player {
    private:
        std::string name;
        int score;
    public:
        Player(std::string name);
        int getScore();
        std::string getName();
        ~Player();
};
