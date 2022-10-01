#include "Adc.hpp"
//Constructor
Adc::Adc(){
	_nombre="";
}
/*GETTERS*/


/*SETTERS*/

/*METODOS*/

void Adc::captura(){
	cout<<endl<<"Canal que se leera (AN1 - AN32): ";
	cin>>_nombre;
	
}

void Adc::print(){
	cout<<"Canal definido: "<<_nombre<<endl;
}

void Adc::lectura(){
	cout<<endl<<"Señal analoga (0 - 3.3v) de "<<_nombre<<": ";
	cin>>_volts;
	if(_reso==8) _dato = (_volts*255.0)/VREF;
	if(_reso==10) _dato = (_volts*1023.0)/VREF;
	if(_reso==12) _dato = (_volts*4095.0)/VREF;
	cout<<"Lectura es: "<<_dato;
}
void Adc::setReso(){
	cout<<"Resolucion del ADC (8,10,12 bits): ";
	cin>> _reso;
}
void Adc::setFreq(){
	cout<<"Frecuencia de muestreo (us): ";
	cin>> _freq;
}

