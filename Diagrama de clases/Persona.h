#ifndef PERSONA_H
#define PERSONA_H

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
	Persona(string const& dni, string const& email);

	/**
	 * Setters & Getters
	 */
	string const& getDireccionPostal() const;

	void setDireccionPostal(string const& direccionPostal);

	string const& getDni() const;

	void setDni(string const& dni);

	string const& getEmail() const;

	void setEmail(string const& email);

	string const& getFechaNacimiento() const;

	void setFechaNacimiento(string const& fechaNacimiento);

	string const& getNombre() const;

	void setNombre(string const& nombre);

	string const& getPrimerApellido() const;

	void setPrimerApellido(string const& primerApellido);

	string const& getSegundoApellido() const;

	void setSegundoApellido(string const& segundoApellido);

	int getTelefono() const;

	void setTelefono(int telefono);
};

#endif
