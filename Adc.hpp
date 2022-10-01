#include <iostream>
#include <string>
#define VREF 3.3;
using namespace std;


//Creacion de la clase
class Adc{
	private:
		string _nombre;
		//int _num;
		float _volts;
		float _dato;
		//static int n_analog;
		static int _reso;
		static int _freq;
	public:
		Adc(); //CONSTRUCTOR
		void captura(); //Define el canal
		void print(); 
		void lectura();
		static void setReso();
		static void setFreq();
};
