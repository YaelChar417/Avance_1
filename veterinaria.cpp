#include <iostream>
#include <string>
using namespace std;
#include "Animal.h"
#include "Trabajador.h"
#include "servicios.h"


int main(){
	
	Canino canino1;
	Felino felino1;
	Ave ave1;
	
	Trabajador empleado_1;
	Datos_trabajador worker;
	Vacunacion vac1;
	Desparacitar desp1;
	Haircut hc1;
	
	string nombre, raza, color;
	float altura, largo, peso, tam_hocico, tam_salto, tam_alas;
	int edad, crecimiento, valor, opcion_animal;
	
	float paga_diaria, paga_semanal, pago_hora;
	int bono, id, horas_trabajadas, dias_trabajados, years_trabajados, opcion;	
	
	float precio, duracion;	
	int cant_animales, opcion_servicio;
	string puesto;
	
	int opcion_clase;
	cout << "	MENU:	" << endl;
	cout << "1.- Clase Animal" << endl;
	cout << "2.- Clase Trabajador" << endl;
	cout << "3.- Clase Servicios" << endl;
	cout << "Ingrese la opcion deseada: ";
	cin >> opcion_clase;
	switch(opcion_clase){
		case 1: 	//CLASE ANIMAL
		cout << endl;
			cout << "Que animal desea ingresar hoy: " << endl;
			cout << "1.- Canino" << endl;
			cout << "2.- Felino" << endl;
			cout << "3.- Ave" << endl;
			cin >> opcion_animal;
			
			switch(opcion_animal){
				case 1:
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
					cout << "Ingrese el tamanio del hocico de su mascota: ";
					cin >> tam_hocico;
					cout << endl;
					canino1.set_nombre(nombre);
					canino1.set_raza(raza);
					canino1.set_color(color);
					canino1.set_altura(altura);
					canino1.set_largo(largo);
					canino1.set_peso(peso);
					canino1.set_edad(edad);
					canino1.set_tam_hocico(tam_hocico);
					canino1.datos_canino();
					
					cout << "Cuantos anios ha crecido tu canino: ";
					cin >> crecimiento;
					canino1.crecer(crecimiento);
					canino1.datos_canino();
					
					cout << "Vamos a buscar a tu canino: " << nombre << endl;
					valor = canino1.buscar_animal(nombre);
					if (valor == 1){
						cout <<"La mascota ha sido encotrada!!!\n" << endl;
					}else{
						if (valor == 0){
							cout << "La mascota no ha sido encontrada\n" << endl;
						}else{
							cout << "error...\n" << endl;
						}
					}
					
					cout << nombre << " ha decidido ladrarte" << endl;
					canino1.ladrar();
					cout << "Tu decides jugar con tu mascota" << endl;
					canino1.jugar();
					break;
					
					
				
				case 2:
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
					cout << "Ingrese el tamanio del salto de su mascota: ";
					cin >> tam_salto;
					cout << endl;
					felino1.set_nombre(nombre);
					felino1.set_raza(raza);
					felino1.set_color(color);
					felino1.set_altura(altura);
					felino1.set_largo(largo);
					felino1.set_peso(peso);
					felino1.set_edad(edad);
					felino1.set_tam_salto(tam_salto);
					felino1.datos_felino();
					
					cout << "Cuantos anios ha crecido tu felino: ";
					cin >> crecimiento;
					felino1.crecer(crecimiento);
					felino1.datos_felino();
					
					cout << "Vamos a buscar a tu felino: " << nombre << endl;
					valor = felino1.buscar_animal(nombre);
					if (valor == 1){
						cout <<"La mascota ha sido encotrada!!!\n" << endl;
					}else{
						if (valor == 0){
							cout << "La mascota no ha sido encontrada\n" << endl;
						}else{
							cout << "error...\n" << endl;
						}
					}
					cout << nombre << " ha decidido maullar al verte" << endl;
					felino1.maullar();
					felino1.saltar();
					break;
					
				case 3:
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
					cout << "Ingrese el tamanio de alas de su mascota: ";
					cin >> tam_alas;
					cout << endl;
					ave1.set_nombre(nombre);
					ave1.set_raza(raza);
					ave1.set_color(color);
					ave1.set_altura(altura);
					ave1.set_largo(largo);
					ave1.set_peso(peso);
					ave1.set_edad(edad);
					ave1.set_tam_alas(tam_alas);
					ave1.datos_ave();
					
					cout << "Cuantos anios ha crecido tu ave: ";
					cin >> crecimiento;
					ave1.crecer(crecimiento);
					ave1.datos_ave();
					
					cout << "Vamos a buscar a tu ave: " << nombre << endl;
					valor = ave1.buscar_animal(nombre);
					if (valor == 1){
						cout <<"La mascota ha sido encotrada!!!\n" << endl;
					}else{
						if (valor == 0){
							cout << "La mascota no ha sido encontrada\n" << endl;
						}else{
							cout << "error...\n" << endl;
						}
					}
					ave1.volar();
					ave1.cantar();
					break;
					
				default:
					cout << "Opcion no reconocida..." << endl;
			}
			
			break;
			
		case 2: 	//CLASE TRABAJADOR
			cout << endl;
			cout << "Ingrese su primer nombre: ";
			cin >> nombre;
			cout << "Bienvenido " << nombre << " Por favor digita tu id de 4 digitos: ";
			cin >> id;
			cout << "Ingresa tu puesto de trabajo: ";
			cin >> puesto;
			cout << "Ingresa tu pago por horas: ";
			cin >> pago_hora;
			cout << "Ingresa las horas trabajadas esta semana: ";
			cin >> horas_trabajadas;
			cout << "Ingresa los dias trabajados esta semana: ";
			cin >> dias_trabajados;
			cout << "Cuantos anios llevas trabajando en la empresa: ";
			cin >> years_trabajados;
			cout << endl;
			
			empleado_1.worker.set_nombre(nombre);
			empleado_1.worker.set_id(id);
			empleado_1.worker.set_puesto(puesto);
			empleado_1.set_pago_hora(pago_hora);
			empleado_1.set_horas(horas_trabajadas);
			empleado_1.set_dias(dias_trabajados);
			
			empleado_1.mostrar_datos();
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
					cout << "POR SEGURIDAD SE CANCELO LA TRANSACCION...\n" << endl;
					return 0;
				} else{
					cout << "OPCION NO IDENTIFICADA...\n" << endl;
					return 0;
				}
			}
			cout << "Buscando si el trabajador esta en la empresa por su nombre"<< endl;
			valor = worker.buscar_empleado(nombre);
			if (valor == 1){
				cout << "Efectivamente trabajas en esta empresa ;)\n" << endl;
			}else {
				cout << "No trabajas en esta empresa :(\n" << endl; 
			}
			cout << "Buscando por id " << endl;
			valor = worker.buscar_id(id);
			if (valor == 1){
				cout << "Efectivamente trabajas en esta empresa ;)\n" << endl;
			}else {
				cout << "No trabajas en esta empresa :(\n" << endl; 
			}
			worker.merecedor_ascenso(years_trabajados);
			
			break;
			
		case 3: 	//CLASE SERVICIOS
			cout << endl;
			cout << "Selecciona el servicio que deseas realizar: "<< endl;
			cout << "1.- Vacunacion" << endl;
			cout << "2.- Desparacitacion" << endl;
			cout << "3.- Corte de pelo"	<< endl;	
			cin >> opcion_servicio;
			switch(opcion_servicio){
				case 1:
					vac1.set_tipo_servicio("Vacunacion");
					vac1.set_precio(540);
					vac1.set_duracion(0.5);
					cout << "Cuantos animales va a vacunar: ";
					cin >> cant_animales;
					vac1.set_cantidad_animales(cant_animales);
					cout << endl;
					
					cout << "Tipo de servicio: " << vac1.get_tipo_servicio() << endl;
					cout << "Precio por mascota: " << vac1.get_precio() << endl;
					cout << "Duracion en horas: " << vac1.get_duracion() << endl;
					cout << endl;
					vac1.calcula_costo(540, 0.5, cant_animales);
					cout << "Duracion estimada: " << vac1.get_duracion() << " horas" << endl;
					cout << "Precio total: " << vac1.get_precio() << endl;
					vac1.disponibilidad(vac1.get_tipo_servicio());
					cout << endl;
					
					vac1.vacunar_mascota();
					vac1.dar_premio();
					
					break;
				
				case 2:
					desp1.set_tipo_servicio("Desparacitacion");
					desp1.set_precio(325);
					desp1.set_duracion(0.2);
					cout << "Cuantos animales va a desparacitar: ";
					cin >> cant_animales;
					desp1.set_cantidad_animales(cant_animales);
					cout << endl;
					
					cout << "Tipo de servicio: " << desp1.get_tipo_servicio() << endl;
					cout << "Precio por mascota: " << desp1.get_precio() << endl;
					cout << "Duracion en horas: " << desp1.get_duracion() << endl;
					cout << endl;
					desp1.calcula_costo(325, 0.2, cant_animales);
					cout << "Duracion estimada: " << desp1.get_duracion() << " horas" << endl;
					cout << "Precio total: " << desp1.get_precio() << endl;
					vac1.disponibilidad(desp1.get_tipo_servicio());
					cout << endl;
								
					desp1.desparacitar_mascota();
					break;
					
				case 3:
					hc1.set_tipo_servicio("Corte");
					hc1.set_precio(475);
					hc1.set_duracion(1.5);
					cout << "Cuantos animales va a cortar el pelo: ";
					cin >> cant_animales;
					hc1.set_cantidad_animales(cant_animales);
					cout << endl;
					
					cout << "Tipo de servicio: " << hc1.get_tipo_servicio() << endl;
					cout << "Precio por mascota: " << hc1.get_precio() << endl;
					cout << "Duracion en horas: " << hc1.get_duracion() << endl;
					cout << endl;
					hc1.calcula_costo(475, 1.5, cant_animales);
					cout << "Duracion estimada: " << hc1.get_duracion() << " horas" << endl;
					cout << "Precio total: " << hc1.get_precio() << endl;
					hc1.disponibilidad(hc1.get_tipo_servicio());
					cout << endl;
					
					hc1.baniar();
					hc1.cortar_pelo();
					break;
				
				default:
					cout << "Opcion no reconocida..."<< endl;
					break;
			}
			break;
		
		default:
			cout << "OPCION NO VALIDA...";
			break;
	}
	return 0;
}