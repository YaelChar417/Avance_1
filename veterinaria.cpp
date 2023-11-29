#include <iostream>
#include <string>
using namespace std;
/*
 * Proyecto Veterinaria
 * Yael Charles Marin
 * A01711111
 * 30/11/2023
 */
 /*
 * Descripcion: este es un proyecto demo para la clase de Pensamiento
 * Computacional Orientado a Objetos. En este programa se pueden acceder
 * a 3 clases diferentes donde se capturan datos de animales o trabajadores
 * o tambíen verificar la disponibilidad de un servicio.
*/
//Biliotecas
#include "Animal.h"
#include "Trabajador.h"
#include "Servicios.h"

int main()
{
	//Declaracion de las clases con sus objetos
	Canino canino1;
	Felino felino1;
	Ave ave1;
	Trabajador empleado_1;
	Datos_trabajador worker;
	Vacunacion vac1;
	Desparacitar desp1;
	Haircut hc1;
	//Declaracion de todas las variables empleadas para el funcionamiento del programa
	string nombre, raza, color, puesto;
	float altura, largo, peso, tam_hocico, tam_salto, tam_alas, precio, duracion, paga_diaria, paga_semanal, pago_hora;
	int edad, crecimiento, valor, opcion_animal, cant_animales, opcion_servicio, bono, id, horas_trabajadas, dias_trabajados, years_trabajados, opcion;	
	int opcion_clase;
	int repetir = 1;
	
	do //permite que el programa se cicle con ayuda de la variable repetir, y se repite siempre y cuando sea igual a 1.
	{
		cout << "	MENU:	" << endl; //menu principal
		cout << "1.- Clase Animal" << endl;
		cout << "2.- Clase Trabajador" << endl;
		cout << "3.- Clase Servicios" << endl;
		cout << "4.- SALIR..." << endl;
		cout << "Ingrese la opcion deseada: ";
		cin >> opcion_clase;
		switch(opcion_clase) //Switch que permite eleigr entre las tres clases disponibles
		{
			case 1: 	//		CLASE 		ANIMAL
				cout << endl;
				cout << "Que animal desea ingresar hoy: " << endl;
				cout << "1.- Canino" << endl;
				cout << "2.- Felino" << endl;
				cout << "3.- Ave" << endl;
				cin >> opcion_animal;
				
				switch(opcion_animal)//Este switch permite elegir entre las tres clases heredadas que forman parte de la clase animal
				{
					case 1: // registra la subclase Canino
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
						//Entrega los parametros a la clase para poder desarrollar los metodos de clase.
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
						cin >> crecimiento; // llama a la funcion crecimiento 
						canino1.crecer(crecimiento);
						canino1.datos_canino(); //imprime los datos del canino
						// funciones propias de la clase canino que son dialogos que tendrías con tu canino
						cout << "****MINI - HISTORIA****" << endl;
						cout << nombre << " ha decidido ladrarte" << endl;
						canino1.ladrar();
						cout << "Tu decides jugar con tu mascota" << endl;
						canino1.jugar();
						
						break;
					case 2: // este case es de la segunda clase heredada de FELINO
						//Registrando datos de tu felino
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
						//Ingresa los datos a la clase de felino para poder entregar los metodos propios de la clase
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
						felino1.crecer(crecimiento);//llama a la funcion  crecimiento del felino
						felino1.datos_felino(); //muestra los datos del felino
						//Metodos propios de la clase felino.
						cout << "****MINI - HISTORIA****" << endl;
						cout << nombre << " ha decidido maullar al verte\n" << endl;
						felino1.maullar();
						felino1.saltar();
						break;
						
					case 3: //Este case es de la clase AVE
						//ingresa los parametros de la clase AVE para que hagan sus metodos 
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
						//envia los parametros a la clase
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
						ave1.crecer(crecimiento); //llama a la funcion crecimiento
						ave1.datos_ave(); // muestra los datos de tu ave
						//metodos propios de la clase ave
						cout << "****MINI - HISTORIA****" << endl;
						ave1.volar();
						ave1.cantar();
						break;
					default: //Este default es parte del switch que navega entre las clases heredadas de ANIMAL mas no el de las tres clases
						cout << "Opcion no reconocida..." << endl;
				}
				// Verifica si el usuario aun quiere seguir repitiendo el codigo despues de ingresar los datos de una de las clases
				cout << "Desea repetir el programa: " << endl;
				cout << "1.- SI		0.- NO" << endl;
				cin >> repetir;
				break;
				
			case 2: 	//		CLASE 		TRABAJADOR
				// registra los valores que se mandarán a la clase trabajador.
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
				//Envia los datos a la clase trabajador.
				empleado_1.worker.set_nombre(nombre);
				empleado_1.worker.set_id(id);
				empleado_1.worker.set_puesto(puesto);
				empleado_1.set_pago_hora(pago_hora);
				empleado_1.set_horas(horas_trabajadas);
				empleado_1.set_dias(dias_trabajados);
				
				empleado_1.mostrar_datos(); // muestra los datos ingresados de la clase trabajador
				// Retorna los datos de pago por hora, las horas que trabajo y los dias para mostrarlos igualmente
				cout << "Paga por hora: " << empleado_1.get_pago_hora() << endl;
				cout << "Horas trabajadas: " << empleado_1.get_horas() << endl;
				cout << "Dias trabajados: " << empleado_1.get_dias() << endl;
				cout << endl;
				// Verifica si los datos son correctos, si lo son continua el codigo, si no detiene el programa.
				cout <<" LOS DATOS INGRESADOS SON CORRECTOS:" << endl;
				cout <<"0.- NO			1.- SI" << endl;
				cin >> opcion;
				
				if (opcion == 1) //este if realiza la tarea de que si se ingresa un 0 no se realiza nada referente a los metodos de clase en cambio si se 
				{				//añade un 1 hace todos los calculos.
					paga_diaria = empleado_1.sueldo_diario(empleado_1.get_pago_hora(), empleado_1.get_horas()); // calcula el sueldo diario mandandole el pago por hora y las horas que trabajo
					paga_semanal = empleado_1.sueldo_semanal(paga_diaria, empleado_1.get_dias()); // usando la paga diaria y los dias trabajados calcula el sueldo semanal
					bono = empleado_1.bonos(years_trabajados); // regresa el bono que merece el usuario dependiendo los años trabajados
					cout << "Sueldo diario: " << paga_diaria << endl;
					cout << "Sueldo semanal: " << paga_semanal << endl;
					cout << "Bono por years trabajados: " << bono << endl;
					cout << "Has trabajado " << years_trabajados << " anios ";
					worker.merecedor_ascenso(years_trabajados);
					cout << endl;
				}else // este else forma parte de la clase Trabajador 
				{
					if (opcion == 0) // si se ingresa un 0 no se realiza ningun procedimiento
					{
						cout << "POR SEGURIDAD SE CANCELO LA TRANSACCION...\n" << endl;
					}else
					{
						cout << "OPCION NO IDENTIFICADA...\n" << endl;
					}
				}
				// verifica si el usuario desea seguir repitiendo el programa despues de haber hecho el proceso de la clase trabajador
				cout << "Desea repetir el programa: " << endl;
				cout << "1.- SI		0.- NO" << endl;
				cin >> repetir;	
				break;
				
			case 3: 	//		CLASE 		SERVICIOS
				cout << endl;
				// Menu de la clase servicios para que el usurio indique cual desea solicitar
				cout << "Selecciona el servicio que deseas realizar: "<< endl;
				cout << "1.- Vacunacion" << endl;
				cout << "2.- Desparacitacion" << endl;
				cout << "3.- Corte de pelo"	<< endl;	
				cin >> opcion_servicio;
				switch(opcion_servicio) //este switch maneja las 3 diferentes clases heredadas de la clase padre servicios
				{
					case 1: // este case es el de la clase vacunacion
						// llena los valores que se asignaran a los parametros de la clase vacunacion
						vac1.set_tipo_servicio("Vacunacion");
						vac1.set_precio(540);
						vac1.set_duracion(0.5);
						cout << "Cuantos animales va a vacunar: ";
						cin >> cant_animales;
						vac1.set_cantidad_animales(cant_animales);
						cout << endl;
						
						// imprime los valores al usuario
						cout << "Tipo de servicio: " << vac1.get_tipo_servicio() << endl;
						cout << "Precio por mascota: " << vac1.get_precio() << endl;
						cout << "Duracion en horas: " << vac1.get_duracion() << endl;
						cout << endl;
						// llama a la funcion calcula costo y entrega valores al usuario
						vac1.calcula_costo(540, 0.5, cant_animales);
						cout << "Duracion estimada: " << vac1.get_duracion() << " horas" << endl;
						cout << "Precio total: " << vac1.get_precio() << endl;
						vac1.disponibilidad(vac1.get_tipo_servicio()); // verifica la disponibilidad que hay en la vacunacion
						cout << endl;
						
						// metodos propios de la clas vacunacion
						cout << "**** MINI - HISTORIA ****" << endl;
						vac1.vacunar_mascota();
						vac1.dar_premio();
						
						break;
					
					case 2: // este caso es de la clase desparacitacion
						// llena los valores que se asignaran a la clase desparacitacion
						desp1.set_tipo_servicio("Desparacitacion");
						desp1.set_precio(325);
						desp1.set_duracion(0.2);
						cout << "Cuantos animales va a desparacitar: ";
						cin >> cant_animales;
						desp1.set_cantidad_animales(cant_animales);
						cout << endl;
						// entrega valores al usuario
						cout << "Tipo de servicio: " << desp1.get_tipo_servicio() << endl;
						cout << "Precio por mascota: " << desp1.get_precio() << endl;
						cout << "Duracion en horas: " << desp1.get_duracion() << endl;
						cout << endl;
						// manda llamar a la funcion calcula costo y entrega valores al usuario
						desp1.calcula_costo(325, 0.2, cant_animales);
						cout << "Duracion estimada: " << desp1.get_duracion() << " horas" << endl;
						cout << "Precio total: " << desp1.get_precio() << endl;
						vac1.disponibilidad(desp1.get_tipo_servicio()); // verifica la disponibilidad de la desparacitacion
						cout << endl;
						// metodo propio de la clase desparacitacion
						cout << "**** MINI - HISTORIA ****" << endl;
						desp1.desparacitar_mascota();
						break;
						
					case 3: // este caso es del corte de pelo
						// llena valores que se asiganaran a la clase haircut
						hc1.set_tipo_servicio("Corte");
						hc1.set_precio(475);
						hc1.set_duracion(1.5);
						cout << "Cuantos animales va a cortar el pelo: ";
						cin >> cant_animales;
						hc1.set_cantidad_animales(cant_animales);
						cout << endl;
						// muestra los valores al usuario
						cout << "Tipo de servicio: " << hc1.get_tipo_servicio() << endl;
						cout << "Precio por mascota: " << hc1.get_precio() << endl;
						cout << "Duracion en horas: " << hc1.get_duracion() << endl;
						cout << endl;
						// manda llamar a la funcion calcula costo y entrega valores al usuario
						hc1.calcula_costo(475, 1.5, cant_animales);
						cout << "Duracion estimada: " << hc1.get_duracion() << " horas" << endl;
						cout << "Precio total: " << hc1.get_precio() << endl;
						hc1.disponibilidad(hc1.get_tipo_servicio());
						cout << endl;
						// metodos propios de la clase haircut
						cout << "**** MINI - HISTORIA ****" << endl;
						hc1.baniar();
						hc1.cortar_pelo();
						break;
					
					default: //este default forma parte de la clase servicios mas no del switch principal que maneja las 3 clases principales
						cout << "Opcion no reconocida..."<< endl;
						break;
				// despues de terminar todo el procedimiento pregunta al usuario si va a repetir el programa una vez mas
				cout << "Desea repetir el programa: " << endl;
				cout << "1.- SI		0.- NO" << endl;
				cin >> repetir;
				}
				break;
			case 4:	// este caso es del switch principal y verifica si se ingreso un 4 para que se cierre el programa
				repetir = 0;
				cout << "Has decidido salir del programa" << endl;
				break;
			default: // default del switch principal donde si se ingresa una opcion que no fue reconocida regresa un mensaje de error y vuelve a preguntar si 
				cout << "OPCION NO VALIDA..." << endl; //quiere repetir el programa.
				cout << "Desea repetir el programa: " << endl;
				cout << "1.- SI		0.- NO" << endl;
				cin >> repetir;
				break;
		}
	}while(repetir == 1); // verifica la condicion del ciclo while si se cumple la funcion
	cout << "Ha finalizado el programa gracias por usar :)" << endl;
	return 0;
}