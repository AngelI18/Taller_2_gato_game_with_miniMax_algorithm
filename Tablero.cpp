#pragma once
#include "Tablero.h"


Tablero::Tablero() {
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            matriz[i][j] = 0;
        }
        if(i<2)players[i]=nullptr;
    }
    bot = nullptr;
    gameOver = false;
}

void Tablero::printTable() {
    std :: string tablero = "";
    int cont=0;
    for(int i =0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cont++;
            switch(matriz[i][j]) {
                case 1:
                    if(j<2) {
                        tablero=tablero+"X|";
                    }else {
                        tablero=tablero+"X\n";
                    }
                    break;
                case 2:
                    if(j<2) {
                        tablero=tablero+"O|";
                    }else {
                        tablero=tablero+"O\n";
                    }
                    break;
                default:
                    std::string dato = std::to_string(cont);
                    if(j<2) {
                        tablero=tablero+dato+"|";
                    }else {
                        tablero=tablero+dato+"\n";
                    }
                    break;
            }
        }
        if(i<2) {
            tablero=tablero+"-+-+-\n";
        }
    }

    system("cls");
    std :: cout << tablero;
}

void Tablero::menu(int option) {

}
