//
// Created by angel on 16/11/2024.
//

#include "Player.h"

Player::Player(std::string name) {
    this->name = name;
    score = 0;
}

std::string Player::getName() {
    return name;
}

int Player::getScore() {
    return score;
}

Player::~Player(){}
