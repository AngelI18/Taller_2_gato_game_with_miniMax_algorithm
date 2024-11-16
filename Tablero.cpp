//
// Created by angel on 16/11/2024.
//

#include "Tablero.h"


//construtor
Tablero::Tablero() {
    //se crea el tablero en 0
    reiniciarTablero();
    //se llena de nullptr los jugadores
    reiniciarJugadores();
    bot=nullptr;
    gameOver=false;
}

void Tablero::reiniciarTablero() {
    for(int i = 0;i<3;i++) {
        for(int j=0;j<3;j++) {
            Matriz[i][j] = 0;
        }
    }
}

void Tablero::reiniciarJugadores() {
    for(int i = 0;i<2;i++) {
        players[i]==nullptr;
    }
}