#include <iostream>
#include "Tablero.h"

void printMenu() {
    std:: string espaciador ="---------------------";
    std:: string inf="1) Jugador conta jugador\n2) Jugador contra bot\n3) Cancelar y salir";
    std::cout<<espaciador<<std::endl;
    std::cout<<inf<<std::endl;
    std::cout<<espaciador<<std::endl;
}

int verificar() {
    int n;
    std::cout<<"> ";
    while(!(std::cin >> n)) {
        std::cin.clear();
        std::cin.ignore(1000,'\n');
        system("cls");
        printMenu();
        std::cout<<"> ";
    }
    std::cin.clear();
    std::cin.ignore(1000,'\n');
    return n;
}

int main()
{
    Tablero* tablero =new Tablero();

    int option=0;

    while(option!=3) {
        system("cls");
        if(option==1||option==2) tablero->menu(option);
        printMenu();
        option=verificar();
    }
}
