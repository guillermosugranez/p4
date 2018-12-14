#ifndef MAIN_H
#define MAIN_H

#include "Agenda.h"

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

#endif