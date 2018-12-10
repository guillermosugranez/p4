#ifndef AGENDA_H
#define AGENDA_H

class Agenda {

private:
	unsigned int _maxAlumnos;
	std::list<Alumno> _lista;
	int _numAlumnos;

public:
	unsigned int get_maxAlumnos();

	bool insertarAlumno(Alumno const& a);

	int get_numAlumnos();

	void set_numAlumnos(int _numAlumnos);

	void getAttribute();

	void setAttribute(int attribute);

private:
	Alumno buscarAlumno();

public:
	void set_maxAlumnos(unsigned int _maxAlumnos);

	bool borrarAlumno(Alumno const& a);

	list<Alumno> buscarAlumno(string const& nombre, int criterioBusqueda) const;

	list<Alumno> buscarAlumno(int unnamed_1) const;

	void listarAlumnos(int criterio, bool orden) const;

	bool establecerLider(Alumno& a);

	bool modificarAlumno(Alumno& a);
};

#endif
