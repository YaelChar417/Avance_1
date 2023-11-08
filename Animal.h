/*
Ejemplo: Programar la clase Animal
ATRIBUTOS: nombre, raza, color, altura, largo, peso, edad.
Métodos: get(), set(), crecer(years).
constructor
*/

#include <string>
using namespace std;

class Animal {
	private:
		string nombre, raza, color;
		float altura, largo, peso;
		int edad;
		
	public:
		Animal(): nombre(""), raza(""), color(""), altura(0.0), largo(0.0), peso(0.0), edad(0){};
		Animal(string nom, string raz, string col, float alt, float lar, float pes, int ed): nombre(nom), raza(raz), color(col), altura(alt), largo(lar), peso(pes), edad(ed){};
		
		string get_nombre();
		string get_raza();
		string get_color();
		float get_altura();
		float get_largo();
		float get_peso();
		int get_edad();
		
		void set_nombre(string );
		void set_raza(string );
		void set_color(string );
		void set_altura(float );
		void set_largo(float );
		void set_peso(float );
		void set_edad(int);
		void crecer(int);
};

string Animal::get_nombre(){
	return nombre;
}
void Animal::set_nombre(string nom){
	nombre = nom;
}

string Animal::get_raza(){
	return raza;
}

void Animal::set_raza(string raz){
	raza = raz;
}

string Animal::get_color(){
	return color;
}

void Animal::set_color(string col){
	color = col;
}

float Animal::get_altura(){
	return altura;
}

void Animal::set_altura(float alt){
	altura = alt;
}

float Animal::get_largo(){
	return largo;
}

void Animal::set_largo(float lar){
	largo = lar;
}

float Animal::get_peso(){
	return peso;
}

void Animal::set_peso(float pes){
	peso = pes;
}

int Animal::get_edad(){
	return edad;
}

void Animal::set_edad(int ed){
	edad = ed;
}

void Animal::crecer(int year){
	edad = edad + year;
	for (int i = 0; i < year; i++){
		altura = altura * 1.02;
		largo = largo * 1.02;
		peso = peso * 1.01;
	}
}