#ifndef ALUMNO_H
#define ALUMNO_H

class Alumno : public Persona {

private:
	int _grupo;
	bool _esLider;
	int _cursoMasAlto;

public:
	void setGrupo(int grupo);

	void setEsLider(bool esLider);

	Alumno(string const& email, string const& dni);

	int getCursoMasAlto() const;

	void setCursoMasAlto(int cursoMasAlto);

	bool isEsLider() const;

	int getGrupo() const;
};

#endif
