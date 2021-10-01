#ifndef GIMNASTA_H
#define GIMNASTA_H
#include "Deportista.h"
#include <iostream>
using namespace std;
class Gimnasta : public Deportista {
	string aparato;
public:
	Gimnasta();
	Gimnasta(string _nombre, string _apellido,int,int,int);//en caso de que no haya decidido qué aparato usará
	Gimnasta(string _nombre, string _apellido, string _aparato,int,int,int);
	Gimnasta(const Gimnasta &arg);
	~Gimnasta();
	string getAparato();
	void setAparato(string);
	float CalcularCuota (float) override;
	ostream& ListarInformacion (ostream & ) const override;
};

#endif

