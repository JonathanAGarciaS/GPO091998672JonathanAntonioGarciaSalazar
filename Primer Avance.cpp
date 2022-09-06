// Primer Avance.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

//Link de github https://github.com/JonathanAGarciaS/GPO091998672JonathanAntonioGarciaSalazar.git


using namespace std;

int main()
{
    int NumArticulo, OPC;
    float PrecioUnitario, Impuesto, Total;
    string Articulo, Nombre, Lanzamiento, Clasificacion, Caracteristicas, Descripcion, Genero, Consola;
    cout << " \t ***MENU DE OPCIONES*** \n";
    cout << " 1.-Agregar articulo \n 2.-Modificar articulo \n 3.-Eliminar articulo \n 4.-Lista de articulos \n 5.-Limpiar pantalla \n 6.-Salir \n";
    cin >> OPC;
    switch (OPC)
    {
    case 1: //Agregar articulo
        cout << "Ingrese el numero de articulo \n";
        cin >> NumArticulo;
        cout << "Ingrese el nombre del Juego \n";
        cin.ignore();
        getline(cin, Nombre);
        cout << "Ingrese fecha de lanzamiento \n";
        cin.ignore();
        getline(cin, Lanzamiento);
        cout << "Ingrese clasificacion del juego \n";
        cin.ignore();
        getline(cin, Clasificacion);
        cout << "Ingrese caracteristicas del juego \n";
        cin.ignore();
        getline(cin, Caracteristicas);
        cout << "Ingrese descripcion del juego \n";
        cin.ignore();
        getline(cin, Descripcion);
        cout << "Ingrese genero del juego \n";
        cin.ignore();
        getline(cin, Genero);
        cout << "Ingrese consola del juego \n";
        cin.ignore();
        getline(cin, Consola);
        cout << "Ingrese el precio unitario del articulo \n";
        cin >> PrecioUnitario;
        Impuesto = PrecioUnitario * 0.16;
        Total = PrecioUnitario + Impuesto;
        cout << "El impuesto del precio unitario es:" << Impuesto << endl;
        cout << "El precio total es:" << Total << endl;
        system("pause");
        return main();
        break;
    case 2: //Modificar articulo
        system("pause");
        return main();
        break;
    case 3: //Eliminar artiuclo
        system("pause");
        return main();
        break;
    case 4: //Lista de articulos
        system("pause");
        return main();
        break;
    case 5: //Limpiar pantalla
        system("cls");
        system("pause");
        return main();
        break;
    case 6: //Salir
        break;
    default:
        cout << "ingrese una opcion correcta \n";
        return main();
    }


}