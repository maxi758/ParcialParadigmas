#include "Club.h"

Club::Club() {
	
}
Club::Club(string _nombre, float _cuotaStandard){
	this->nombre = _nombre;
	this->cuotaStandard = _cuotaStandard;
}
Club::Club(const Club &arg) {
	
}

Club::~Club() {
	
}
void Club::agregarSocio(Deportista* _deportista){
	this->deportista.push_back(_deportista);
}
void Club::MostrarSocios(){
	for(unsigned int i=0;i<this->deportista.size();i++){
		cout<<this->deportista[i];
		cout<<"Valor de la cuota: "<<this->deportista[i]->CalcularCuota(this->cuotaStandard)<<endl<<endl;
	}
}
