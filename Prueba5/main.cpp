#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
struct empleados
{ char nombre[30];

   double turno,pc,ventas,comision,ihss,tp;
};
const int tam=2;

empleados  emple[tam];
empleados  ventas;
empleados  turnos;

void ingreso(empleados emple[])
{
    for (int i=0;i<tam;i++)
    {
        cout<<"ingrese el nombre del empleado...";
        cin.getline (emple[i].nombre,30);
        cout<<"ventas del empleado.....:";
        cin>>emple[i].ventas;
        cout<<"Ingrese turno 1,2,3.....:";
        cin>>emple[i].turno;
        _flushall();
    }
}
double porcomision(double turno)
{
    if (turno==1)
        {return 0.03;

        }
    else if (turno==2)
    {
        return 0.05;
    }
        else
        {
            return 0.06;
        }

}

double seguroSocial(double ventas)
{
    if (ventas>7000)
    {
    return 245;
    }


    else
    {
    return 0.035 * ventas;
    }

}

void calcular (empleados &emplex)
{
    emplex.pc=porcomision(emplex.turno);
    emplex.comision= emplex.pc * emplex.ventas;
    emplex.ihss= seguroSocial(emplex.ventas);
    emplex.tp= emplex.comision -  emplex.ihss;

}


void presentar(empleados emplex)
{   cout<<"\n";
    cout<<"Nombre del empleado = "<<emplex.nombre <<"\n";
    cout<<"El turno del empleado es el "<<emplex.turno <<"\n";
    cout<<"Porcentaje de Comision ganada = "<< emplex.pc<<"\n";
    cout<<"Comision ganada = "<<  emplex.comision<<"\n";
    cout<<"Ihss  =  "<<emplex.ihss  <<"\n";
    cout<<"Total a pagar = "<<emplex.tp <<"\n";
}

int main()
{
    ingreso(emplex);
    calcular(emplex);
    presentar(emplex);
return 0;
}
