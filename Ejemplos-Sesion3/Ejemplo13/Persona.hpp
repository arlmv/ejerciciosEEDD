#ifndef PERSONA_HPP
#define PERSONA_HPP

class Persona
{
public:
    Persona();
    int getEdad();
    bool esMujer();
    void setEdad(int edad); //control i da el formato
    void mostrar() const;
    ~Persona();

private:
	void establecerGenero();
	void generarDNI();

    bool genero; // 1 mujer 0 hombre
    int edad;
    char* dni;
};

#endif // PERSONA_HPP
