/*
 * Proyecto Veterinaria
 * Yael Charles Marin
 * A01711111
 * 30/11/2023
 */

/*
 * Clase Animal, es el esqueleto para 3 clases hijas 
 * donde tiene parametros de los datos de un animal
 * ademas de metodos que permiten buscar al animal
 * o mostrar los datos de este al usuario
 */

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
		// constructores de la clase Animal
		Animal(): nombre(""), raza(""), color(""), altura(0.0), largo(0.0), peso(0.0), edad(0){};
		Animal(string nom, string raz, string col, float alt, float lar, float pes, int ed): nombre(nom), raza(raz), color(col), altura(alt), largo(lar), peso(pes), edad(ed){};
		//getters de la clase Animal
		string get_nombre();
		string get_raza();
		string get_color();
		float get_altura();
		float get_largo();
		float get_peso();
		int get_edad();
		// setters de la clase Animal
		void set_nombre(string );
		void set_raza(string );
		void set_color(string );
		void set_altura(float );
		void set_largo(float );
		void set_peso(float );
		void set_edad(int);
		// metodos de la clase animal
		void crecer(int);
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

/*  metodo crecer, que recibe cuantos años crecio
 *  una mascota desde el main y modifica los valores
 * de edad, altura, peso y largo del animal
 */
void Animal::crecer(int year){
	edad = edad + year;
	for (int i = 0; i < year; i++){
		altura = altura * 1.02;
		largo = largo * 1.02;
		peso = peso * 1.01;
	}
}

/* metodo mostrar datos, imprime 
 * los valores de los atributos
 * que fueron ingresados por 
 * el usuario para mostrarselos
 * posteriormente
 */
void Animal::mostrar_datos(){
	cout << "Nombre: " << nombre << endl;
	cout << "Raza: " << raza << endl;
	cout << "Color: " << color << endl;
	cout << "Altura: " << altura << endl;
	cout << "Largo: " << largo << endl;
	cout << "Peso: " << peso << endl;
	cout << "Edad: " << edad << endl;
}//FIN de la clase padre Animal.

/*
 *  Clase Heredada Canino, que ademas de los atributos
 * de la clase padre, tiene el atributo del tamanio del 
 * hocio y tres metodos propios que son ladrar, jugar y
 * mostrar datos 
 */
class Canino:public Animal{
	private:
		// atributo propio de la clase Canino
		int tam_hocico;
	public:
		// Constructores de la clase Canino que incluyen el constructor de la clase Animal
		Canino(): Animal(), tam_hocico(0.0){};
		Canino(string nom, string raz, string col, float alt, float lar, float pes, int ed, float tam_h) : Animal (nom, raz, col, alt, lar, pes, ed), tam_hocico(tam_h){};
		// Metodos propios de la clase canino
		void ladrar();
		void jugar();
		void datos_canino();
		// getter de la clase canino
		float get_tam_hocico();
		// setter de la clase canino
		void set_tam_hocico(float);
};
float Canino::get_tam_hocico(){
	return tam_hocico;
}

void Canino::set_tam_hocico(float tam_h){
	tam_hocico = tam_h;
}
/*
 * El metodo ladrar regresa una mini historia 
 * que pasaría si tu canino te ladrase
 * por felicidad
 */
void Canino::ladrar(){
	cout << "Wooof wooof woof woof" << endl;
	cout << "*El perro te ladra energicamente*" <<endl;
	cout << "*Parece alegrarse de verte...*" << endl;
	cout << endl;
}

/*
 * El metodo jugar regresa una mini historia
 * que pasaria si acariciaras a tu canino
 * y este lo disfrute
 */
void Canino::jugar(){
	cout << "*Acaricias al perro*" << endl;
	cout << "*El perro te mira contento*" << endl;
	ladrar(); 

}
/* metodo datos canino, que imprime directamente
 * un mensaje del tamanio del hocico y el valor
 * de este para mostrarlo al usuario
 */
