#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
struct empleados
{ char nombre[30];
  int ventas,comics;

};
const int tam=5;
empleados emple[tam];
empleados emplemax;
empleados mayorempleado(empleados emple[])
{
    empleados auxmayor;
    auxmayor.comics=0;
    for (int i=0;i<tam;i++)
    {
        if (auxmayor.comics<emple[i].comics)
            auxmayor=emple[i];

    }
    return auxmayor;
}

empleados  emple[tam];

void ingreso(empleados emple[])
{
    for (int i=0;i<tam;i++)
    {
        cout<<"ingrese el nombre del empleado...";
        cin.getline (emple[i].nombre,30);
        cout<<"ventas del empleado.....:";
        cin>>emple[i].ventas;
        _flushall();
    }
}
void calcular(empleados emple[])
{
    for (int i=0;i<tam;i++)
    {
        emple[i].comics= emple[i].ventas*0.05;
    }
}

void presentar (empleados emple[])
{
    for (int i=0;i<tam;i++)
    {
        cout<<"El empleado"<<emple[i].nombre<<"Gano"<<emple[i].comics<<"de comision"<<"\n";
    }
}
int main()

{
     ingreso(emple);
    calcular(emple);
    presentar(emple);
    emplemax=mayorempleado(emple);
    cout<<"Empleado que tiene la mayor venta de comision es"<<emplemax.nombre<<"Con la comision"<<emplemax.comics;
    return 0;
}
