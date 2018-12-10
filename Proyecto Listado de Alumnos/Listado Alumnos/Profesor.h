#ifndef PROFESOR_H
#define PROFESOR_H

#include "Agenda.h"

class Profesor : public Persona {

private:
	bool coordinador_;

public:
	
	// CONSTRUCTOR
	
	Profesor(const string& dni, const string& email, string nombre, string primerApellido, string segundoApellido, double telefono, string direccion, string codPostal, string fechaNacimiento, bool Coordinador) :
		Persona(dni, email, nombre, primerApellido, segundoApellido, telefono, direccion, codPostal, fechaNacimiento) {
		
		coordinador_ = Coordinador;
	}

	// DESTRUCTOR

	//~Profesor();

	// OBSERVADORES

	bool getCoordinador() const;
        
	string getUsuario() const;
        
	string getPass() const;

	// MODIFICADORES

	void setCoordinador(bool Coordinador);

	void setUsuario(int Usuario);

	void setPass(int pass);

	void guardarDatos(const char * nombreArchivo);

	void recuperarDatos(const char * nombreArchivo);
};

#endif
