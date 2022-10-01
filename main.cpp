#include <iostream>
#include "Adc.hpp"

/*VARIABLES GLOBALES*/
//int Adc::n_analog = 0;
int Adc::_reso=0;
int Adc::_freq=0;

	
//FUNCION MAIN
int main() {
	int n,i;
	cout<<"CONFIGURACION DE UN ADC"<<endl;
	Adc::setReso();
	Adc::setFreq();
	cout<<"Introduce el numero de canales a leer: ";
	cin>>n;
	Adc c[n];
	
	for(i=0;i<n;i++){	 //DEFINICION DEL CANAL
		c[i].captura();	
	}
	
	for(i=0;i<n;i++){ //Impresion de datos
		c[i].print();	
	}
	
	for(i=0;i<n;i++){ //Impresion de datos
		c[i].lectura();	
	}	
	return 0;
}
