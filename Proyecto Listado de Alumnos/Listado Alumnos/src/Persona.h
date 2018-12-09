//Persona.h
//Definicion de la clase Persona.

#ifndef PERSONA_H
#define PERSONA_H

#include <string>
using namespace std;

class Persona {

private:
	string dni_;
	string nombre_;
	string primerApellido_;
	string segundoApellido_;
	string fechaNacimiento_;
	double telefono_;
	string email_;
	string direccion_;
	string codPostal_;

public:

	//CONSTRUCTOR
	//===========

	/*
	Nombre: Persona.
	Objetivo: Inicializar por defecto las variables de la clase Persona.
	Parametros de entrada:
		- Ninguno.
	Devuelve:
		- Nada.
	*/
	Persona(string const &dni, string const &email, string nombre = "", string primerApellido = "", string segundoApellido = "", double telefono = 0, string direccion = "", string codPostal = "", string fechaNacimiento = "") {
		dni_ = dni;
		email_ = email;
		nombre_ = nombre;
		primerApellido_ = primerApellido;
		segundoApellido_ = segundoApellido_;
		telefono_ = telefono;
		direccion_ = direccion;
		codPostal_ = codPostal;
		fechaNacimiento_ = fechaNacimiento;
	}

	//OBSERVADORES

	inline string getDni() const {
		return dni_;
	}

	inline string getNombre() const {
		return nombre_;
	}

	inline string getPrimerApellido() const {
		return primerApellido_;
	}

	inline string getSegundoApellido() const {
		return segundoApellido_;
	}

	inline string getFechaNacimiento() const {
		return fechaNacimiento_;
	}

	inline double getTelefono() const {
		return telefono_;
	}

	inline string getEmail() const {
		return email_;
	}

	inline string getDireccion() const {
		return direccion_;
	}

	inline string getCodPostal() const {
		return codPostal_;
	}


	//MODIFICADORES

	inline void setDni(string const &dni) {
		dni_ = dni;
	}

	inline void setNombre(string const &nombre) {
		nombre_ = nombre;
	}

	inline void setPrimerApellido(string const &primerApellido) {
		primerApellido_ = primerApellido;
	}

	inline void setSegundoApellido(string const &segundoApellido) {
		segundoApellido_ = segundoApellido;
	}

	inline void setFechaNacimiento(string const &fechaNacimiento) {
		fechaNacimiento_ = fechaNacimiento;
	}

	inline void setTelefono(double telefono) {
		telefono_ = telefono;
	}

	inline void setEmail(string const &email) {
		email_ = email;
	}

	inline void setDireccion(string const &direccion) {
		direccion_ = direccion;
	}

	inline void setCodPostal(string const &codPostal) {
		codPostal_ = codPostal;
	}
};

#endif
