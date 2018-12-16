//Agenda.h
//Definicion de la clase Agenda.

#ifndef AGENDA_H
#define AGENDA_H

#include "Persona.h"
#include "Profesor.h"
#include "Alumno.h"

#include <list>
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include <limits>
#include <cstdio>

using namespace std;

class Alumno;

class Agenda {

private:
	int maxAlumnos_;
	int numAlumnos_;
	Alumno ** lista_;
		
	// Funciones auxiliares
	
	/*
	Nombre: comprobarDni.
	Objetivo: Comprueba si la cadena introducida por teclado tiene formato dni.
	Parametros de entrada:
		- string: dni introducido por teclado.
	Devuelve:
		- bool: True si el dni introducido es correcto, o False en caso contrario.
	 */
	bool comprobarDni(const string &s) const;
	
	/*
	Nombre: comprobarEmail.
	Objetivo: Comprueba si la cadena introducida por teclado tiene formato email.
	Parametros de entrada:
		- string: dni introducido por teclado.
	Devuelve:
		- bool: True si el dni introducido es correcto, o False en caso contrario.
	 */
	bool comprobarEmail(const string &s) const;
	
	/*
	 * 
	 */
	void liberarMemoria();

public:

	//CONSTRUCTOR
	//===========

	/*
	Nombre: Agenda.
	Objetivo: Inicializar por defecto las variables de la clase Agenda.
	Parametros de entrada:
		- Ninguno.
	Devuelve:
		- Nada.
	*/
	Agenda()
	{
		maxAlumnos_ = 150;
		numAlumnos_ = 0;
		lista_ = new Alumno * [maxAlumnos_];
	}

	// DESTRUCTOR
		
	~Agenda()
	{
		for(int i = 0; i < numAlumnos_; i++)
			delete lista_[i];

		delete [] lista_;
	}

	// OBSERVADORES

	/*
	Nombre: getMaxAlumnos.
	Objetivo: Conocer el número máximo de alumnos que hay inscritos en la base de datos.
	Parametros de entrada:
		- Ninguno.
	Devuelve:
		- unsigned int: Número entero cuyo valor equivale al número máximo de alumnos inscritos en la base de datos.
	*/
	unsigned int getMaxAlumnos_() const;

	/*
	Nombre: getLista.
	Objetivo: Observar la lista de alumnos.
	Parametros de entrada:
		- Nada
	Devuelve:
		- Alumno: todos los alumnos inscritos en la base de datos.
	*/
	Alumno ** getLista_() const;

	/*
	Nombre: getNumAlumnos.
	Objetivo: Conocer el número de alumnos que hay inscritos en la base de datos.
	Parametros de entrada:
		- Ninguno.
	Devuelve:
		- int: Número entero cuyo valor equivale al número de alumnos inscritos en la base de datos.
	*/
	int getNumAlumnos_() const;

	/*
	Nombre: listarAlumnos.
	Objetivo: El sistema quiere leer todos los alumnos inscritos en el sistema.
	Parametros de entrada:
		- bool: Se definirá ascendente para TRUE o desendente para FALSE.
	Devuelve:
		- Nada.
	*/
	void listarTodosLosAlumnos();

	/*
	Nombre: buscarAlumno.
	Objetivo: Buscar a un alumno en la base de datos.
	Parametros de entrada:
		- string: Cadena de caracteres introducida por teclado pasada por referencia.
		- int: Numero entero que define que criterio de búsqueda vamos a utilizar, es decir, queremos buscar por su DNI, apellido o equipo en el que está.
	Devuelve:
		- list: Devuelve una lista de alumnos cuyas características han coincidido con el criterio de búsqueda.
	*/
	Alumno * buscarAlumno(int &posicion);

	// MODIFICADORES

	/*
	Nombre: setMaxAlumnos.
	Objetivo: Modificar el número máximo de alumnos que hay inscritos en la base de datos.
	Parametros de entrada:
		- unsigned int: Número entero cuyo valor es el nuevo valor de _maxAlumnos. 
	Devuelve:
		- Nada.
	*/
	void setMaxAlumnos_(unsigned int maxAlumnos_);

