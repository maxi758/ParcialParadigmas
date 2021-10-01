#include<iostream>
#include "Club.h"
#include "Fecha.h"
#include "Deportista.h"
#include "Esgrimista.h"
#include "Gimnasta.h"
using namespace std;

int main (int argc, char *argv[]) {
	
	Gimnasta *gimnasta1 = new Gimnasta("max", "herrera", "barras",9,12,2018);
	cout<<gimnasta1<<endl;
	Esgrimista *esgrimista1 = new Esgrimista("jesus", "brito", "florete",10,1,2020);
	cout<<esgrimista1<<endl;
	Club *GELP = new Club("Gelp", 500.45);
	GELP->agregarSocio(gimnasta1);
	GELP->agregarSocio(esgrimista1);
	GELP->MostrarSocios();
	
	return 0;
}

