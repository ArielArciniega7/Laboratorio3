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
	cout<<endl<<"Lectura analoga (0 - 3.3v) del "<<_nombre<<": ";
	cin>>_volts;
	if(_volts< 0 || _volts >3.3){
		cout<<"Lectura invalida";
		exit(0);
	}
	if(_reso==8) _dato = (_volts*255.0)/VREF;
	if(_reso==10) _dato = (_volts*1023.0)/VREF;
	if(_reso==12) _dato = (_volts*4095.0)/VREF;
	cout<<"Conversion digital es de "<<_dato<<" del canal "<<_nombre;
}
void Adc::setReso(){
	cout<<"Resolucion del ADC (8,10,12 bits): ";
	cin>> _reso;
	if(_reso != 8 && _reso != 10 && _reso != 12){
		cout<<"Resolucion invalida";
		exit(0);
	}
}
void Adc::setFreq(){
	cout<<"Frecuencia de muestreo (hz): ";
	cin>> _freq;
	if(_freq ==false){
		cout<<"Frecuencia invalida"<<endl;
		exit(0);
	}
}

