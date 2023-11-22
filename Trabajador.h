using namespace std;
#include <string>
#include <string>
class Datos_trabajador{
	private:
		string puesto, nombre;
		int id;
	public:
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
		//metodos de la clase propia
		int buscar_empleado(string);
		int buscar_id(int);
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
int Datos_trabajador::buscar_empleado(string nombre){
	int valor;
	string nombres_previos[] = {"martin", "francisco", "benji", "maria", "fernanda", "erick", "ana", "paula", "jose", "alejandro", "roberto", "jade", "sofia"};
	
	for (int i = 0; i < nombre.size(); i++){ //convierte el valor ingresado a minusculas para hacer una comparacion correcta
		nombre[i] = tolower(nombre[i]);
	}
	
	for(const string& nombre_previo : nombres_previos){
		if (nombre == nombre_previo){
			valor = 1;
			break;
		}else{
			valor = 0;
		}
	}
	return valor;
}
int Datos_trabajador::buscar_id(int id){
	int valor;
	int id_previos[] = {1234, 3241, 1111, 2222, 3221, 4411, 1243, 4321, 3214};
	
	for(const int& id_buscar : id_previos){
		if(id == id_buscar){
			valor = 1;
			break;
		} else{
			valor = 0;
		}
	}
	return valor;
}
void Datos_trabajador::merecedor_ascenso(int years){
	if(years >= 0 && years < 10){
		cout << "Lo sentimos no mereces un ascenso..." << endl;
	} else{
		cout << "Felicidades si mereces un asceso :)" << endl;
	}
}
class Trabajador{
	private:
		float pago_hora;
		int horas, dias;
		
	public:
		Datos_trabajador worker;
		Trabajador():pago_hora(0.0), horas(0), dias(0){};
		Trabajador(float pago_h, int h, int d):pago_hora(pago_h), horas(h), dias(d){};
		
		//getters
		float get_pago_hora();
		int get_horas();
		int get_dias();
		//setters
		void set_pago_hora(float);
		void set_horas(int);
		void set_dias(int);
		//metodos de la clase
		float sueldo_diario(float, int);
		float sueldo_semanal(float, int);
		int bonos(int);
		//metodos de la clase compuesta
		
		void crear_datos(int di, string nom, string pues){
			worker.set_id(di);
			worker.set_nombre(nom);
			worker.set_puesto(pues);
		}
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
}
