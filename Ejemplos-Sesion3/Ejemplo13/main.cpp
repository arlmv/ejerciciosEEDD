#include "Persona.hpp"
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    // Inicializar la semilla para la generación de números aleatorios
    srand(time(0));

    vector<int> edadesUsadas;
    vector<Persona> personas;
	
	cout << "Generando personas..." << endl; 

    while (personas.size() < 10) {
        int edad = 18 + rand() % 10; // Edad entre 18 y 27

        // Verificar que la edad no esté repetida
        if (find(edadesUsadas.begin(), edadesUsadas.end(), edad) == edadesUsadas.end()) {
            // Crear una nueva persona con la edad generada
            Persona nuevaPersona;
            nuevaPersona.setEdad(edad); // Establecer la edad generada
            personas.push_back(nuevaPersona);
            edadesUsadas.push_back(edad);
        }
    }

    // Mostrar la información de todas las personas
    for (const auto& persona : personas) {
        persona.mostrar();
    }
	return 0;
}
