//agenda.cpp
//Funciones de la clase agenda.

#include <list>
#include <iostream>
#include "Agenda.h"
#include "Alumno.h"
using namespace std;



void Agenda::listarAlumnos(bool orden) const {
	list <Alumno> lista;
	list <Alumno>::iterator it;

	for (it = lista.begin(); it != lista.end(); it++) {
		//NO SE COMO LISTAR A LOS ALUMNOS EN LENGUAJE MARKDOWN.
	}	
}

list <Alumno> Agenda::buscarAlumno(string const &nombre, int criterioBusqueda) const {
	list <Alumno> consulta;
	list <Alumno>::iterator it;

	consulta.clear();

	for (it = lista_.begin(); it != lista_.end(); it++) {
		
		//Buscamos por su DNI.
		if (criterioBusqueda == 1) {
			if (it->getDni() == nombre) {
				consulta.push_back(*it);
			}
		}

		//Buscamos por su primer apellido.
		if (criterioBusqueda == 2) {
			if (it->getPrimerApellido() == nombre) {
				consulta.push_back(*it);
			}
		}

		//Buscamos por el equipo en el que está.
		if (criterioBusqueda == 3) {
			if (it->getGrupo() == nombre) {
				consulta.push_back(*it);
			}
		}
	}
	return consulta;
}

bool Agenda::establecerLider(Alumno &a) {
	return false; // si no tiene exito la operacion
}

bool Agenda::modificarAlumno(Alumno &a) {
	return false;
}

bool Agenda::insertarAlumno(const Alumno &a) {
	if(_lista.size() == _maxAlumnos) {
		cerr<<"ERROR. Se ha alcanzado el máximo de Alumnos"<<endl;
		return false;
	}
	else {
		_lista.push_back(a); // Mete el alumno en la lista si hay hueco
		return true;
	}
}

bool Agenda::borrarAlumno(const Alumno &a) {
	//_lista.remove(a);

	return true;
}