void Canino::datos_canino(){
	mostrar_datos();
	cout << "Tamanio del hocico: " << tam_hocico << endl;
	cout << endl;
}// fin clase canino hija

/*
 *  Clase Heredada Felino, que ademas de los atributos
 * de la clase padre, tiene el atributo del tamanio del 
 * salto y tres metodos propios que son maullar, saltar
 * y datos felino
 */
class Felino:public Animal{
	private:
		// atributo clase felino
		float tam_salto;
	public:
		// constructores clase felino
		Felino(): Animal(), tam_salto(0.0){};
		Felino(string nom, string raz, string col, float alt, float lar, float pes, int ed, float tamsal) : Animal (nom, raz, col, alt, lar, pes, ed), tam_salto(tamsal){};
		// getter clase felino
		float get_tam_salto();
		// setter clase felino
		void set_tam_salto(float );
		// metodos clase felino
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
/*
 * metodo maullar imprime una mini historia de 
 * lo que pasaria si tu gato te maullara
 * porque tiene hambre
 */
void Felino::maullar(){
	cout << "Miauuuuuu miau miau miauuuu" << endl;
	cout << "*Tu felino te maulla con energias...*" << endl;
	cout << "*Parece tener algo de hambre...*";
	cout << endl;
}

/*
 * metodo saltar que ademas de presentar una mini
 * historia muestra el valor de salto que daria tu 
 * felino porque se ha asustado
 */
void Felino::saltar(){
	cout << "*Tu felino se asusto de repente...*" << endl;
	cout << "*Ha saltado " << tam_salto << " cm" << endl;
	cout << "*Ha aterrizado sin problemas*" << endl;
	cout << endl;
}

/* metodo datos felino, que imprime directamente
 * un mensaje del tamanio del salto y el valor
 * de este para mostrarlo al usuario
 */
void Felino::datos_felino(){
	mostrar_datos();
	cout << "Tamanio de salto: " << tam_salto << endl;
	cout << endl;
}//fin clase felino

/*
 *  Clase Heredada Ave, que ademas de los atributos
 * de la clase padre, tiene el atributo del tamanio de las 
 * alas y tres metodos propios que son volar, cantar
 * y datos ave
 */
class Ave:public Animal{
	private:
		// atributos clase ave
		float tam_alas;
	public:
		// constructores clase Ave
		Ave(): Animal(), tam_alas(0.0){};
		Ave(string nom, string raz, string col, float alt, float lar, float pes, int ed, float tam_al) : Animal (nom, raz, col, alt, lar, pes, ed), tam_alas(tam_al){};
		// getter clase Ave
		float get_tam_alas();
		// setter clase Ave
		void set_tam_alas(float);
		// metodos propios de la clase Ave
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

/* metodo datos ave, que imprime directamente
 * un mensaje del tamanio de las alas y el valor
 * de estas para mostrarlo al usuario
 */
void Ave::datos_ave(){
	mostrar_datos();
	cout << "Tamanio de las alas: " << tam_alas << endl;
	cout << endl;
}

/* metodo volar que muestra una mini historia
 * de lo que pasaria si tu ave empezara a volar
 * pero parara porque se canso
 */
void Ave::volar(){
	cout << "tu ave quiere despegar las alas un poco..." << endl;
	cout << "tu ave ha comenzado a volar" << endl;
	cout << "despues de un rato parece que se ha cansado" << endl;
	cout << endl;
}

/* metodo cantar, muestra una mini historia
 * de lo que pasaria si tu ave empezara a cantar
 * pero no te gusta su canto.
 */
void Ave::cantar(){
	cout << "Despacito Quiero respirar tu cuello despacito Deja que te diga cosas al oido Para que te acuerdes si no estas conmigo Despacito" << endl;
	cout << "tu ave ha cantado" << endl;
	cout << "pero parece tener un gusto terrible en musica..." << endl;
	cout << endl;
}

