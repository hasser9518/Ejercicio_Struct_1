//
//  main.cpp
//  Ejercicio_Struct_1
//
//  Created by Hasser Ismael Perez Rizo on 6/29/19.
//  Copyright © 2019 Hasser Ismael Perez Rizo. All rights reserved.
//

#include <iostream>
#include "Empleado.h"

using namespace std;


int main()
{
    Empleado E[2];
    
    
    /**
     Ingresamos los datos del primer empleado con E/S de C
     */
    printf("Ingrese el nombre del primero empleado:\n");
    scanf("%s", E[0].nombre);
    printf("Ingrese el apellido del primer empleado:\n");
    scanf("%s", E[0].apellido);
    printf("Ingrese la edad del primer empleado:\n");
    scanf("%f", &E[0].edad);
    printf("Ingrese el sexo del primer empleado:\n");
    scanf("%s", E[0].sexo);
    printf("Ingrese el salario del primer empleado:\n");
    scanf("%f", &E[0].salario);
    printf("Ingrese que titulo universitario posee:\n");
    scanf("%s", E[0].titulo_u);
    printf("\n");
    
    
    printf("Ahora vamos con los datos del segundo empleado ");
    printf("\n");
    
    
    /**
     Ingresamos los datos del segundo empleado con E/S de C++
     */
    cout << "Ingrese el nombre del segundo empleado: " << endl;
    cin >> E[1].nombre;
    cout << "Ingrese el apellido del segundo empleado: " << endl;
    cin >> E[1].apellido;
    cout << "Ingrese la edad del segundo empleado: " << endl;
    cin >> E[1].edad;
    cout << "Ingrese el sexo del segundo empleado: " << endl;
    cin >> E[1].sexo;
    cout << "Ingrese el salario del segundo empleado: " << endl;
    cin >> E[1].salario;
    cout << "Ingrese que titulo universitario posee: " << endl;
    cin >> E[1].titulo_u;
    
    
    /**
     Comparaciones con el operador ternario
     */
    
    cout << endl;
    cout << "El empleado con el mejor salario es: ";
        ((E[0].salario < E[1].salario) ?printf("%s %s\n", E[1].nombre, E[1].apellido) :printf("%s %s", E[0].nombre, E[1].apellido));
    cout << "El empleado mas joven es: ";
        ((E[0].edad < E[1].edad) ?printf("%s %s\n", E[0].nombre, E[0].apellido) :printf("%s %s", E[1].nombre, E[1].apellido));
    cout << "El empleado con el nombre mas largo es: ";
        ((strlen(E[0].nombre) < strlen(E[1].nombre)) ?printf("%s %s\n", E[1].nombre, E[1].apellido) :printf("%s %s", E[0].nombre, E[0].apellido));
    
    
    return 0;
}
