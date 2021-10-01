#include "Esgrimista.h"

Esgrimista::Esgrimista() {
	
}
Esgrimista::Esgrimista(string _nombre, string _apellido, int dia, int mes, int anio):Deportista(_nombre, _apellido, dia, mes, anio){
	
}
Esgrimista::Esgrimista(string _nombre, string _apellido, string _tipoDeArma, int dia, int mes, int anio):Deportista(_nombre, _apellido, dia, mes, anio){
	
	this->tipoDeArma = _tipoDeArma;
}
Esgrimista::Esgrimista(const Esgrimista &arg) {
	
}

Esgrimista::~Esgrimista() {
	delete this->FechaAsociacion;
}

float Esgrimista::CalcularCuota(float cuota) {
	return cuota;
}

ostream & Esgrimista::ListarInformacion (ostream& salida) const {
	salida<<"Nombre: "<<this->nombre<<"\nApellido: "<<this->apellido<<"\nTipo de Arma: "<<this->tipoDeArma
		<<"\nFecha de asociacion: "<<*this->FechaAsociacion<<"\nID: "<<this->ID<<endl;
	return salida;
}

