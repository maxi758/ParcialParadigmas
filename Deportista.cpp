#include "Deportista.h"
int Deportista::autoincremento = 0;
Deportista::Deportista() {
	this->ID = ++autoincremento;
}
Deportista::Deportista(string _nombre, string _apellido, int dia, int mes, int anio){
	this->ID = ++autoincremento;
	this->nombre = _nombre;
	this->apellido = _apellido;
	this->FechaAsociacion = new Fecha(dia, mes, anio);
}
Deportista::Deportista(const Deportista &arg) {
	
}

Deportista::~Deportista() {
	delete this->FechaAsociacion;
}
string Deportista::getNombre(){
	return this->nombre;
}
string Deportista::getApellido(){
	return this->apellido;
}
int Deportista::getID(){
	return this->ID;
}
void Deportista::setNombre(string nombre){
	this->nombre = nombre;
}
void Deportista::setApellido(string apellido){
	this->apellido = apellido;
}
ostream& operator<<(ostream& salida, Deportista* d){
	return d->ListarInformacion(salida);
}
