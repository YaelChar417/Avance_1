#include <cctype>
#include <string>
#include <vector>
using namespace std;

//Inicio de la clase Animal que es la clase padre
class Animal {
	private: // Atributos que se heredarán
		string nombre, raza, color;
		float altura, largo, peso;
		int edad;
		
	public: //Metodos que igualmente se heredarán
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
		int buscar_animal(string);
		void mostrar_datos(); // añadir esta funcion
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

int Animal::buscar_animal(string nombre_animal){
	int valor;
	string nombres_previos[] = {"alex", "camilo", "milo", "toby", "fox", "papi", "pelusa", "blacky", "rufino", "tonton", "chiquito", "bebe", "flowy"};
	
	for (int i = 0; i < nombre_animal.size(); i++){ //convierte el valor ingresado a minusculas para hacer una comparacion correcta
		nombre_animal[i] = tolower(nombre_animal[i]);
	}
	
	for(const string& nombre_previo : nombres_previos){
		if (nombre_animal == nombre_previo){
			valor = 1;
			break;
		}else{
			valor = 0;
		}
	}
	return valor;
}
void Animal::mostrar_datos(){
	cout << "Nombre: " << nombre << endl;
	cout << "Raza: " << raza << endl;
	cout << "Color: " << color << endl;
	cout << "Altura: " << altura << endl;
	cout << "Largo: " << largo << endl;
	cout << "Peso: " << peso << endl;
	cout << "Edad: " << edad << endl;
}//FIN de la clase padre Animal.
// clase canino hija
class Canino:public Animal{
	private:
		int tam_hocico;
	public:
		Canino(): Animal(), tam_hocico(0.0){};
		Canino(string nom, string raz, string col, float alt, float lar, float pes, int ed, float tam_h) : Animal (nom, raz, col, alt, lar, pes, ed), tam_hocico(tam_h){};
		void ladrar();
		void jugar();
		float get_tam_hocico();
		void set_tam_hocico(float);
		void datos_canino();
};
float Canino::get_tam_hocico(){
	return tam_hocico;
}

void Canino::set_tam_hocico(float tam_h){
	tam_hocico = tam_h;
}

void Canino::ladrar(){
	cout << "Wooof wooof woof woof" << endl;
	cout << "*El perro te ladra energicamente*" <<endl;
	cout << "*Parece alegrarse de verte...*" << endl;
	cout << endl;
}

void Canino::jugar(){
	cout << "*Acaricias al perro*" << endl;
	cout << "*El perro te mira contento*" << endl;
	ladrar(); 

}
void Canino::datos_canino(){
	mostrar_datos();
	cout << "Tamanio del hocico: " << tam_hocico << endl;
	cout << endl;
}// fin clase canino hija
//clase felino hija
class Felino:public Animal{
	private:
		float tam_salto;
	public:
		Felino(): Animal(), tam_salto(0.0){};
		Felino(string nom, string raz, string col, float alt, float lar, float pes, int ed, float tamsal) : Animal (nom, raz, col, alt, lar, pes, ed), tam_salto(tamsal){};
		float get_tam_salto();
		void set_tam_salto(float );
		void maullar();
		void saltar();
		void datos_felino();
};

float Felino::get_tam_salto(){
	return tam_salto;
}

void Felino::set_tam_salto(float tamsal){
	tam_salto = tamsal;
}

void Felino::maullar(){
	cout << "Miauuuuuu miau miau miauuuu" << endl;
	cout << "*Tu felino te ladra con energias...*" << endl;
	cout << "*Parece tener algo de hambre...*";
	cout << endl;
}

void Felino::saltar(){
	cout << "*Tu felino se asusto de repente...*" << endl;
	cout << "*Ha saltado " << tam_salto << " cm" << endl;
	cout << "*Ha aterrizado sin problemas*" << endl;
	cout << endl;
}
void Felino::datos_felino(){
	mostrar_datos();
	cout << "Tamanio de salto: " << tam_salto << endl;
	cout << endl;
}//fin clase felino
// inicio clase Ave hija
class Ave:public Animal{
	private:
		float tam_alas;
	public:
		Ave(): Animal(), tam_alas(0.0){};
		Ave(string nom, string raz, string col, float alt, float lar, float pes, int ed, float tam_al) : Animal (nom, raz, col, alt, lar, pes, ed), tam_alas(tam_al){};
		float get_tam_alas();
		void set_tam_alas(float);
		void datos_ave();
		void volar();
		void cantar();
};
float Ave::get_tam_alas(){
	return tam_alas;
}
void Ave::set_tam_alas(float tam_al){
	tam_alas = tam_al;
}

void Ave::datos_ave(){
	mostrar_datos();
	cout << "Tamanio de las alas: " << tam_alas << endl;
	cout << endl;
}

void Ave::volar(){
	cout << "tu ave quiere despegar las alas un poco..." << endl;
	cout << "tu ave ha comenzado a volar" << endl;
	cout << "despues de un rato parece que se ha cansado" << endl;
	cout << endl;
}

void Ave::cantar(){
	cout << "Despacito Quiero respirar tu cuello despacito Deja que te diga cosas al oido Para que te acuerdes si no estas conmigo Despacito" << endl;
	cout << "tu ave ha cantado" << endl;
	cout << "pero parece tener un gusto terrible en musica..." << endl;
	cout << endl;
}

