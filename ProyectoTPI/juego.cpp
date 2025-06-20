#include <iostream>
#include <cstdlib>
#include "tiradainicial.h"
#include "dados.h"

using namespace std;

void comenzarJuego() {
    int JugadorP = tiradaInicial();

    if (JugadorP == 1){
        cout << "Jugador 1: " << endl;
        cout << endl;
        cout << "2 dados de 12 caras" << endl;
        int dados12[2];
        cargarDados12(dados12, 2);
        mostrarDados(dados12, 2);

        cout << "6 dados de 6 caras" << endl;
        int dados6[6];
        cargarDados6(dados6, 6);
        mostrarDados(dados6, 6);
    } else {
        cout << "Jugador 1: " << endl;
        cout << endl;
        cout << "2 dados de 12 caras" << endl;
        int dados12[2];
        cargarDados12(dados12, 2);
        mostrarDados(dados12, 2);

        cout << "6 dados de 6 caras" << endl;
        int dados6[6];
        cargarDados6(dados6, 6);
        mostrarDados(dados6, 6);
    }


    system("pause");
}
