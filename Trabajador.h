/*
 * Proyecto Veterinaria
 * Yael Charles Marin
 * A01711111
 * 30/11/2023
 */

/*
 * Clase Datos_trabajador, es una clase que compone a
 * la clase principal Trabajador, cuenta con los atributos
 * del nombres y puesto del trabajador, ademas de su id
 * y puedes buscar a los trabajadores por nombre o id, 
 * ademas de indicarles si merecen un ascenso
 */
using namespace std;
#include <string>
#include <string>
class Datos_trabajador{
	private:
		// aributos clase Datos_trabajador
		string puesto, nombre;
		int id;
	public:
		// Constructores clase Datos_trabajador
		Datos_trabajador(): puesto(""), nombre(""), id(0){};
		Datos_trabajador(string pues, string nom, int di): puesto(pues), nombre(nom), id(di){};
		//getters 
		int get_id(); 
		string get_nombre();
		string get_puesto();
		//setters
		void set_id(int);
		void set_nombre(string);
		void set_puesto(string);
		//metodos propios de la clase 
		void merecedor_ascenso(int);
};
int Datos_trabajador::get_id(){
	return id;
}
void Datos_trabajador::set_id(int di){
	id = di;
}
string Datos_trabajador::get_nombre(){
	return nombre;
}
void Datos_trabajador::set_nombre(string nom){
	nombre = nom;
}
string Datos_trabajador::get_puesto(){
	return puesto;
}
void Datos_trabajador::set_puesto(string pues){
	puesto = pues;
}
/* Metodo merecedor de ascenso que recibe los
 * años trabajados por el trabajador y si estos
 * son de entre 0-10 no merece un ascenso, en cambio
 * si son mayores a 10 si lo merece e imprime el mensaje
 * en el main
 */
void Datos_trabajador::merecedor_ascenso(int years){
	if(years >= 0 && years < 10){
		cout << "Lo sentimos no mereces un ascenso..." << endl;
	} else{
		cout << "Felicidades si mereces un asceso :)" << endl;
	}
} // Fin de la clase Datos_trabajador

/* Clase principal Trabajador, que tiene atributos como 
 * pago por hora, las horas y dias que trabajado, ademas
 * de que esta compuesta por la clase Datos_trabajador
 * y cuenta con los metodos para calcular el sueldo diario
 * semanal y regresar si el trabajador recibe un bono.
 */
class Trabajador{
	private:
		// atributos clase Trabajador
		float pago_hora;
		int horas, dias;
		
	public:
		// componente de la clase datos trabajador
		Datos_trabajador worker;
		// Constructores clase Trabajador
		Trabajador():pago_hora(0.0), horas(0), dias(0){};
		Trabajador(float pago_h, int h, int d):pago_hora(pago_h), horas(h), dias(d){};
		
		//getters clase Trabajador
		float get_pago_hora();
		int get_horas();
		int get_dias();
		//setters clase Trabajador
		void set_pago_hora(float);
		void set_horas(int);
		void set_dias(int);
		//metodos de la clase
		float sueldo_diario(float, int);
		float sueldo_semanal(float, int);
		int bonos(int);
		
		//metodo encargado de ingresar los valores al objeto que sea de la clase Datos_trabajador
		void crear_datos(int di, string nom, string pues){
			worker.set_id(di);
			worker.set_nombre(nom);
			worker.set_puesto(pues);
		}
		// metodo encargado de imprimir y mostrar al usuario el valor de los atributos de la clase Datos_trabajador
		void mostrar_datos(){
			cout << "ID: " << worker.get_id() << endl;
			cout << "Nombre: " << worker.get_nombre() << endl;
			cout << "Puesto: " << worker.get_puesto() << endl;
		}
		
};
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

/*
 * Metodo sueldo diario recive los valores de pago por hora
 * y las horas trabajadas en el dia para multiplicarlos y asi
 * tener el pago por dia.
 * 
 */
float Trabajador::sueldo_diario(float pago_hora, int horas){
	float paga_diaria;
	paga_diaria = pago_hora * horas;
	return paga_diaria;
}

/* Metodo sueldo semanal que recibe la paga diaria calculada 
 * con el metodo anterior y los dias que trabajo, para multiplicarlos
 * y asi obtener la paga semanal del trabajador.
 * 
 * 
 */
float Trabajador::sueldo_semanal(float paga_diaria, int dias){
	float paga_semanal;
	paga_semanal = paga_diaria * dias;
	return paga_semanal;
}

/*
 * Metodo bonos que recibe desde el main cuantos anios ha trabajado 
 * y si trabajo de entre 0 - 5 no recibe un bono, si es de 5 - 10 
 * recibe 500 dlrs, de 10 - 15 recibe 1500 dlrs, de 15 en adelante recibe 1500 dlrs
 */
int Trabajador::bonos(int years){
	int bono;
	
	if (years > 0 && years < 5){
		bono = 0;
	}else{
		if (years >= 5 && years < 10){
		bono = 500;
	}else{
		if (years <= 10 && years < 15){
			bono = 1000;
		}else{
			bono = 1500;
		}
	}
	}
	
	return bono;
} // fin de la clase Trabajador
