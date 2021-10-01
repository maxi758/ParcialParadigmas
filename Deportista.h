#ifndef DEPORTISTA_H
#define DEPORTISTA_H
#include<iostream>
#include "Fecha.h"
using namespace std;

class Deportista { //clase abstracta
protected:
	static int autoincremento;
	int ID;
	string nombre;
	string apellido;
	Fecha* FechaAsociacion; 
public:
	Deportista();
	Deportista(string _nombre, string _apellido, int, int, int);//composicion desde constructor de clase base
	Deportista(const Deportista &arg);
	~Deportista();
	string getNombre();
	string getApellido();
	int getID();
	void setNombre(string);
	void setApellido(string);
	virtual float CalcularCuota(float)=0;
	virtual ostream& ListarInformacion(ostream&)const=0;//metodo virtual puro
};
ostream& operator<<(ostream& salida, Deportista* d);

#endif

