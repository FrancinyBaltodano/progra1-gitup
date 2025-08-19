#include <iostream>
using namespace std;

// Clase simple de Pokémon
class Pokemon {
public:
    string nombre;
    int vida;
    int ataque;
};

int main() {
    // Crear dos pokemones
    Pokemon p1;
    Pokemon p2;

    // Asignar valores al primer pokémon
    p1.nombre = "Pikachu";
    p1.vida = 100;
    p1.ataque = 25;

    // Asignar valores al segundo pokémon
    p2.nombre = "Charmander";
    p2.vida = 100;
    p2.ataque = 20;

    // Mostrar datos iniciales
    cout << p1.nombre << " tiene " << p1.vida << " de vida";
    cout << p2.nombre << " tiene " << p2.vida << " de vida";

    // Pikachu ataca a P2
    cout << p1.nombre << " ataca a " << p2.nombre << " causando " << p1.ataque << " de daño";
    p2.vida = p2.vida - p1.ataque;  // aquí usamos el punto para cambiar la vida

    // Mostrar la vida actual de Pokemon 2
    cout << p2.nombre << " ahora tiene " << p2.vida << " de vida";

    return 0;
}
