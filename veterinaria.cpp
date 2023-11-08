#include <iostream>
#include <string>
using namespace std;
#include "Animal.h"
#include "Trabajador.h"
#include "servicios.h"

int main(){
	
	//CLASE ANIMAL
	Animal mascota_1;
	
	mascota_1.set_nombre("skyper");
	mascota_1.set_raza("mestizo");
	mascota_1.set_color("negro");
	mascota_1.set_altura(0.8);
	mascota_1.set_largo(1.2);
	mascota_1.set_peso(6.2);
	mascota_1.set_edad(2);
	
	cout <<"Nombre: " << mascota_1.get_nombre() << endl;
	cout <<"Raza: " << mascota_1.get_raza() << endl;
	cout <<"Color: " << mascota_1.get_color() << endl;
	cout <<"Altura: " << mascota_1.get_altura() << endl;
	cout <<"Largo: " << mascota_1.get_largo() << endl;
	cout <<"Peso: " << mascota_1.get_peso() << endl;
	cout <<"Edad: " << mascota_1.get_edad() << endl;
	cout <<endl;
	
	mascota_1.crecer(3);
	cout << "Su mascota crecio " << 3 << " years" << endl;
	cout <<"Altura: " << mascota_1.get_altura() << endl;
	cout <<"Largo: " << mascota_1.get_largo() << endl;
	cout <<"Peso: " << mascota_1.get_peso() << endl;
	cout <<"Edad: " << mascota_1.get_edad() << endl;
	cout << endl;
	
	//CLASE TRABAJADOR
	float paga_diaria, paga_semanal;
	int bono;
	
	Trabajador empleado_1;
	empleado_1.set_nombre("Felix");
	empleado_1.set_pago_hora(24.5);
	empleado_1.set_horas(9);
	empleado_1.set_dias(6);
	
	cout << "Nombre: " << empleado_1.get_nombre() << endl;
	cout << "Paga por hora: " << empleado_1.get_pago_hora() << endl;
	cout << "Horas trabajadas: " << empleado_1.get_horas() << endl;
	cout << "Dias trabajados: " << empleado_1.get_dias() << endl;
	cout << endl;
	
	paga_diaria = empleado_1.sueldo_diario(empleado_1.get_pago_hora(), empleado_1.get_horas());
	paga_semanal = empleado_1.sueldo_semanal(paga_diaria, empleado_1.get_dias());
	bono = empleado_1.bonos(12);
	cout << "Sueldo diario: " << paga_diaria << endl;
	cout << "Sueldo semanal: " << paga_semanal << endl;
	cout << "Bono por years trabajados: " << bono << endl;
	cout << endl;
	
	//CLASE SERVICIOS
	Servicios servicio_1;
	servicio_1.set_tipo_servicio("vacunacion");
	servicio_1.set_precio(345.5);
	servicio_1.set_duracion(1.5);
	servicio_1.set_cantidad_animales(3);
	
	cout << "Tipo de servicio: " << servicio_1.get_tipo_servicio()	<< endl;
	cout << "Precio: " << servicio_1.get_precio() << endl;
	cout << "Duracion (horas): " << servicio_1.get_duracion() << endl;
	cout << "Cantidad de animales: " << servicio_1.get_cantidad_animales() << endl;
	cout << endl;
	
	servicio_1.calcula_costo(400.9, 0.1, 4);
	cout << "Duracion estimada: " << servicio_1.get_duracion() << endl;
	cout << "Precio total: " << servicio_1.get_precio() << endl;
	servicio_1.disponibilidad("vacunacion");
	
	return 0;
}