/*
Ejemplo: Programar la clase trabajador
ATRIBUTOS: nombre, edad, pago_hora, horas_trabajadas, dias trabajados.
Métodos: get(), set(), bonos(tiempo), sueldo_diario(sueldo, horas), sueldo_semanal(sueldo_diario, dias)
constructor
*/

#include <string>
using namespace std;

class Trabajador{
	private:
		string nombre;
		float pago_hora;
		int horas, dias;
		
	public:
		Trabajador(): nombre(""), pago_hora(0.0), horas(0), dias(0){};
		Trabajador(string nom, float pago_h, int ed, int h, int d): nombre(nom), pago_hora(pago_h), horas(h), dias(d){};
		
		string get_nombre();
		float get_pago_hora();
		int get_horas();
		int get_dias();
		
		void set_nombre(string);
		void set_pago_hora(float);
		void set_horas(int);
		void set_dias(int);
		float sueldo_diario(float, int);
		float sueldo_semanal(float, int);
		int bonos(int);
		
};

string Trabajador::get_nombre(){
	return nombre;
}

void Trabajador::set_nombre(string nom){
	nombre = nom;
}

float Trabajador::get_pago_hora(){
	return pago_hora;
}

void Trabajador::set_pago_hora(float pago_h){
	pago_hora = pago_h;
}

int Trabajador::get_horas(){
	return horas;
}

void Trabajador::set_horas(int h){
	horas = h;
}

int Trabajador::get_dias(){
	return dias;
}

void Trabajador::set_dias(int d){
	dias = d;
}

float Trabajador::sueldo_diario(float pago_hora, int horas){
	float paga_diaria;
	paga_diaria = pago_hora * horas;
	return paga_diaria;
}

float Trabajador::sueldo_semanal(float paga_diaria, int dias){
	float paga_semanal;
	paga_semanal = paga_diaria * dias;
	return paga_semanal;
}

int Trabajador::bonos(int years){
	int bono;
	
	if (years >= 5 && years < 10){
		bono = 500;
	}else{
		if (years <= 10 && years < 15){
			bono = 1000;
		}else{
			bono = 1500;
		}
	}
	return bono;
}