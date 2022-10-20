#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <stdio.h>

//Link de github https://github.com/JonathanAGarciaS/GPO091998672JonathanAntonioGarciaSalazar.git


using namespace std;

struct empresa
{

	int NumAr;
	string Nombre, Lanzamiento, Clasificacion, Caracteristicas, Descripcion, Genero, Consola;
	float subtotal, iva, total;
};


int main()
{
	empresa compras[3];
	int opcion, busqueda, opcion2;

	do
	{
		system("color 0b"),
		printf("\t ***MENU OPCIONES*** \n");
		printf(" 1.-Agragar articulo \n 2.-Modificar articulo \n 3.-Eliminar articulo \n 4.-Lista de articulos \n 5.-Limpiar pantalla \n 6.-Salir\n");
		scanf_s("%d", &opcion);

		switch (opcion)
		{
		case 1://agragar articulo
			system("cls");
			for (int i = 0; i < 3; i++)
			{
				int num = 1;
				printf("ingrese el numero de articulo %d\n",i+1);
				scanf_s("%d", &compras[i].NumAr);
				for (int j = 0; j <= num; j++)
				{
					if (compras[i].NumAr == compras[i - num].NumAr || compras[i].NumAr == compras[i - (num - 1)].NumAr)
					{
						system("cls");
						system("color 0c");
						printf("El numero de articulo ya fue ingresado anteriormente\n Ingrese otro numero para el articulo %d\n", i+1);
						scanf_s("%d", &compras[i].NumAr);
						system("color 0b");
						if (num <= 3)
						{
							num = num + 1;
						}
					}
					else
					{
						num = 0;

					}

				}
				printf("ingresa nombre del juego \n");
				cin.ignore();
				getline(cin, compras[i].Nombre);
				printf("Ingrese fecha de lanzamiento\n");
				cin.ignore();
				getline(cin, compras[i].Lanzamiento);
				printf("Ingrese clasificacion del juego\n");
				cin.ignore();
				getline(cin, compras[i].Clasificacion);
				printf("Ingrese caracteristicas del juego\n");
				cin.ignore();
				getline(cin, compras[i].Caracteristicas);
				printf("Ingrese descripcion del juego\n");
				cin.ignore();
				getline(cin, compras[i].Descripcion);
				printf("Ingrese genero del juego\n");
				cin.ignore();
				getline(cin, compras[i].Genero);
				printf("Ingrese consola del juego\n");
				cin.ignore();
				getline(cin, compras[i].Consola);
				printf("ingrese el precio unitario \n");
				scanf_s("%f", &compras[i].subtotal);
				compras[i].iva = compras[i].subtotal * .16;
				compras[i].total = compras[i].subtotal + compras[i].iva;
				printf("El impusto del precio unitaio es: %f\n", compras[i].iva);
				printf("El precio total es: %f\n", compras[i].total);
				system("pause");
				system("cls");
			}

			break;

		case 2: //Modificar articulo
			system("pause");
			
			break;

		case 3: //Elimiar articulo

			printf("ingrese el numero de articulo que desea eliminar\n");
			scanf_s("%d", &busqueda);

			for (int i = 0; i < 3; i++)
			{
				if (busqueda == compras[i].NumAr)
				{
					compras[i].NumAr = 0;
					printf("Eliminado... \n");
				}
			}
			system("Pause");
			break;

		case 4://Lista de articulos
			do
			{
				printf("ingrese la opcion deseada de busqueda \n 1.-Por Nummero de articulo \n 2.-Listas Vigentes \n 3.-Salir \n");
				scanf_s("%d", &opcion2);

				switch (opcion2)
				{
				case 1://Por Numeo de articulos (Lista)
					printf("ingrese el numero de articulo\n");
					scanf_s("%d", &busqueda);
					for (int i = 0; i < 3; i++)
					{
						if (busqueda == compras[i].NumAr)
						{
							printf("Numero de articulo: %d \n", compras[i].NumAr);
							printf("Nombre: %s \n", compras[i].Nombre.c_str());
							printf("Fecha de lanzamiento: %s\n", compras[i].Lanzamiento.c_str( ));
							printf("Clasificacion: %s\n", compras[i].Clasificacion.c_str( ));
							printf("Caracteristicas: %s\n", compras[i].Caracteristicas.c_str());
							printf("Descripcion: %s\n", compras[i].Descripcion.c_str());
							printf("Genero: %s\n", compras[i].Genero.c_str());
							printf("Consola: %s\n", compras[i].Consola.c_str());
							printf("Precio Unitario: %f \n", compras[i].subtotal);
							printf("Impuesto: %f \n", compras[i].iva);
							printf("Total: %f \n\n", compras[i].total);
						}
					}

					break;

				case 2: //Listas vigentes (Lista)

					for (int i = 0; i < 3; i++)
					{
						if (compras[i].NumAr != 0)
						{
							printf("Numero de articulo: %d \n", compras[i].NumAr);
							printf("Nombre: %s \n", compras[i].Nombre.c_str());
							printf("Fecha de lanzamiento: %s\n", compras[i].Lanzamiento.c_str());
							printf("Clasificacion: %s\n", compras[i].Clasificacion.c_str());
							printf("Caracteristicas: %s\n", compras[i].Caracteristicas.c_str());
							printf("Descripcion: %s\n", compras[i].Descripcion.c_str());
							printf("Genero: %s\n", compras[i].Genero.c_str());
							printf("Consola: %s\n", compras[i].Consola.c_str());
							printf("Precio Unitario: %f \n", compras[i].subtotal);
							printf("Impuesto: %f \n", compras[i].iva);
							printf("Total: %f \n\n", compras[i].total);
						}
					}
					break;

				case 3: //Salir (Lista)
					printf("saiendo \n");
					break;

				default:
					printf("la opcion es incorrecta \n");
					break;
				}
			} while (opcion2 != 3);
			break;

		case 5://Limpiar pantalla
			system("cls");
			break;
		case 6://salir
			printf("saliendo... \n");
			break;
		default:
			system("color 0c");
			printf("ingrese una opcion correcta \n");
			system("pause>null");
		}
	} while (opcion != 6);
	system("pause");
}