#include <iostream>

using namespace std;

int main()
{ char nombre [30];
  int turno,horas,pxh;
  double ihss,tp,pb;

    cout << "Ingrese el nombre...">
    cin.getline (nombre,30);

    cout<<"Ingrese el turno 1,2,3..">
    cin>>turno;

    cout<<"ingrese el numero de horas...">
    cin>> horas;

    if (turno==1)
    {
        pxh=100;
    }
    else if (turno==2)
    {
        pxh=150;
    }
    else if (turno==3)
    {
        pxh=190;
    }
    else
    {
        pxh=0;
    }
    pb=pxh*horas;

    if (pb>7000)
    {
        ihss=245;
    }
    else
    {
        ihss=0.35*pb;
    }
    tp=pb-ihss;

    cout<<"Pago por hora"<<pxh<<"\n";
    cout<<"Pago bruto"<<pb<<"\n";
    cout<<"Seguro social"<<ihss<<"\n";
    cout<<"Total a pagar"<<tp<<"\n";

    return 0;
}
