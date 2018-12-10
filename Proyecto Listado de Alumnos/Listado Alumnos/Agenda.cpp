//agenda->cpp
//Funciones de la clase agenda->

#include "Agenda.h"

using namespace std;

// OBSERVADORES

list<Alumno> Agenda::getLista_() const {
	return lista_;
}
int Agenda::getNumAlumnos_() const {
	return numAlumnos_;
}
unsigned int Agenda::getMaxAlumnos_() const {
	return maxAlumnos_;
}

void Agenda::listarAlumnos(bool orden) const {

	for(auto it = lista_.begin(); it != lista_.end(); it++) {
		//NO SE COMO LISTAR A LOS ALUMNOS EN LENGUAJE MARKDOWN.
            cout<<"Hola"<<endl;
	}	
}

list <Alumno> Agenda::buscarAlumno(string const &nombre, int criterioBusqueda) const {
	list <Alumno> consulta;

	consulta.clear();

	for (auto it = lista_.begin(); it != lista_.end(); it++) {
		
		//Buscamos por su DNI.
		if (criterioBusqueda == 1) {
			if(it->getDni_() == nombre) {
                            consulta.push_back(*it);
			}
		}

		//Buscamos por su primer apellido.
		if (criterioBusqueda == 2) {
			if (it->getPrimerApellido_() == nombre) {
				consulta.push_back(*it);
			}
		}

		//Buscamos por el equipo en el que está.
		if (criterioBusqueda == 3) {
			if (it->getGrupo_() == 1) {
				consulta.push_back(*it);
			}
		}
	}
	return consulta;
}

// MODIFICADORES

void Agenda::setLista_(list<Alumno> lista_) {
	this->lista_ = lista_;
}

void Agenda::setNumAlumnos_(int numAlumnos_) {
	this->numAlumnos_ = numAlumnos_;
}

void Agenda::setMaxAlumnos_(unsigned int maxAlumnos_) {
	this->maxAlumnos_ = maxAlumnos_;
}

bool Agenda::insertarAlumno(Alumno const &a) {

	//Comprobamos si la lista no está completa->
	if(lista_.size() == maxAlumnos_) {
		cout << "ERROR. Se ha alcanzado el máximo de Alumnos" << endl;
		return false;
	}

	else {
		for (auto it = lista_.begin(); it != lista_.end(); it++) {
			
			//Comprobamos que tenga un Dni y un Email diferente. (MIRAR SI ESTA BIEN)
			if ((it->getDni_() == a.getDni_()) && (it->getEmail_() == a.getEmail_())) {
				cout << "Error: el alumno ya existe." << endl;
				return false;
			}
		}
		lista_.push_back(a);

		return true;
	}
}


bool Agenda::borrarAlumno(Alumno const &a) {

	//Solo borraremos al primer alumno con el que coincida el DNI y el Email.
	for (auto it = lista_.begin(); it != lista_.end(); it++) {
		if ((it->getDni_() == a.getDni_()) && (it->getEmail_() == a.getEmail_())) {
			lista_.erase(it);
			return true;
		}
	}
	cout << "Error: no se ha encontrado al alumno en la base de datos." << endl;
	return false;
}


bool Agenda::establecerLider(Alumno &a) {

	for (auto it = lista_.begin(); it != lista_.end(); it++) {
		if (it->getDni_() == a.getDni_()) {
			a.setEsLider_(true);
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

	for (auto it = lista_.begin(); it != lista_.end(); it++) {
		if (it->getDni_() == a.getDni_()) {
			
			cout << "Introduzca nuevo nombre: ";
			getline(cin, nombre);
			a.setNombre_(nombre);

			cout << "Introduzca nuevo primer apellido: ";
			getline(cin, primerApellido);
			a.setPrimerApellido_(primerApellido);

			cout << "Introduzca nuevo segundo apellido: ";
			getline(cin, segundoApellido);
			a.setSegundoApellido_(segundoApellido);

			cout << "Introduzca nueva fecha de nacimiento: ";
			getline(cin, fechaNacimiento);
			a.setFechaNacimiento_(fechaNacimiento);

			cout << "Introduzca nuevo telefono: ";
			cin >> telefono;
			a.setTelefono_(telefono);

			cout << "Introduzca nuevo email: ";
			getline(cin, email);
			a.setEmail_(email);

			cout << "Introduzca nuevo direccion: ";
			getline(cin, direccion);
			a.setDireccion_(direccion);			

			cout << "Introduzca nuevo codigo postal: ";
			getline(cin, codPostal);
			a.setCodPostal_(codPostal);

			cout << "Introduzca nuevo grupo: ";
			cin >> grupo;
			a.setGrupo_(grupo);

			cout << "Introduzca si es lider de grupo (true o false): ";
			/*if ((cin >> esLider) == "true") {
				a.setEsLider_(true);
			}
			else {
				a.setEsLider_(false);
			}*/

			cout << "Introduzca curso mas alto: ";
			cin >> cursoMasAlto;
			a.setCursoMasAlto_(cursoMasAlto);

			return true;
		}
	}
	cout << "Error: no se ha encontrado al alumno en la base de datos." << endl;
	return false;	
}

