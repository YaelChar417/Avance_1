/*
 * Proyecto Veterinaria
 * Yael Charles Marin
 * A01711111
 * 30/11/2023
 */

/*
 * Clase Servicios, es una clase padre que hereda a 3 clases,
 * cuenta con los atributos de tipo de servicio precio,
 * duracion y cantidad de animales, con los metodos para
 * calcular el costo del servicio y verificar la disponibilidad
 */
#include <string>
#include <cctype>
using namespace std;

class Servicios{
	private:
		// Atributos clase padre 
		string tipo_servicio;
		float precio, duracion;
		int cantidad_animales;
		
	public:
		// constructores de la clase padre
		Servicios(): tipo_servicio(""), precio(0.0), duracion(0.0), cantidad_animales(0){};
		Servicios(string tipo, float prec, float dur, int cant): tipo_servicio(tipo), precio(prec), duracion(dur), cantidad_animales(cant){};
		// getters de la clase padre
		string get_tipo_servicio();
		float get_precio();
		float get_duracion();
		int get_cantidad_animales();
		// setters de la clase padre
		void set_tipo_servicio(string);
		void set_precio(float);
		void set_duracion(float);
		void set_cantidad_animales(int);
		// metodos de la clase padre
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

/*Metodo calcula costo que recibe el costo individual
 * el tiempo individual y la cantidad de animales
 * para multiplicar ambos por esta cantidad y 
 * modificar los valores de precio y duracion.
 */
void Servicios::calcula_costo(float costo, float tiempo, int cantidad){
	duracion = tiempo * cantidad;
	precio = costo * cantidad;
}

/*Metodo disponibilidad que recibe el tipo de servicio 
 * y usando un for primero convierte a minusculas para 
 * evitar errores de comparacion y usando un if para que 
 * compare si los valores son iguales y que ahi regrese 
 * si esta o no disponible
 */
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

/*
 *  Clase Heredada Vacunacion, que ademas de los atributos
 * de la clase padre, no tiene atributos propios y contiene
 * los metodos de vacunar mascota y dar premio
 *
 */
class Vacunacion:public Servicios{
	public:
		// Constructores de la clase heredada vacunacion
		Vacunacion(): Servicios(){};
		Vacunacion(string tipo, float prec, float dur, int cant): Servicios(tipo, prec, dur, cant){};
		// Metodos propios de la clase heredada
		void vacunar_mascota();
		void dar_premio();
};

/* Metodo vacunar mascota muestra
 * una mini historia de lo que 
 * pasaria si un veterinario
 * inyecta a tu mascota porque
 * estaba enferma
 */
void Vacunacion::vacunar_mascota(){
	cout << "*El medico sujeta a tu mascota y verifica si esta calmada*" << endl;
	cout << "*El medico vacuna a tu mascota*" << endl;
	cout << "*tu mascota pronto se sentira mejor :)*" << endl;
	cout << endl; 
}

/* Metodo dar premio que 
 * muestra una mini 
 * historia de lo que pasaria
 * si tu mascota se porto bien
 * en la vacunacion
 */
void Vacunacion::dar_premio(){
	cout << "Al portarse bien tu mascota el medico le regalo un hueso" << endl;
	cout << "Tu mascota esta muy contenta :)" << endl;
	cout << endl;
}//fin clase hija vacunacion.

/*
 *  Clase Heredada Desparacitar, que ademas de los atributos
 * de la clase padre, no tiene atributos propios y contiene
 * los metodos de desparacitar la mascota
 *
 */
class Desparacitar : public Servicios{
	public:
		// Constructores de la clase hija Desparacitar
		Desparacitar(): Servicios(){};
		Desparacitar(string tipo, float prec, float dur, int cant): Servicios(tipo, prec, dur, cant){};
		// metodo de la clase hija
		void desparacitar_mascota();
};

/* Metodo desparacitar mascota que como 
 * no esta disponible este servicio por
 * el momento regresa un mensaje de error
 * y disculpas
 */
void Desparacitar::desparacitar_mascota(){
	cout << "Desafortunadamente desparacitar no esta disponible por el momento..." << endl;
	cout << "Intente nuevamente otro dia" << endl;
	cout << "Lamentamos las molestias" << endl;
	cout << endl; 
} //fin clase hija desparacitar

/*
 *  Clase Heredada Haircut, que ademas de los atributos
 * de la clase padre, no tiene atributos propios y contiene
 * los metodos de baniar y cortar_pelo
 *
 */
class Haircut:public Servicios{
	public:
		// Constructores de la clase hija Haircut
		Haircut(): Servicios(){};
		Haircut(string tipo, float prec, float dur, int cant): Servicios(tipo, prec, dur, cant){};
		// metodos de la clase hija
		void baniar();
		void cortar_pelo();
};

/* Metodo baniar que muestra una mini 
 * historia que relata lo que pasaria 
 * al escoger el servicio de corte de pelo
 * y el veterinario baniara a tu mascota
 */
void Haircut::baniar(){
	cout << "Antes de comenzar a cortar debemos baniar a tu mascota" << endl;
	cout << "*media hora de banio despues...*" << endl;
	cout << "*Tu mascota ha quedado reluciente :)*" << endl;
	cout << endl;
}

/* metodo corte de pelo muestra una mini
 * historia que mostraria al medico 
 * cortandole el pelo a tu mascota
 * y ha quedado muy bien
 */
void Haircut::cortar_pelo(){
	cout << "*El medico empieza a cortarle el pelo a tu mascota*" << endl;
	cout << "*Tu mascota ha quedado genial!!!*" << endl;
	cout << endl;
} // fin de la clase hija Haircut