	/*
	Nombre: setLista.
	Objetivo: Modificar la lista de alumnos.
	Parametros de entrada:
		- Alumno**: Alumno que se quiere introducir en la lista. 
	Devuelve:
		- Nada.
	*/
	void setLista_(Alumno ** lista);
	
	/*
	Nombre: setNumAlumnos.
	Objetivo: Modificar el número de alumnos que hay inscritos en la base de datos.
	Parametros de entrada:
		- int: Número entero cuyo valor es el nuevo valor de _numAlumnos. 
	Devuelve:
		- Nada.
	*/
	void setNumAlumnos_(int numAlumnos);

	/*
	Nombre: insertarAlumno.
	Objetivo: Insertar un alumno en la base de datos.
	Parametros de entrada:
		- Alumno: Clase alumno recibida por referencia para inscribir a dicho alumno de la base de datos.
	Devuelve:
		- bool: True si el alumno ha sido insertado con éxito, o False en caso contrario.
	*/
	bool insertarAlumno();

	/*
	Nombre: borrarAlumno.
	Objetivo: Borrar a un alumno determinado en una base de datos.
	Parametros de entrada:
		- const Alumno: Clase Alumno recibida por referencia para borrar a dicho alumno de la base de datos.
	Devuelve:
		- bool: True si el alumno ha sido borrado con éxito, o False en caso contrario.
	*/
	bool borrarAlumno();

	/*
	Nombre: establecerLider.
	Objetivo: Establece un líder de grupo 
	Parametros de entrada:
		- Nada.
	Devuelve:
		- bool: True si el alumno ha sido borrado con éxito, o False en caso contrario.
	*/
	bool establecerLider();

	/*
	Nombre: modificarAlumno.
	Objetivo: Modificar los datos de un alumno. 
	Parametros de entrada:
		- Nada.
	Devuelve:
		- bool: True si el alumno ha sido modificado con éxito, o False en caso contrario.
	*/
	bool modificarAlumno();
		
	/*
	Nombre: mostrarAlumno.
	Objetivo: Muestra los datos de un alumno. 
	Parametros de entrada:
		- Alumno: Clase Alumno recibida por referencia para modificar algun campo de dicho alumno de la base de datos.
	Devuelve:
		- bool: True si el alumno ha sido modificado con éxito, o False en caso contrario.
	*/
	void mostrarAlumno() ;
	
	/*
	Nombre: mostrarAlumno.
	Objetivo: Inicializa la agenda con la información almacenada en el fichero determinado por Conf
	Parametros de entrada:
		- string: nombre del fichero
	Devuelve:
		- bool: True si los datos se han cargado con éxito, o False en caso contrario.
	*/
	bool cargarDatos(const string &s); // Lo realiza el sistema
	
	/*
	Nombre: mostrarAlumno.
	Objetivo: Borra todo y lo guarda como si fuera nuevo
	Parametros de entrada:
		- string: nombre del fichero
	Devuelve:
		- bool: True si los datos se han guardado los cambios con éxito, o False en caso contrario.
	*/
	bool guardarCambios(const string &s); // Cualquier profesor
	
	/*
	Nombre: mostrarAlumno.
	Objetivo: Guarda la información pero en un archivo externo.
	Parametros de entrada:
		- Profesor: Profesor que quiere realizar la copia de seguridad.
	Devuelve:
		- bool: True si los datos se ha guardado una copia de seguridad con éxito, o False en caso contrario.
	*/
	bool guardarCopiaSeguridad(Profesor * p); // Solo si es coordinador
	
	/*
	Nombre: mostrarAlumno.
	Objetivo: Carga la información, pero de un archivo externo
	Parametros de entrada:
		- Profesor: Profesor que quiere realizar la copia de seguridad.
	Devuelve:
		- bool: True si los datos se ha cargado una copia de seguridad con éxito, o False en caso contrario.
	*/
	bool cargarCopiaSeguridad(Profesor * p); // Solo si es coordinador
};

#endif