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

	//CONSTRUCTOR.

	Persona(string dni, string email, string nombre = "", string primerApellido = "", string segundoApellido = "", string fechaNacimiento = "", double telefono = 0, string direccion = "", string codPostal = "");


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

	inline void setDni(string dni) {
		dni_ = dni;
	}

	inline void setNombre(string nombre) {
		nombre_ = nombre;
	}

	inline void setPrimerApellido(string primerApellido) {
		primerApellido_ = primerApellido;
	}

	inline void setSegundoApellido(string segundoApellido) {
		segundoApellido_ = segundoApellido;
	}

	inline void setFechaNacimiento(string fechaNacimiento) {
		fechaNacimiento_ = fechaNacimiento;
	}

	inline void setTelefono(double telefono) {
		telefono_ = telefono;
	}

	inline void setEmail(string email) {
		email_ = email;
	}

	inline void setDireccion(string direccion) {
		direccion_ = direccion;
	}

	inline void setCodPostal(string codPostal) {
		codPostal_ = codPostal;
	}
};

#endif
