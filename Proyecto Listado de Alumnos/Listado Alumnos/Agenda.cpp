//agenda->cpp
//Funciones de la clase agenda->

#include "Agenda.h"

using namespace std;

// FUNCIONES PRIVADAS

bool Agenda::comprobarDni(const string &s) const
{
	bool respuesta = false; // Positiva si lo encuentra
	
	for(int i = 0; i < numAlumnos_; i++)
	{
		if(lista_[i]->getDni_() == s)
			respuesta = true;
	}
	
	return respuesta;
}

bool Agenda::comprobarEmail(const string &s) const
{
	bool respuesta = false;
	
	for(int i = 0; i < numAlumnos_; i++)
	{
		if(lista_[i]->getEmail_() == s)
			respuesta = true;
	}
	
	return respuesta;
}

void Agenda::liberarMemoria()
{
	for(int i = 0; i < numAlumnos_; i++)
	{
		delete lista_[i];
		lista_[i] = 0;
	}
	
	numAlumnos_ = 0;
	
	return;
}

// OBSERVADORES

Alumno ** Agenda::getLista_() const {
	return lista_;
}
int Agenda::getNumAlumnos_() const {
	return numAlumnos_;
}
unsigned int Agenda::getMaxAlumnos_() const {
	return maxAlumnos_;
}



// MODIFICADORES

void Agenda::setLista_(Alumno ** lista){
	this->lista_ = lista;
}

void Agenda::setNumAlumnos_(int numAlumnos_) {
	this->numAlumnos_ = numAlumnos_;
}

void Agenda::setMaxAlumnos_(unsigned int maxAlumnos_) {
	this->maxAlumnos_ = maxAlumnos_;
}

bool Agenda::insertarAlumno()
{
	// Comprobar que existe espacio suficiente
	if(numAlumnos_ >= maxAlumnos_)
		return false;
	
	// Campos obligatorios
	
	bool flag = false;
	char strAux[100];
	int intAux = 0;
	
	Alumno * a = new Alumno;

	cin.clear(); // unset failbit
	cin.ignore(numeric_limits<streamsize>::max(),'\n'); // skip bad input
	
	// Primero comprobar los campos que no deben repetirse (dni y correo)
	do
	{
		cout<<"\n\tIntroduce el DNI del nuevo alumno: ";
		cin.getline(strAux,100);
		
		flag = comprobarDni(strAux);
		
		if(!flag)
			a->setDni_(strAux);
		else
			cout<<"\n\tEl DNI introducido ya existe o no es válido. Pruebe de nuevo."<<endl;
		
	}while(flag);

	do
	{
		cout<<"\n\tIntroduce el Correo Electronico del nuevo alumno: ";
		cin.getline(strAux,100);
		
		flag = comprobarEmail(strAux);
		
		if(!flag)
			a->setEmail_(strAux);
		else
			cout<<"\n\tEl eMail introducido ya existe o no es válido. Pruebe de nuevo."<<endl;
		
	}while(flag);
	
	// Después, completar los campos obligatorios
	
	cout<<"\n\tIntroduce el Nombre del nuevo alumno: ";
	cin.getline(strAux,100);
	a->setNombre_(strAux);
	
	cout<<"\n\tIntroduce el Primer Apellido del nuevo alumno: ";
	cin.getline(strAux,100);
	a->setPrimerApellido_(strAux);
	
	cout<<"\n\tIntroduce el Segundo Apellido del nuevo alumno: ";
	cin.getline(strAux,100);
	a->setSegundoApellido_(strAux);
	
	cout<<"\n\tIntroduce la Dirección Postal del nuevo alumno: ";
	cin.getline(strAux,100);
	a->setDireccion_(strAux);

	cout<<"\n\tIntroduce la Fecha de Nacimiento del nuevo alumno: ";
	cin.getline(strAux,100);
	a->setFechaNacimiento_(strAux);

	//==================================================================

	cout<<"\n\tIntroduce el Telefono del nuevo alumno: ";
	cin>>strAux;
	if(intAux >= 600000000 && intAux <= 699999999)
		a->setTelefono_(intAux);	
	else
		a->setTelefono_(0);

	cin.clear(); // unset failbit
	cin.ignore(numeric_limits<streamsize>::max(),'\n'); // skip bad input
	
	cout<<"\n\tIntroduce el Grupo del nuevo alumno: ";
	cin>>intAux;
	if(intAux >= 0 && intAux <= 20)
		a->setGrupo_(intAux);	
	else
		a->setGrupo_(0);

	cin.clear(); // unset failbit
	cin.ignore(numeric_limits<streamsize>::max(),'\n'); // skip bad input

	cout<<"\n\tIntroduce el Curso Más Alto del nuevo alumno: ";
	cin>>intAux;
	if(intAux > 0 && intAux <= 4)
		a->setCursoMasAlto_(intAux);	
	else
		a->setCursoMasAlto_(0);
	
	lista_[numAlumnos_] = a; // Metemos el alumno en la lista
	numAlumnos_++; // Incrementamos el número de alumnos

	cin.clear(); // unset failbit
	cin.ignore(numeric_limits<streamsize>::max(),'\n'); // skip bad input

	return true;
}


