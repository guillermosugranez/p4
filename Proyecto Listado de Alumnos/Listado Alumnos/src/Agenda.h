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

public:

	/*
	Objetivo: Conocer el número máximo de alumnos que hay inscritos en la base de datos.
	Parametros de entrada:
		- Ninguno.
	Devuelve:
		- unsigned int: Número entero cuyo valor equivale al número máximo de alumnos inscritos en la base de datos.
	*/
	unsigned int get_maxAlumnos();


	/*
	Objetivo: Modificar el número máximo de alumnos que hay inscritos en la base de datos.
	Parametros de entrada:
		- unsigned int: Número entero cuyo valor es el nuevo valor de _maxAlumnos. 
	Devuelve:
		- Nada.
	*/
	void set_maxAlumnos(unsigned int _maxAlumnos);


	/*
	Objetivo: Buscar a un alumno en la base de datos.
	Parametros de entrada:
		- const string: Cadena de caracteres introducida por teclado pasada por referencia.
		- int: Numero entero que define que criterio de búsqueda vamos a utilizar, es decir, queremos buscar por su DNI, apellido o equipo en el que está.
	Devuelve:
		- list: Devuelve una lista de alumnos cuyas características han coincidido con el criterio de búsqueda.
	*/
	list <Alumno> buscarAlumno(const string &nombre, int criterioBusqueda) const;


	/*
	Objetivo: Insertar un alumno en la base de datos.
	Parametros de entrada:
		- Alumno: Clase alumno recibida por referencia para inscribir a dicho alumno de la base de datos.
	Devuelve:
		- bool: True si el alumno ha sido insertado con éxito, o False en caso contrario.
	*/
	bool insertarAlumno(const Alumno &a);


	/*
	Objetivo: Borrar a un alumno determinado en una base de datos.
	Parametros de entrada:
		- const Alumno: Clase Alumno recibida por referencia para borrar a dicho alumno de la base de datos.
	Devuelve:
		- bool: True si el alumno ha sido borrado con éxito, o False en caso contrario.
	*/
	bool borrarAlumno(const Alumno &a);


	/*
	Objetivo: El sistema quiere leer todos los alumnos inscritos en el sistema.
	Parametros de entrada:
		- int: Número entero cuyo valor es el criterio por el que queremos listar a los alumnos.
		- bool: Se definirá ascendente para TRUE o desendente para FALSE.
	Devuelve:
		- Nada.
	*/
	void listarAlumnos(int criterio, bool orden) const;


	/*
	Objetivo: Establece un líder de grupo 
	Parametros de entrada:
		- const Alumno: Clase Alumno recibida por referencia para borrar a dicho alumno de la base de datos.
	Devuelve:
		- bool: True si el alumno ha sido borrado con éxito, o False en caso contrario.
	*/
	bool establecerLider(Alumno &a);

	bool modificarAlumno(Alumno &a);
};

#endif
