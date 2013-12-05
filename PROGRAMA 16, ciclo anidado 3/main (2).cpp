#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
*/
using namespace std;

int main()
{   char nombre [30];
    char resp;
    int nota,promedio,notamax,alumnomax,suma;
    char nombreMayor[30];
    int notamayor;

    do
    {
    cout << "Nombre del alumno....." ;
    cin.getline(nombre, 30);
    suma=0;notamax=0;
    for (int i=1; i<=3; i++)
     {
         cout<<"ingresar el parcial...."<<i<<"....";
         cin>>nota;
         suma+=nota;
         if (nota>=notamax)
         {
             notamax+=nota;
         }
     }

      promedio=suma/3;
      cout<<"Promedio del alumnno...:"<<promedio<<endl;
      cout<<"Nota mayor es......"<<notamax<<endl;
      _flushall();
      do
      {
         cout<<"Desea continuar........:";
         cin.get(resp);
      }  while((resp!='N') and (resp!='S'));
         _flushall();
      }while (resp!='N');
    return 0;
}
