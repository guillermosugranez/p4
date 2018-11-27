#ifndef AGENDA_H
#define AGENDA_H

#include <list>
#include <string>
#include "Alumno.h"

#include <iostream>

using namespace std;

class Agenda {

private:
	unsigned int _maxAlumnos;
	list<Alumno> _lista;

	Alumno buscarAlumno();

public:

	unsigned int get_maxAlumnos();

	void set_maxAlumnos(unsigned int _maxAlumnos);

	list<Alumno> buscarAlumno(const string &nombre, int criterioBusqueda) const;

	list<Alumno> buscarAlumno(int) const;

	bool insertarAlumno(const Alumno &a);

	bool borrarAlumno(const Alumno &a);

	void listarAlumnos(int criterio, bool orden) const;

	bool establecerLider(Alumno &a);

	bool modificarAlumno(Alumno &a);
};

#endif
