#include "Gimnasta.h"

Gimnasta::Gimnasta() {
	
}
Gimnasta::Gimnasta(string _nombre, string _apellido, int dia, int mes, int anio):Deportista(_nombre, _apellido, dia, mes, anio){
	
}
Gimnasta::Gimnasta(string _nombre, string _apellido, string _aparato, int dia, int mes, int anio):Deportista(_nombre, _apellido, dia, mes, anio){
	
	this->aparato = _aparato;
}
Gimnasta::Gimnasta(const Gimnasta &arg) {
	
}

Gimnasta::~Gimnasta() {
	delete this->FechaAsociacion;
}
string Gimnasta::getAparato(){
	return this->aparato;
}
void Gimnasta::setAparato(string _aparato){
	this->aparato = _aparato;
}
float Gimnasta::CalcularCuota (float cuota ) {
	return cuota*0.8;
}

ostream & Gimnasta::ListarInformacion (ostream & salida) const {
	salida<<"Nombre: "<<this->nombre<<"\nApellido: "<<this->apellido<<"\nAparato: "<<this->aparato
		<<"\nFecha de asociacion: "<<*this->FechaAsociacion<<"\nID: "<<this->ID<<endl;
	return salida;
}

