#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>
#include <fstream>
#include <stdlib.h>

//Link de github https://github.com/JonathanAGarciaS/GPO091998672JonathanAntonioGarciaSalazar.git


using namespace std;

int* NumAr, registros,r, n = 1;
string* Nombre, * Lanzamiento, * Clasificacion, * Caracteristicas, * Descripcion, * Genero, * Consola;
float* subtotal, * iva, * total;

void Alta();
void Eliminar();
void Lista();
void Modificar();
void Archivo();

int main()
{
	int opcion;
	do
	{
		system("color 0b"),
			printf("\t ***MENU OPCIONES*** \n");
		printf(" 1.-Agragar articulo \n 2.-Modificar articulo \n 3.-Eliminar articulo \n 4.-Lista de articulos \n 5.-Limpiar pantalla \n 6.-Salir\n");
		scanf_s("%d", &opcion);

		switch (opcion)
		{
		case 1: //agragar articulo
			Alta();
			return main();
			break;
		case 2: //Modificar articulo
			Modificar();
			return main();
			break;
		case 3: //Elimiar articulo
			Eliminar();
			return main();
			break;
		case 4: //Lista de articulos
			Lista();
			return main();
			break;
		case 5: //Limpiar pantalla
			system("cls");
			break;
		case 6: //salir
			printf("saliendo... \n");
			system("pause");
			break;
		default:
			system("color 0c");
			printf("ingrese una opcion correcta \n");
			system("pause>null");
			system("cls");
		}
	} while (opcion != 6);
}

void Alta()
{
	system("cls");
	printf("Cuantos registros desea dar de alta \n");
	scanf_s("%d", &registros);
	system("cls");
	NumAr = new int[registros];
	Nombre = new string[registros];
	Lanzamiento = new string[registros];
	Clasificacion = new string[registros];
	Caracteristicas = new string[registros];
	Descripcion = new string[registros];
	Genero = new string[registros];
	Consola = new string[registros];
	subtotal = new float[registros];
	iva = new float[registros];
	total= new float[registros];
	for (int i = 0; i < registros; i++)
	{
		do
		{
			system("color 0b"),
				printf("ingrese el numero de articulo %d\n", i + 1);
			scanf_s("%d", &NumAr[i]);
			if (NumAr[i] == NumAr[i-n] || NumAr[i] == NumAr[i-2])
			{
				system("color 0c");
				printf("Este numero de articulo ya existe ingrese otro\n");
				r = 2;
				system("pause");
				system("cls");
			}
			else
			{
				r = 0;
			}
		} while (r == 2);
		printf("ingresa nombre del juego \n");
		cin.ignore();
		getline(cin, Nombre[i]);
		printf("Ingrese fecha de lanzamiento\n");
		getline(cin,Lanzamiento[i]);
		printf("Ingrese clasificacion del juego\n");
		getline(cin, Clasificacion[i]);
		printf("Ingrese caracteristicas del juego\n");
		getline(cin, Caracteristicas[i]);
		printf("Ingrese descripcion del juego\n");
		getline(cin, Descripcion[i]);
		printf("Ingrese genero del juego\n");
		getline(cin, Genero[i]);
		printf("Ingrese consola del juego\n");
		getline(cin, Consola[i]);
		printf("ingrese el precio unitario \n");
		scanf_s("%f", &subtotal[i]);
		iva[i] = subtotal[i] * .16;
		total[i] = subtotal[i] + iva[i];
		printf("El impuesto del precio unitaio es: %f\n", iva[i]);
		printf("El precio total es: %f\n", total[i]);
		system("pause");
		system("cls");
	}

}

void Eliminar()
{
	int eliminar;
	printf("ingrese el numero de articulo que desea eliminar\n");
	scanf_s("%d", &eliminar);

	for (int i = 0; i < registros; i++)
	{
		if (eliminar == NumAr[i])
		{
			NumAr[i] = 0;
			printf("Eliminado... \n");
		}
	}
	system("Pause");
}

void Modificar()
{
	int modificar;
	do
	{
		printf("Ingrese el num de articulo a modificar \n");
		scanf_s("%d", &modificar);
	} while (modificar <= 0);

	for (int i = 0; i < registros; i++)
	{
		if (modificar == NumAr[i])
		{
			printf("ingresa nombre del juego \n");
			cin.ignore();
			getline(cin, Nombre[i]);
			printf("Ingrese fecha de lanzamiento\n");
			getline(cin, Lanzamiento[i]);
			printf("Ingrese clasificacion del juego\n");
			getline(cin, Clasificacion[i]);
			printf("Ingrese caracteristicas del juego\n");
			getline(cin, Caracteristicas[i]);
			printf("Ingrese descripcion del juego\n");
			getline(cin, Descripcion[i]);
			printf("Ingrese genero del juego\n");
			getline(cin, Genero[i]);
			printf("Ingrese consola del juego\n");
			getline(cin, Consola[i]);
			printf("ingrese el precio unitario \n");
			scanf_s("%f", &subtotal[i]);
			iva[i] = subtotal[i] * .16;
			total[i] = subtotal[i] + iva[i];
			printf("El impuesto del precio unitaio es: %f\n", iva[i]);
			printf("El precio total es: %f\n", total[i]);
			system("pause");
			
		}
	}
}

