// Proyecto 1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;

int main()
{
    int NumArticulo, OPC;
    float PrecioUnitario;
    string Articulo, Descripcion, Categoria;
    cout << " \t ***PAPELERIA PESADO*** \n";
    cout << " 1.-Agregar articulo \n 2.-Modificar articulo \n 3.-Eliminar articulo \n 4.- Lista de articulos \n 5.-Limpiar pantalla \n 6.Salir \n";
    cin >> OPC;
    switch (OPC)
    {
    case 1: //Agregar articulo
        cout << "Ingrese el numero de articulo \n";
        cin >> NumArticulo;
        cout << "Ingrese el nombre del articulo \n";
        cin.ignore();
        getline(cin, Articulo);
        cout << "Ingrese la descripcion del articulo \n";
        cin.ignore();
        getline(cin, Descripcion);
        cout << "Ingrese la categoria del articulo \n";
        cin.ignore();
        getline(cin, Categoria);
        cout << "Ingrese el precio unitario del articulo \n";
        cin >> PrecioUnitario;
        return main();
        break;
    case 2: //Modificar articulo
        return main();
        break;
    case 3: //Eliminar artiuclo
        return main();
        break;
    case 4: //Lista de articulos
        return main();
        break;
    case 5: //Limpiar pantalla
        system("cls");
        return main();
        break;
    case 6: //Salir
        break;
    default:
        cout << "ingrese una opcion correcta \n";
        return main();
    }


}