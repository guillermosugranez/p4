#include "Alumno.h"

Alumno::Alumno(const string &dni, const string &correo): Persona(dni, correo)
{
	_grupo = 0;
	_esLider = false;
	_cursoMasAlto = 0;
}

int Alumno::getCursoMasAlto() const {
	return _cursoMasAlto;
}

void Alumno::setCursoMasAlto(int cursoMasAlto) {
	_cursoMasAlto = cursoMasAlto;
}

bool Alumno::isEsLider() const {
	return _esLider;
}

void Alumno::setEsLider(bool esLider) {
	_esLider = esLider;
}

int Alumno::getGrupo() const {
	return _grupo;
}

void Alumno::setGrupo(int grupo) {
	_grupo = grupo;
}

