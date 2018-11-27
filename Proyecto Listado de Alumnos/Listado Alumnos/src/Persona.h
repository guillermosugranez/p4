#ifndef PERSONA_H
#define PERSONA_H

using namespace std;
#include <string>

class Persona {

private:
	string _dni;
	string _nombre;
	string _primerApellido;
	string _segundoApellido;

	int _telefono;
	string _email;
	string _direccionPostal;
	string _fechaNacimiento;

public:

	Persona(const string &dni, const string &email);

	// Setters & Getters

	const string& getDireccionPostal() const;
	void setDireccionPostal(const string& direccionPostal);
	const string& getDni() const;
	void setDni(const string& dni);
	const string& getEmail() const;
	void setEmail(const string& email);
	const string& getFechaNacimiento() const;
	void setFechaNacimiento(const string& fechaNacimiento);
	const string& getNombre() const;
	void setNombre(const string& nombre);
	const string& getPrimerApellido() const;
	void setPrimerApellido(const string& primerApellido);
	const string& getSegundoApellido() const;
	void setSegundoApellido(const string& segundoApellido);
	int getTelefono() const;
	void setTelefono(int telefono);
};

#endif
