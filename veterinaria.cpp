#include <iostream>
#include <string>
using namespace std;
#include "Animal.h"
#include "Trabajador.h"
#include "servicios.h"

int main(){
	string nombre, raza, color;
	float altura, largo, peso;
	int edad, crecimiento, valor;
	
	Animal mascota_1;
	Servicios servicio_1;
	Trabajador empleado_1;
	
	float paga_diaria, paga_semanal, pago_hora;
	int bono, id, horas_trabajadas, dias_trabajados, years_trabajados, opcion;	
	
	string tipo_servicio;
	float precio, duracion;	
	int cant_animales;
	
	int opcion_clase;
	cout << "	MENU:	" << endl;
	cout << "1.- Clase Animal" << endl;
	cout << "2.- Clase Trabajador" << endl;
	cout << "3.- Clase Servicios" << endl;
	cout << "Ingrese la opcion deseada: ";
	cin >> opcion_clase;
	
	switch(opcion_clase){
		case 1: 	//CLASE ANIMAL
			cout << "Ingrese el nombre de su mascota: ";
			cin >> nombre;
			cout << "Ingrese la raza de su mascota: ";
			cin >> raza;
			cout << "Ingrese el color de su mascota: ";
			cin >> color;
			cout << "Ingrese la altura de su mascota: ";
			cin >> altura;
			cout << "Ingrese el largo de su mascota: ";
			cin >> largo;
			cout << "Ingrese el peso de su mascota: ";
			cin >> peso;
			cout << "Ingrese la edad de su mascota: ";
			cin >> edad;
			cout << endl;
			
			mascota_1.set_nombre(nombre);
			mascota_1.set_raza(raza);
			mascota_1.set_color(color);
			mascota_1.set_altura(altura);
			mascota_1.set_largo(largo);
			mascota_1.set_peso(peso);
			mascota_1.set_edad(edad);
			
			cout <<"Nombre: " << mascota_1.get_nombre() << endl;
			cout <<"Raza: " << mascota_1.get_raza() << endl;
			cout <<"Color: " << mascota_1.get_color() << endl;
			cout <<"Altura: " << mascota_1.get_altura() << endl;
			cout <<"Largo: " << mascota_1.get_largo() << endl;
			cout <<"Peso: " << mascota_1.get_peso() << endl;
			cout <<"Edad: " << mascota_1.get_edad() << endl;
			cout <<endl;
			cout << "Cuantos anios ha crecido tu mascota: ";
			cin >> crecimiento;
			
			mascota_1.crecer(crecimiento);
			cout << "Su mascota crecio " << crecimiento << " years" << endl;
			cout <<"Altura: " << mascota_1.get_altura() << endl;
			cout <<"Largo: " << mascota_1.get_largo() << endl;
			cout <<"Peso: " << mascota_1.get_peso() << endl;
			cout <<"Edad: " << mascota_1.get_edad() << endl;
			cout << endl;
			
			cout << "Ingrese el nombre de la mascota a buscar: ";
			cin >> nombre;
			valor = mascota_1.buscar_animal(nombre);
			if (valor == 1){
				cout <<"La mascota ha sido encotrada!!!";
			}else{
				if (valor == 0){
					cout << "La mascota no ha sido encontrada";
				}else{
					cout << "error...";
				}
			}
			break;
		case 2: 	//CLASE TRABAJADOR
			cout << "Ingrese su primer nombre: ";
			cin >> nombre;
			cout << "Bienvenido " << nombre << " Por favor digita tu id: ";
			cin >> id;
			cout << "Ingresa tu pago por horas: ";
			cin >> pago_hora;
			cout << "Ingresa las horas trabajadas esta semana: ";
			cin >> horas_trabajadas;
			cout << "Ingresa los dias trabajados esta semana: ";
			cin >> dias_trabajados;
			cout << "Cuantos anios llevas trabajando en la empresa: ";
			cin >> years_trabajados;
			cout << endl;
			
			empleado_1.set_nombre(nombre);
			empleado_1.set_id(id);
			empleado_1.set_pago_hora(pago_hora);
			empleado_1.set_horas(horas_trabajadas);
			empleado_1.set_dias(dias_trabajados);
			
			cout << "Nombre: " << empleado_1.get_nombre() << endl;
			cout << "ID: " << empleado_1.get_id() << endl;
			cout << "Paga por hora: " << empleado_1.get_pago_hora() << endl;
			cout << "Horas trabajadas: " << empleado_1.get_horas() << endl;
			cout << "Dias trabajados: " << empleado_1.get_dias() << endl;
			cout << endl;
			
			cout <<" LOS DATOS INGRESADOS SON CORRECTOS:" << endl;
			cout <<"0.- NO			1.- SI" << endl;
			cin >> opcion;
			
			if (opcion == 1){
				paga_diaria = empleado_1.sueldo_diario(empleado_1.get_pago_hora(), empleado_1.get_horas());
				paga_semanal = empleado_1.sueldo_semanal(paga_diaria, empleado_1.get_dias());
				bono = empleado_1.bonos(years_trabajados);
				cout << "Sueldo diario: " << paga_diaria << endl;
				cout << "Sueldo semanal: " << paga_semanal << endl;
				cout << "Bono por years trabajados: " << bono << endl;
				cout << endl;
			} else{
				if (opcion == 0){
					cout << "POR SEGURIDAD SE CANCELO LA TRANSACCION..." << endl;
					return 0;
				} else{
					cout << "OPCION NO IDENTIFICADA..." << endl;
					return 0;
				}
			}
			break;
			
		case 3: 	//CLASE SERVICIOS
			cout << "Ingrese el tipo de servicio que desea, tenemos vacunacion, desparacitacion, bath, corte: ";
			cin >> tipo_servicio;
			cout << "Ingrese el precio del servicio: ";
			cin >> precio;
			cout << "Ingrese la duracion: ";
			cin >> duracion;
			cout << "Ingrese la cantidad de animales: ";
			cin >> cant_animales;
			cout << endl;
			
			servicio_1.set_tipo_servicio(tipo_servicio);
			servicio_1.set_precio(precio);
			servicio_1.set_duracion(duracion);
			servicio_1.set_cantidad_animales(cant_animales);
							
			cout << "Tipo de servicio: " << servicio_1.get_tipo_servicio()	<< endl;
			cout << "Precio: " << servicio_1.get_precio() << endl;
			cout << "Duracion (horas): " << servicio_1.get_duracion() << endl;
			cout << "Cantidad de animales: " << servicio_1.get_cantidad_animales() << endl;
			cout << endl;
			servicio_1.calcula_costo(precio, duracion, cant_animales);
			cout << "Duracion estimada: " << servicio_1.get_duracion() << endl;
			cout << "Precio total: " << servicio_1.get_precio() << endl;				
			servicio_1.disponibilidad(tipo_servicio);
			break;
		
		default:
			cout << "OPCION NO VALIDA...";
			break;
	}
	return 0;
}