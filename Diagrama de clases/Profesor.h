#ifndef PROFESOR_H
#define PROFESOR_H

class Profesor : public Persona {

private:
	bool Coordinador;
	string Usuario;
	string pass;

public:
	bool getCoordinador();

	string getUsuario();

	void setUsuario(int Usuario);

	string getPass();

	void setPass(int pass);

	void setCoordinador(bool Coordinador);

	void guardarDatos(char const* nombreArchivo);

	void recuperarDatos(char const* nombreArchivo);
};

#endif