bool Agenda::borrarAlumno()
{
	int posicion = -1; // Posición por defecto (0 puede representar al primer elemento)
	
	Alumno * a = buscarAlumno(posicion);
	
	if(a == 0)
	{
		cout<<"\n\tNo se pudo realizar la operacion Borrar Alumno";
		return false;
	}
	else
	{
		// Hay que eliminarlo de la lista y reorganizar si es preciso
		
		// Comprueba si es el último elemento
		if(posicion == numAlumnos_-1) // -1 Por corregir que el indice empiece en 0
		{
			cout<<"\nÚltimo elemento";
			delete lista_[numAlumnos_];
			lista_[numAlumnos_] = 0;
			numAlumnos_--;
		}
		else // Toca reorganizar la lista
		{
			cout<<"\nReorganizar lista";
			delete lista_[posicion];
			for(int i = posicion; i < numAlumnos_; i++)
				lista_[i] = lista_[i+1];
			
			numAlumnos_--;
		}
	}
	
	return true;
}

void Agenda::mostrarAlumno()
{
	int posicion = -1;
	
	// Primero hay que buscar al alumno que queremos mostrar
	Alumno * a = buscarAlumno(posicion);
	
	if(a == 0) // Si no encuentra sale
	{
		cout<<"\n\tNo se pudo realizar la operacion Mostrar Alumno";
		return;
	}
	else
	{
		cout<<"\n\t====================================================\n";

		cout<<"\n\t - DNI del alumno: "<<a->getDni_();
		cout<<"\n\t - Email del alumno: "<<a->getEmail_();
		cout<<"\n\t - Nombre del alumno: "<<a->getNombre_();
		cout<<"\n\t - Primer Apellido del alumno: "<<a->getPrimerApellido_();
		cout<<"\n\t - Segundo Apellido del alumno: "<<a->getSegundoApellido_();
		cout<<"\n\t - Fecha de Nacimiento del alumno: "<<a->getFechaNacimiento_();
		cout<<"\n\t - Direccion Postal: "<<a->getDireccion_();

		cout<<"\n\t - Teléfono del alumno: "<<a->getTelefono_();
		cout<<"\n\t - Grupo del alumno: "<<a->getGrupo_();
		
		if(a->getEsLider_())
			cout<<"\n\t - ¿Lider de grupo?: Si";
		else
			cout<<"\n\t - ¿Lider de grupo?: No";
		
		cout<<"\n\t - Curso más alto del alumno: "<<a->getCursoMasAlto_();

		cout<<"\n\n\t====================================================\n";
	}
}

bool Agenda::cargarDatos(const string &s)
{
	// Primero borrar posibles datos anteriores
	if(numAlumnos_ > 0)
		liberarMemoria();
	
	Alumno * a;

	// Abrir el archivo para escribir la información
	ifstream entrada(s);

	if(!entrada)
	{
		cout << "\nERROR de apertura\n";
		return false;
	}

	string linea;
	int intAux = 0;
	string strAux = "";
	char charAux = ' ';

	// Mientras se pueda leer una linea del archivo ...
	while (getline(entrada, linea))
	{
		lista_[numAlumnos_] = new Alumno;
		a = lista_[numAlumnos_];
		stringstream ss(linea);

		//=============================================================

		// DNI
		getline(ss, strAux, ';');
		a->setDni_(strAux);

		// Correo
		getline(ss, strAux, ';');
		a->setEmail_(strAux);

		// Nombre
		getline(ss, strAux, ';');
		a->setNombre_(strAux);

		// Primer Apellido
		getline(ss, strAux, ';');
		a->setPrimerApellido_(strAux);

		// Segund Apellido
		getline(ss, strAux, ';');
		a->setSegundoApellido_(strAux);

		// Dirección
		getline(ss, strAux, ';');
		a->setDireccion_(strAux);

		// Fecha de Nacimiento
		getline(ss, strAux, ';');
		a->setFechaNacimiento_(strAux);

		//=============================================================

		// Curso más alto
		ss >> intAux;
		a->setCursoMasAlto_(intAux);

		// Descartamos el caracter ';' a continuacion del numero
		ss >> charAux;

		// Lider
		ss >> intAux;
		a->setEsLider_(intAux);

		ss >> charAux;

		// Grupo
		ss >> intAux;
		a->setGrupo_(intAux);

		// Descartamos el caracter ';' a continuacion del numero
		ss >> charAux;

		// Telefono
		ss >> intAux;
		a->setTelefono_(intAux);

		//=============================================================

		numAlumnos_++;
	}
	
	cout<<"\n El numero de alumnos cargados es: "<<numAlumnos_<<endl;
	
	entrada.close();
	
	return true;
}



bool Agenda::guardarCopiaSeguridad(Profesor * p) // Solo si es coordinador
{
	string s = "";
	
	// Primero hay que determinar si el profesor es coordinador
	if(!p->getCoordinador_())
	{
		cout<<"\n\tNo se puede guardar una copia de Seguridad externa si no eres Coordinador";
		return false;
	}
	
	cout<<"\tDeterminar la ruta para guardar la información: ";
	cin>>s;
	
	return guardarCambios(s);
}
