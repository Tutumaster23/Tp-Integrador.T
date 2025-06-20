#include <iostream>
#include <cstdlib>
#include "dados.h"
#include "Limpiar.h"

using namespace std;


int tiradaInicial() {
        cout << "========================================="  << endl;
        cout << "== El jugador con mayor tirada empieza ==" << endl;
        cout << "=========================================" << endl;
        int Jugador1 = 0, Jugador2 = 0, JugadorP = 0;
        limpiarPantalla();

        while(Jugador1 == Jugador2){
            int dados6[1];

            cout << "Primer dado: " << endl;
            cargarDados6(dados6, 1);
            mostrarDados(dados6, 1);

            Jugador1 = dados6[0];

            system("pause");
            cout << endl;

            cout << "Segundo dado: " << endl;
            cargarDados6(dados6, 1);
            mostrarDados(dados6, 1);

            Jugador2 = dados6[0];

            limpiarPantalla();

            if (Jugador1 == Jugador2){
                cout << "Tirar de vuelta...." << endl;
                limpiarPantalla();
            }

        }

        if (Jugador1 > Jugador2){
            JugadorP = 1;
            cout << "Empieza Jugador 1: " << Jugador1 << endl;
            cout << "Sigue Jugador 2: " << Jugador2 << endl;
        } else {
            JugadorP = 2;
            cout << "Empieza Jugador 1: " << Jugador2 << endl;
            cout << "Sigue Jugador 2: " << Jugador1 << endl;
        }

        limpiarPantalla();
        return JugadorP;
}
