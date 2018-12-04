//Persona.cpp
//Funciones de la clase Persona.

#include "Persona.h"


Persona::Persona(string dni, string email, string nombre = "", string primerApellido = "", string segundoApellido = "", double telefono = 0, string direccion = "", string codPostal = "", string fechaNacimiento = "") {
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