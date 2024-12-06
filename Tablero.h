#pragma once
#include "Player.h"
#include "Bot.h"
#include <iostream>

class Tablero {
    //atributos privados
    Player* players[2];
    Bot* bot;
    bool gameOver;//si es falso implica que el juego sigue
    int matriz[3][3];//0 implica que no a sido tocada, 1 que fue utilizasa por jugagador 1 y 2 por jugador 2

    int estado();//retorna "1" para victoria de jugador 1, "2" para la del jugador 2, "0" caso de empate y "-1" en caso de que queden movimientos
    void playPvP();
    void playPvB();
    public:
        Tablero();
        void menu(int option);
        void printTable();

        ~Tablero();


};
