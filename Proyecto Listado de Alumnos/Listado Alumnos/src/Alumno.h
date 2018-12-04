#ifndef ALUMNO_H
#define ALUMNO_H

#include "Persona.h"

class Alumno : public Persona {

private:
	int grupo_;
	bool esLider_;
	int cursoMasAlto_;

public:

	//CONSTRUCTOR

	Alumno(string dni, string email, string nombre = "", string primerApellido = "", string segundoApellido = "", string fechaNacimiento = "", double telefono = 0, string direccion = "", string codPostal = "", int grupo = 0, bool esLider = false, int cursoMasAlto = 0): Persona(dni, email, nombre, primerApellido, segundoApellido, fechaNacimiento, telefono, direccion, codPostal) {
		grupo_ = grupo;
		esLider_ = esLider;
		cursoMasAlto_ = cursoMasAlto;
	}


	//OBSERVADORES

	int getGrupo() const {
		return grupo_;
	}

	bool getEsLider() const {
		return esLider_; 
	}

	int getCursoMasAlto() const {
		return cursoMasAlto_;
	}


	//MODIFICADORES
	
	void setGrupo(int grupo);
	void setCursoMasAlto(int cursoMasAlto);
	void setEsLider(bool esLider);
};

#endif