void Lista()
{
	system("cls");
	int opcion2, busqueda;
	string busqueda2;
	do
	{
		system("color 0b");
		printf("ingrese la opcion deseada de busqueda \n 1.-Por Genero \n 2.-Por clasificacion \n 3.-Por Nummero de articulo \n 4.-Listas Vigentes \n 5.-Salir \n");
		scanf_s("%d", &opcion2);

		switch (opcion2)
		{
		case 1: //Por Genero (Lista)
			printf("ingrese genero del articulo\n");
			cin.ignore();
			getline(cin, busqueda2);
			for (int i = 0; i < registros; i++)
			{
				if (busqueda2 == Genero[i])
				{
					if (NumAr[i] != 0)
					{
						printf("Genero: %s\n", Genero[i].c_str());
						printf("Numero de articulo: %d \n", NumAr[i]);
						printf("Nombre: %s \n", Nombre[i].c_str());
						printf("Fecha de lanzamiento: %s\n", Lanzamiento[i].c_str());
						printf("Clasificacion: %s\n", Clasificacion[i].c_str());
						printf("Caracteristicas: %s\n", Caracteristicas[i].c_str());
						printf("Descripcion: %s\n", Descripcion[i].c_str());
						printf("Consola: %s\n", Consola[i].c_str());
						printf("Precio Unitario: %f \n", subtotal[i]);
						printf("Impuesto: %f \n", iva[i]);
						printf("Total: %f \n\n", total[i]);
					}
				}
			}
			break;
		case 2: //Por Clasificacion (Lista)
			printf("ingrese clasifiacion del articulo\n");
			cin.ignore();
			getline(cin, busqueda2);
			for (int i = 0; i < registros; i++)
			{
				if (busqueda2 == Clasificacion[i])
				{
					if (NumAr[i] != 0)
					{
						printf("Clasificacion: %s\n", Clasificacion[i].c_str());
						printf("Numero de articulo: %d \n", NumAr[i]);
						printf("Nombre: %s \n", Nombre[i].c_str());
						printf("Fecha de lanzamiento: %s\n", Lanzamiento[i].c_str());
						printf("Caracteristicas: %s\n", Caracteristicas[i].c_str());
						printf("Descripcion: %s\n", Descripcion[i].c_str());
						printf("Genero: %s\n", Genero[i].c_str());
						printf("Consola: %s\n", Consola[i].c_str());
						printf("Precio Unitario: %f \n", subtotal[i]);
						printf("Impuesto: %f \n", iva[i]);
						printf("Total: %f \n\n", total[i]);
					}
				}
			}

			break;
		case 3://Por Numeo de articulos (Lista)
			printf("ingrese el numero de articulo\n");
			scanf_s("%d", &busqueda);
			for (int i = 0; i < registros; i++)
			{
				if (busqueda == NumAr[i])
				{
					if (NumAr[i] != 0)
					{
						printf("Numero de articulo: %d \n", NumAr[i]);
						printf("Nombre: %s \n", Nombre[i].c_str());
						printf("Fecha de lanzamiento: %s\n", Lanzamiento[i].c_str());
						printf("Clasificacion: %s\n", Clasificacion[i].c_str());
						printf("Caracteristicas: %s\n", Caracteristicas[i].c_str());
						printf("Descripcion: %s\n", Descripcion[i].c_str());
						printf("Genero: %s\n", Genero[i].c_str());
						printf("Consola: %s\n", Consola[i].c_str());
						printf("Precio Unitario: %f \n", subtotal[i]);
						printf("Impuesto: %f \n", iva[i]);
						printf("Total: %f \n\n", total[i]);
					}
				}
			}

			break;

		case 4: //Listas vigentes (Lista)

			for (int i = 0; i < registros; i++)
			{
				if (NumAr[i] != 0)
				{
					printf("Numero de articulo: %d \n", NumAr[i]);
					printf("Nombre: %s \n", Nombre[i].c_str());
					printf("Fecha de lanzamiento: %s\n", Lanzamiento[i].c_str());
					printf("Clasificacion: %s\n", Clasificacion[i].c_str());
					printf("Caracteristicas: %s\n", Caracteristicas[i].c_str());
					printf("Descripcion: %s\n", Descripcion[i].c_str());
					printf("Genero: %s\n", Genero[i].c_str());
					printf("Consola: %s\n", Consola[i].c_str());
					printf("Precio Unitario: %f \n", subtotal[i]);
					printf("Impuesto: %f \n", iva[i]);
					printf("Total: %f \n\n", total[i]);
				}
			}
			break;

		case 5: //Salir (Lista)
			printf("saiendo... \n");
			system("pause");
			break;

		default:
			system("color 0c");
			printf("la opcion es incorrecta \n");
			system("pause>null");
			system("cls");
			break;
		}
	} while (opcion2 != 5);

}

void Archivo()
{
	ofstream archivos;
	string name;

	name = "PROYECTO FINAL";
	archivos.open(name.c_str(), ios::out);
	if (archivos.fail())
	{
		printf("ERROR NO SE GENERO EL ARCHIVO \n");
		system("pause");
		exit(1);
	}
	archivos << " /t /t INFORMACION \n";
	for (int i = 0; i < registros; i++)
	{
		if (NumAr[i] != 0)
		{
			archivos << "Numero de articulo: " << NumAr[i] << endl;
			archivos << "Anio: " << Lanzamiento[i] << endl;
			archivos << "videojuego: " << Nombre[i] << endl;
			archivos << "clasificacion: " << Clasificacion[i] << endl;
		}
	}
	archivos.close();
}