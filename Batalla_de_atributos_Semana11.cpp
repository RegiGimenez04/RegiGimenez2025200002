
#include <iostream>
#include <string>

using namespace std;

struct Personaje {
    string nombre;
    int puntos_ataque;

    void mostrarInfo() const {
        cout << nombre << " (Poder de Pelea / Ataque: " << puntos_ataque << ")" << endl;
    }
};

void batalla_de_atributos(const Personaje& personaje1, const Personaje& personaje2) {
    cout << "   ¡TORNEO DE LAS ARTES MARCIALES!     " << endl;
    cout << "Guerrero Z 1: ";
    personaje1.mostrarInfo();
    cout << "Guerrero Z 2: ";
    personaje2.mostrarInfo();
    cout << "----------------------------------------" << endl;

    if (personaje1.puntos_ataque > personaje2.puntos_ataque) {
        cout << "¡" << personaje1.nombre << " gana el combate con " 
             << personaje1.puntos_ataque << " puntos de ataque!" << endl;
    } 
    else if (personaje2.puntos_ataque > personaje1.puntos_ataque) {
        cout << "¡" << personaje2.nombre << " gana el combate con " 
             << personaje2.puntos_ataque << " puntos de ataque!" << endl;
    } 
    else {
        cout << "¡Es un choque de poderes igualado! Ambos tienen " 
             << personaje1.puntos_ataque << " puntos de ataque." << endl;
    }
}

int main() {
    Personaje goku = {"Goku Blue", 9500};
    Personaje vegeta = {"Vegeta SS3", 9450};

    batalla_de_atributos(goku, vegeta);

    return 0;
}
