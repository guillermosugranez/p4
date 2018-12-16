#ifndef MAIN_H
#define MAIN_H

#include "Agenda.h"


/*
Nombre: iniciarSesion.
Objetivo: Comprobar si el usuario y contraseña son correctos.
Parametros de entrada:
	- Profesor: Puntero a profesor con la direccion del profesor una vez haya iniciado sesión
Devuelve:
	- bool: True si el usuario y contraseña son correctos, o False si hay algún error de identificación.
*/
bool iniciarSesion(Profesor * &p)
{
	string usuario = "";
	string pass = "";
	bool coordinador = false;

	string strAux = "";
	bool continuar = false;

	int contador = 3;

	// Pedir nombre de usuario y comprobar que no existe
	do
	{
		cout<<"\tIntroduzca el nombre de usuario (Pulse 0 para salir): \n\t-> ";
		cin>>usuario;

		if(usuario == "0")
			return false;

		continuar = comprobarUsuario(usuario, pass, coordinador);
		if(continuar == false)
			cout<<"\n\tEl nombre de usuario no es correcto. Pruebe de nuevo\n";

	}while(continuar == false);

	// Pedir una contraseña
	do
	{
		cout<<"\n\tIntroduzca la contraseña para el usuario "<<usuario<<": \n\t-> ";
		cin>>strAux;

		continuar = (pass == strAux);
		if(!continuar)
		{
			cout<<"\n\tLa contraseña no es correcta. Pruebe de nuevo\n";
			contador--;
			if(contador == 0)
			{
				cout<<"Demasiados intentos. Saliendo."<<endl;
				return false;
			}
		}
	}while(continuar == false);

	p = new Profesor;

	if(coordinador != 0)
		p->setCoordinador_(1);
	else
		p->setCoordinador_(0);

	return true;
}

/*
	Nombre: registrar.
	Objetivo: Registrar en la base de datoa un nuevo profesor-usuario.
	Parametros de entrada:
		- Ninguno.
	Devuelve:
*/
void registrar()
{
	string usuario = "";
	string pass = "";
	bool coordinador = false;

	bool bloquear = true;

	// Pedir nombre de usuario y comprobar que no existe
	do
	{
		cout<<"\tIntroduzca el nombre de usuario (Pulse 0 para salir): \n\t-> ";
		cin>>usuario;

		if(usuario == "0")
			return;

		bloquear = comprobarUsuario(usuario, pass, coordinador); // Aqui pass y coordinador no sirven para nada
		if(bloquear)
			cout<<"\n\tEl nombre de usuario ya existe. Pruebe de nuevo\n\n";
	}while(bloquear == true);

	// Pedir una contraseña
	cout<<"\n\tIntroduzca la contraseña para el usuario "<<usuario<<": \n\t-> ";
	cin>>pass;

	// Determinar si es Coordinador
	cout<<"\n\t¿Es usted coordinador? (1 si, 0 no): ";
	cin>>coordinador;

	if(coordinador > 0)
		coordinador = 1;

	// Registrar en fichero Profesores
	ofstream salida("./Ficheros/Profesores", fstream::app);
	if(!salida)
	{
		cout << " - ERROR de apertura del fichero de Profesores";
		return;
	}

	salida << usuario << " " << pass << " " << coordinador <<endl;
	salida.close();

	return;
}

/*
	Nombre: comprobarUsuario.
	Objetivo: Comprobar si el nombre de usuario introducido está registrado en el sistema
	Parametros de entrada:
		- string: Nombre del usuario.
		- string: Contraseña del usuario pasada por referencia una vez leida de la base de datos
		- bool: Toma el valor 1 dentro de la función si el profesor está registrado y es coordinador, 0 al contrario.
	Devuelve:
		- bool: Devuelve 1 si la operación fue realizada con éxito. 0 en caso contrario
*/
bool comprobarUsuario(const string &u, string &p, bool &coordinador)
{
	string usuario = "";
	string pass = "";

	ifstream entrada("./Ficheros/Profesores");
	if(!entrada)
	{
		cout << " - ERROR de apertura del fichero de Profesores";
		return false;
	}

	while(!entrada.eof())
	{
		entrada >> usuario >> pass >> coordinador;

		if(usuario == u)
		{
			p = pass; // Apunto la contraseña
			entrada.close();
			return true;
		}
	}

	entrada.close();
	return false;
}

#endif
