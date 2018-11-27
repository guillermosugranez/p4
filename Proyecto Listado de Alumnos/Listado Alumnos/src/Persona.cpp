#include "Persona.h"

Persona::Persona(const string &dni, const string &email)
{
	_dni = dni;
	_email = email;

	_nombre = "";
	_primerApellido = "";
	_segundoApellido = "";
	_telefono = 0;
	_direccionPostal = "";
	_fechaNacimiento = "";
}

// Setters & Getters

const string& Persona::getDireccionPostal() const {
	return _direccionPostal;
}

void Persona::setDireccionPostal(const string& direccionPostal) {
	_direccionPostal = direccionPostal;
}

const string& Persona::getDni() const {
	return _dni;
}

void Persona::setDni(const string& dni) {
	_dni = dni;
}

const string& Persona::getEmail() const {
	return _email;
}

void Persona::setEmail(const string& email) {
	_email = email;
}

const string& Persona::getFechaNacimiento() const {
	return _fechaNacimiento;
}

void Persona::setFechaNacimiento(const string& fechaNacimiento) {
	_fechaNacimiento = fechaNacimiento;
}

const string& Persona::getNombre() const {
	return _nombre;
}

void Persona::setNombre(const string& nombre) {
	_nombre = nombre;
}

const string& Persona::getPrimerApellido() const {
	return _primerApellido;
}

void Persona::setPrimerApellido(const string& primerApellido) {
	_primerApellido = primerApellido;
}

const string& Persona::getSegundoApellido() const {
	return _segundoApellido;
}

void Persona::setSegundoApellido(const string& segundoApellido) {
	_segundoApellido = segundoApellido;
}

int Persona::getTelefono() const {
	return _telefono;
}

void Persona::setTelefono(int telefono) {
	_telefono = telefono;
}
