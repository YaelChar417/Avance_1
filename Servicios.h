/*
Ejemplo: Programar la clase Servicios
ATRIBUTOS: tipo, precio, duracion, cantidad de animales.
Métodos: get(), set(), costo_servicio(precio, cantidad), disponibilidad_servicio(string).
constructor
*/

#include <string>
#include <cctype>
using namespace std;

class Servicios{
	private:
		string tipo_servicio;
		float precio, duracion;
		int cantidad_animales;
		
	public:
		Servicios(): tipo_servicio(""), precio(0.0), duracion(0.0), cantidad_animales(0){};
		Servicios(string tipo, float prec, float dur, int cant): tipo_servicio(tipo), precio(prec), duracion(dur), cantidad_animales(cant){};
		
		string get_tipo_servicio();
		float get_precio();
		float get_duracion();
		int get_cantidad_animales();
		
		void set_tipo_servicio(string);
		void set_precio(float);
		void set_duracion(float);
		void set_cantidad_animales(int);
		void calcula_costo(float, float, int);
		void disponibilidad(string);
};

string Servicios::get_tipo_servicio(){
	return tipo_servicio;
}

void Servicios::set_tipo_servicio(string tipo){
	tipo_servicio = tipo;
}

float Servicios::get_precio(){
	return precio;
}

void Servicios::set_precio(float prec){
	precio = prec;
}

float Servicios::get_duracion(){
	return duracion;
}

void Servicios::set_duracion(float dur){
	duracion = dur;
}

int Servicios::get_cantidad_animales(){
	return cantidad_animales;
}

void Servicios::set_cantidad_animales(int cant){
	cantidad_animales = cant;
}

void Servicios::calcula_costo(float costo, float tiempo, int cantidad){
	duracion = tiempo * cantidad;
	precio = costo * cantidad;
}

void Servicios::disponibilidad(string tipo_servicio){
	for (int i = 0; i < tipo_servicio.size(); i++){
		tipo_servicio[i] = tolower(tipo_servicio[i]);
	}
	
	if (tipo_servicio == "vacunacion"){
		cout << "Disponible" << endl;
	} else{
		if(tipo_servicio == "desparacitacion"){
			cout << "Disponible" << endl;
		} else{
			if(tipo_servicio == "bath"){
				cout << "No disponible" << endl;
			} else{
				if (tipo_servicio == "corte"){
					cout <<"No disponible" << endl;
				}else{
					cout << "Servicio no reconocido" << endl;
				}
			}
		}
	}
}