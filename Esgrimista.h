#ifndef ESGRIMISTA_H
#define ESGRIMISTA_H
#include "Deportista.h"
#include <iostream>
using namespace std;
class Esgrimista : public Deportista {
	string tipoDeArma;
public:
	Esgrimista();
	Esgrimista(string _nombre, string _apellido, int, int, int);
	Esgrimista(string _nombre, string _apellido, string _tipoDeArma, int, int, int);
	Esgrimista(const Esgrimista &arg);
	~Esgrimista();
	float CalcularCuota(float) override;
	ostream& ListarInformacion (ostream & ) const override;
private:
};

#endif

