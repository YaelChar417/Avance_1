# Proyecto: VeTec-Veterinaria.

## Datos personales:
Yael Charles Marin.
A01711111

## Novedades avance 3:
- La clase Animal y la clase Servicios ahora son clases padres de 3 clases cada una.

- La clase Trabajador tiene ahora una composicion de datos del trabajador

- Se modifico el UML para hacerlo mas simple debido a que las clases padre heredan sus atributos y metodos a las clases hijas.

- En la clase animal se añadio una funcion de mostrar_datos(), que reduce significativamente la cantidad de codigo del main.

- En el main ahora cuenta con divisiones en las clases Animal y servicios para seleccionar a cual de las clases hijas se desea acceder, por ejemplo puedes seleccionar acceder a la clase Animal y a la subclase Ave o acceder a la clase Servicios y la subclase corte de pelo.

- Ahora en el main de la parte de la clase servicios, no se permite ingresar los valores de tipo de servicio, precio y duracion al usuario debido a que esos valores ya estarían preestablecidos y solo se le permite ingresar cuantas mascotas recibirán un servicio.

## Novedades avance 2:
- Se añadio un UML explicando las futuras actualizaciones.

- Se implementó más interaccion con el usuario, donde le permite ingresar los valores.

- La clase animal recibió una nueva función para buscar por nombre una mascota.

- Se implementó un menú con las opciones en el main de las diferentes clases.

## Descripcion del proyecto:
Para una veterinaria se requiere tener un manejo más controlado de sus servicios, trabajadores y animales.

## Funcionalidad:
1.-Administrar las mascotas que son ingresadas en su clinica, con sus diversos datos para identificarlos.
2.-Tener un registro de sus empleados y conforme a su paga calcular sus sueldos darios y semanales.
3.-Un apartado con los diferentes servicios que ofrecen, así como el precio que tendría y la disponibilidad de este.
Cada uno es separado en una clase: Animal, Trabajador, Servicios, respectivamente. 

## Clases y metodos:
Animal: crecer(int) recibe un valor entero referente a los años que han pasado, y como cambia su tamaño.

Trabajador: sueldo_diario(float, int) recibe el salario de una persona y cuantas horas trabajo en el día.
            sueldo_semanal(float, int) recibe el salario diario de una persona y cauntos dias trabajo en la semana.
            bonos(int) recibe cuantos años ha trabajado una persona en la empresa y le regresa el bono que le corresponde.
            
Servicios: calcula_costo(float, float, int) recibe el precio del servicio, la cantidad esperada de tiempo y la cantidad de perros que van a recibir el servicio, regresa el costo total del servicio y la duracion estimada total.
            disponibilidad(string) recibe el nombre del servicio y regresa si tiene disponibilidad o no en la clinica.


