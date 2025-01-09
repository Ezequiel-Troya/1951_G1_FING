// LIBRERIAS
#include <iostream>
#include <windows.h>
#include <iomanip>
#include "Ubicacion.h"
using namespace std;
/*****************************************************
* 					MENU DEL EMPLEADO                *
******************************************************/
void menu_empleado() {
    system("cls");
    system("color 6");
    int opcion;
    do {
        posicion(7, 5); cout << "\t\t **********************";
        posicion(7, 6); cout << "\t\t ||     Bienvenido   ||";
        posicion(7, 7); cout << "\t\t ||Menu de Opciones: ||";
        posicion(7, 8); cout << "\t\t ||Elija una opcion: ||";
        posicion(7, 9); cout << "\t\t **********************";
        posicion(7, 10); cout << "\t  =============================================================";
        posicion(7, 11); cout << "\t  || 1.VENTAS			                             ||";
        posicion(7, 12); cout << "\t  || 2.MONSTRAR PRODUCTOS			             ||";
        posicion(7, 13); cout << "\t  || 3.MATERIA PRIMA UTILIZADA                               ||";
        posicion(7, 14); cout << "\t  || 4. Salir                                                ||";
        posicion(7, 16); cout << "\t  ============================";
        posicion(7, 17); cout << "\t  ||Ingrese la opcion:      ||";
        posicion(33, 17);
        cout.flush();      
        cin >> opcion;     
        
    } while (opcion != 4);
	system("cls"); 
}
/*****************************************************
* 	   FUNCION DE OPCIONES DEL MENU ADMINISTRADOR    *
******************************************************/
void opcion_admin(int opcion) {
    string password;
    switch (opcion) {
        case 1:
            system("cls");
            
            system("pause");
            break;

        case 2:
            system("cls");
            
            system("pause");
            break;

        case 3:
            system("cls");
            
            system("pause");
            break;

        case 4:
            system("cls");
            
            system("pause");
            break;

        case 5:
            system("cls");
            
            system("pause");
            break;

        case 6:
            system("cls");
            
            system("pause");
            system("cls");
            break;

        default:
            cout << "Opción no válida. Intente de nuevo." << endl;
            break;
    }
}
/*****************************************************
* 				MENU DEL ADMINISTRADOR               *
******************************************************/
void menu_admin() {
    system("cls");
    system("color 6");
    int opcion;
    do {
        posicion(7, 5); cout << "\t\t **********************";
        posicion(7, 6); cout << "\t\t ||     Bienvenido   ||";
        posicion(7, 7); cout << "\t\t ||Menu de Opciones: ||";
        posicion(7, 8); cout << "\t\t ||Elija una opcion: ||";
        posicion(7, 9); cout << "\t\t **********************";
        posicion(7, 10); cout << "\t  =============================================================";
        posicion(7, 11); cout << "\t  || 1. Ingresar un nuevo producto                           ||";
        posicion(7, 12); cout << "\t  || 2. Eliminar producto                                    ||";
        posicion(7, 13); cout << "\t  || 3. Modificar stock                                      ||";
        posicion(7, 14); cout << "\t  || 4. Salir                                                ||";
        posicion(7, 16); cout << "\t  ============================";
        posicion(7, 17); cout << "\t  ||Ingrese la opcion:      ||";
        posicion(33, 17);
        cout.flush();      
        cin >> opcion;     
        opcion_admin(opcion); 
    } while (opcion != 4); 
}
/*****************************************************
* 	 	FUNCION DE OPCIONES DEL MENU PRINCIPAL       *
******************************************************/
void opcion_principal(int opcion) {
    string password;
    switch (opcion) {
        case 1:
            system("cls");
            do {
                cout << "Ingrese la contrasenia de administrador: ";
                cin >> password;
                if (password != "joker2019") {
                    cout << "Contrasenia incorrecta. Intentalo de nuevo." << endl;
                }
            } while (password != "joker2019");
            system("cls");
            cout << "Bienvenido, administrador. Por favor, presione una tecla." << endl;
            system("pause");
            menu_admin();
            break;

        case 2:
            system("cls");
            do {
                cout << "Ingrese el usuario ";
                cin >> password;
                if (password != "Empleado") {
                    cout << "usuario incorrecto. Intentalo de nuevo." << endl;
                }
            } while (password != "Empleado");
            do {
                cout << "Ingrese la contrasenia de administrador: ";
                cin >> password;
                if (password != "12345") {
                    cout << "Contrasenia incorrecta. Intentalo de nuevo." << endl;
                }
            } while (password != "12345");
            system("cls");
            cout << "Bienvenido, administrador. Por favor, presione una tecla." << endl;
            system("pause");
            menu_empleado();
            break;

        case 3:
            system("cls");
            cout << "Saliendo del programa..." << endl;
            break;

        default:
            cout << "Opcion no valida. Intente de nuevo." << endl;
            break;
    }
}
/*****************************************************
* MENU DEL PROGRAMA PRINCIPAL                       *
******************************************************/
void menu_principal() {
    system("cls");
    system("color 6");
    int opcion;
    do {
        posicion(7, 5);
        cout << "\t\t **********************";
        posicion(7, 6);
        cout << "\t\t ||     Bienvenido   ||";
        posicion(7, 7);
        cout << "\t\t ||Menu de Opciones: ||";
        posicion(7, 8);
        cout << "\t\t ||Elija una opcion: ||";
        posicion(7, 9);
        cout << "\t\t **********************";
        posicion(7, 10);
        cout << "\t  =============================================================";
        posicion(7, 11);
        cout << "\t  || 1. Ingresar como administrador		             ||";
        posicion(7, 12);
        cout << "\t  || 2. Ingresar como cliente                                ||";
        posicion(7, 13);
        cout << "\t  || 3. Salir del programa                                   ||";
        posicion(10, 17);
        cout << "\t  ============================";
        posicion(10, 18);
        cout << "\t  ||Ingrese la opcion:      ||";
        posicion(40, 18); 
		// Asegura que todo se muestre correctamente 
        cout.flush();      
        cin >> opcion;     
        opcion_principal(opcion);
    } while (opcion != 3);
}
