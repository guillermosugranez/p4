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
	list <Alumno>::iterator it;

	for (it = lista_.begin(); it != lista_.end(); it++) {
		if (it->getDni() == a.getDni()) {
			esLider_ = true;
			return true;
		}
	}
	cout << "Error: no se ha encontrado al alumno en la base de datos." << endl;
	return false;
}


bool Agenda::modificarAlumno(Alumno &a) {
	string nombre, primerApellido, segundoApellido, fechaNacimiento, email, direccion, codPostal;
	double telefono;
	int grupo, cursoMasAlto;
	string esLider;
	list <Alumno>::iterator it;

	for (it = lista_.begin(); it != lista_.end(); it++) {
		if (it->getDni() == a.getDni()) {
			
			cout << "Introduzca nuevo nombre: ";
			getline(cin, nombre);
			setNombre(nombre);

			cout << "Introduzca nuevo primer apellido: ";
			getline(cin, primerApellido);
			setPrimerApellido(primerApellido);

			cout << "Introduzca nuevo segundo apellido: ";
			getline(cin, segundoApellido);
			setSegundoApellido(segundoApellido);

			cout << "Introduzca nueva fecha de nacimiento: ";
			getline(cin, fechaNacimiento);
			setFechaNacimiento(fechaNacimiento);

			cout << "Introduzca nuevo telefono: ";
			cin >> telefono;
			setTelefono(telefono);

			cout << "Introduzca nuevo email: ";
			getline(cin, email);
			setEmail(email);

			cout << "Introduzca nuevo direccion: ";
			getline(cin, direccion);
			setDireccion(direccion);			

			cout << "Introduzca nuevo codigo postal: ";
			getline(cin, codPostal);
			setCodPostal(codPostal);

			cout << "Introduzca nuevo grupo: ";
			cin >> grupo;
			setGrupo(grupo);

			cout << "Introduzca si es lider de grupo (true o false): ";
			if ((cin >> esLider) == "true") {
				setEsLider(true);
			}
			else {
				setEsLider(false);
			}

			cout << "Introduzca curso mas alto: ";
			cin >> cursoMasAlto;
			setCursoMasAlto(cursoMasAlto);

			return true;
		}
	}
	cout << "Error: no se ha encontrado al alumno en la base de datos." << endl;
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