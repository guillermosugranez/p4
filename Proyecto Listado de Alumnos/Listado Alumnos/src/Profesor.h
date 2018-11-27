#ifndef PROFESOR_H
#define PROFESOR_H

#include "Persona.h"

class Profesor : public Persona {

private:
	bool Coordinador;
	string Usuario;
	string pass;

public:
	bool getCoordinador();

	void setCoordinador(bool Coordinador);

	string getUsuario();

	void setUsuario(int Usuario);

	string getPass();

	void setPass(int pass);

	void guardarDatos(const char * nombreArchivo);

	void recuperarDatos(const char * nombreArchivo);
};

#endif
