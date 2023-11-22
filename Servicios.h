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
			cout << "No disponible" << endl;
		} else{
			if (tipo_servicio == "corte"){
				cout <<"Disponible" << endl;
			}else{
				cout << "Servicio no reconocido" << endl;
				}
			}
		}
} // fin de la clase padre
//inicio de la clase hija Vacunacion:
class Vacunacion:public Servicios{
	public:
		Vacunacion(): Servicios(){};
		Vacunacion(string tipo, float prec, float dur, int cant): Servicios(tipo, prec, dur, cant){};
		void vacunar_mascota();
		void dar_premio();
};

void Vacunacion::vacunar_mascota(){
	cout << "*El medico sujeta a tu mascota y verifica si esta calmada*" << endl;
	cout << "*El medico vacuna a tu mascota*" << endl;
	cout << "*tu mascota pronto se sentira mejor :)*" << endl;
	cout << endl; 
}

void Vacunacion::dar_premio(){
	cout << "Al portarse bien tu mascota el medico le regalo un hueso" << endl;
	cout << "Tu mascota esta muy contenta :)" << endl;
	cout << endl;
}//fin clase hija vacunacion.
//inicia clase hija Desparacitacion.
class Desparacitar : public Servicios{
	public:
		Desparacitar(): Servicios(){};
		Desparacitar(string tipo, float prec, float dur, int cant): Servicios(tipo, prec, dur, cant){};
		void desparacitar_mascota();
};

void Desparacitar::desparacitar_mascota(){
	cout << "Desafortunadamente desparacitar no esta disponible por el momento..." << endl;
	cout << "Intente nuevamente otro dia" << endl;
	cout << "Lamentamos las molestias" << endl;
	cout << endl; 
} //fin clase hija desparacitar
//inicio clase hija haircut
class Haircut:public Servicios{
	public:
		Haircut(): Servicios(){};
		Haircut(string tipo, float prec, float dur, int cant): Servicios(tipo, prec, dur, cant){};
		void baniar();
		void cortar_pelo();
};
void Haircut::baniar(){
	cout << "Antes de comenzar a cortar debemos baniar a tu mascota" << endl;
	cout << "*media hora de banio despues...*" << endl;
	cout << "*Tu mascota ha quedado reluciente :)*" << endl;
	cout << endl;
}

void Haircut::cortar_pelo(){
	cout << "*El medico empieza a cortarle el pelo a tu mascota*" << endl;
	cout << "*Tu mascota ha quedado genial!!!*" << endl;
	cout << endl;
}