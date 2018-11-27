#ifndef ALUMNO_H
#define ALUMNO_H

#include "Persona.h"

class Alumno : public Persona {

private:
	int _grupo;
	bool _esLider;
	int _cursoMasAlto;

public:

	Alumno(const string &email, const string &dni);

	int getCursoMasAlto() const;
	void setCursoMasAlto(int cursoMasAlto);
	bool isEsLider() const;
	void setEsLider(bool esLider);
	int getGrupo() const;
	void setGrupo(int grupo);
};

#endif
