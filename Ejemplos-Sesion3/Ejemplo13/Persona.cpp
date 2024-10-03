#include "Persona.hpp"
#include <cstdlib>
#include <iostream>

using namespace std;

Persona::Persona(){
	establecerGenero();
	generarDNI();
}

void Persona::establecerGenero() {
	genero = rand() % 2;
}

void Persona::generarDNI() {
	dni= new char[10];
	for(int i = 0; i<8; i++){
		dni[i]=0 + rand() % 10;
		}
	dni[8] = '\0'; //Asegurar de que la cadena es válida
	}

Persona::~Persona() {
	delete[] dni;
	}

int Persona::getEdad() {
    return edad;
    }

bool Persona::esMujer(){
    return genero;
    }
void Persona::setEdad(int edad){
    this ->edad = edad;
    }
void Persona::mostrar() const
{
	cout << "Edad: " << edad << ", Género: " << (genero ? "Mujer" : "Hombre")
         << ", DNI: " << dni << endl;
	}