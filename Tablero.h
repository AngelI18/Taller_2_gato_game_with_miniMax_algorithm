#pragma once
#include "Player.h"
#include "Bot.h"

class Tablero {
    private:
        //atributos
        Player* players[2];
        Bot* bot;
        bool gameOver;
        int Matriz[3][3];

    public:
        Tablero();
        void reiniciarJugadores();
        void reiniciarTablero();
        void agregarJugadores();
        void movimientos();
        void jugar();
        ~Tablero();
};
