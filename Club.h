#ifndef CLUB_H
#define CLUB_H
#include "Deportista.h"
#include <iostream>
#include <vector>
using namespace std;
class Club{
	string nombre;
	vector<Deportista*> deportista;
	float cuotaStandard;
public:
	Club();
	Club(string _nombre, float _cuotaStandard);
	Club(const Club &arg);
	~Club();
	void MostrarSocios();
	void agregarSocio(Deportista*);
};

#endif

