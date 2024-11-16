#pragma once
#include "Player.h"
#include "Bot.h"

class Tablero {
    private:
      Player* player[2];
      Bot* bot;
      bool gameOver;
      public:
        Tablero();
        ~Tablero();
};
