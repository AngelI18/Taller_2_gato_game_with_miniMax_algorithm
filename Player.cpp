//
// Created by angel on 16/11/2024.
//

#include "Player.h"

Player::Player(std::string name, int number) {
    this->name = name;
    this->number = number;
    score = 0;
}

std::string Player::getName() {
    return name;
}
int Player::getNumber(){
    return number;
}

int Player::getScore() {
    return score;
}

Player::~Player(){}
