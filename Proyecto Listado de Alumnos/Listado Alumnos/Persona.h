//Persona.h
//Definicion de la clase Persona.

#ifndef PERSONA_H
#define PERSONA_H

#include "Agenda.h"
#include <string>
using namespace std;

class Persona {

private:
	string dni_;
	string nombre_;
	string primerApellido_;
	string segundoApellido_;
	string fechaNacimiento_;
	int telefono_;
	string email_;
	string direccion_;

public:

    // CONSTRUCTOR

    Persona();

	/*
	Nombre: Persona.
	Objetivo: Inicializar por defecto las variables de la clase Persona.
	Parametros de entrada:
		- Ninguno.
	Devuelve:
		- Nada.
	*/
	Persona(string const &dni, string const &email, string &nombre, string &primerApellido, string &segundoApellido, double telefono, string &direccion, string &codPostal, string &fechaNacimiento) {
		dni_ = dni;
		email_ = email;
		nombre_ = nombre;
		primerApellido_ = primerApellido;
		segundoApellido_ = segundoApellido;
		telefono_ = telefono;
		direccion_ = direccion;
		fechaNacimiento_ = fechaNacimiento;
	}

	// DESTRUCTOR
	//virtual ~Persona();

	//OBSERVADORES
	//=============
	
	/*
	Nombre: getDireccion.
	Objetivo: Mostrar por pantalla la dirección donde reside de la persona.
	Parametros de entrada:
		- Ninguno.
	Devuelve:
		- string: Cadena cuyos caracteres corresponden con la dircción donde reside de la persona.
	*/
	string getDireccion_() const;

	/*
	Nombre: setEmail.
	Objetivo: Modificar el Email de la persona.
	Parametros de entrada:
		- string: Cadena de caracteres que corresponde con el Email de la persona a modificar .
	Devuelve:
		- Nada.
	*/
	string getEmail_() const;

	/*
	Nombre: getTelefono.
	Objetivo: Mostrar por pantalla el telefono de la persona.
	Parametros de entrada:
		- Ninguno.
	Devuelve:
		- double: Double cuyo valor corresponde con el telefono de la persona.
	*/
	double getTelefono_() const;

	/*
	Nombre: getFechaNacimiento.
	Objetivo: Mostrar por pantalla la fecha de nacimiento de la persona.
	Parametros de entrada:
		- Ninguno.
	Devuelve:
		- string: Cadena cuyos caracteres corresponden con la fecha de nacimiento de la persona.
	*/
	string getFechaNacimiento_() const;

	/*
	Nombre: getSegundoApellido.
	Objetivo: Mostrar por pantalla el segundo apellido de la persona.
	Parametros de entrada:
		- Ninguno.
	Devuelve:
		- string: Cadena cuyos caracteres corresponden con el segundo apellido de la persona.
	*/
	string getSegundoApellido_() const;

	/*
	Nombre: getPrimerApellido.
	Objetivo: Mostrar por pantalla el primer apellido de la persona.
	Parametros de entrada:
		- Ninguno.
	Devuelve:
		- string: Cadena cuyos caracteres corresponden con el primer apellido de la persona.
	*/
	string getPrimerApellido_() const;

	/*
	Nombre: getNombre.
	Objetivo: Mostrar por pantalla el nombre de la persona.
	Parametros de entrada:
		- Ninguno.
	Devuelve:
		- string: Cadena cuyos caracteres corresponden con el nombre de la persona.
	*/
	string getNombre_() const;

	/*
	Nombre: getDni.
	Objetivo: Mostrar por pantalla el Dni que corresponde con la persona.
	Parametros de entrada:
		- Ninguno.
	Devuelve:
		- string: Cadena cuyos caracteres corresponden con Dni de la persona.
	*/
	string getDni_() const;


	//MODIFICADORES
	//=============

	/*
	Nombre: setDireccion.
	Objetivo: Modificar la Direccion de la persona.
	Parametros de entrada:
		- string: Cadena de caracteres que corresponde con la direccion de la persona a modificar .
	Devuelve:
		- Nada.
	*/
	void setDireccion_(string direccion_);

	/*
	Nombre: setEmail.
	Objetivo: Modificar el Email de la persona.
	Parametros de entrada:
		- string: Cadena de caracteres que corresponde con el Email de la persona a modificar .
	Devuelve:
		- Nada.
	*/
	void setEmail_(string email_);

	/*
	Nombre: setTelefono.
	Objetivo: Modificar el Teléfono de la persona.
	Parametros de entrada:
		- double: Double que corresponde con el Teléfono de la persona a modificar .
	Devuelve:
		- Nada.
	*/
	void setTelefono_(double telefono_);

	/*
	Nombre: setFechaNacimiento.
	Objetivo: Modificar el la Fecha de Nacimiento de la persona.
	Parametros de entrada:
		- string: Cadena de caracteres que corresponde con la Fecha de Nacimiento de la persona a modificar .
	Devuelve:
		- Nada.
	*/
	void setFechaNacimiento_(string fechaNacimiento_);

	/*
	Nombre: setSegundoApellido.
	Objetivo: Modificar el Segundo Apellido de la persona.
	Parametros de entrada:
		- string: Cadena de caracteres que corresponde con el Segundo Apellido de la persona a modificar .
	Devuelve:
		- Nada.
	*/
	void setSegundoApellido_(string segundoApellido_);

	/*
	Nombre: setPrimerApellido.
	Objetivo: Modificar el Primer Apellido de la persona.
	Parametros de entrada:
		- string: Cadena de caracteres que corresponde con el Primer Apellido de la persona a modificar .
	Devuelve:
		- Nada.
	*/
	void setPrimerApellido_(string primerApellido_);

	/*
	Nombre: setDni.
	Objetivo: Modificar el Nombre de la persona.
	Parametros de entrada:
		- string: Cadena de caracteres que corresponde con el nombre de la persona a modificar .
	Devuelve:
		- Nada.
	*/
	void setNombre_(string nombre_);

	/*
	Nombre: setDni.
	Objetivo: Modificar el Dni de la persona.
	Parametros de entrada:
		- string: Cadena de caracteres que corresponde con el Dni de la persona a modificar .
	Devuelve:
		- Nada.
	*/
	void setDni_(string dni_);

};

#endif
