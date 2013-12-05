#include <iostream>

using namespace std;
/*ingresar el nombre del empleado, las horas y el turno usando un procedimiento.
luego determinar el pxh usando el turno, el pago de horas, ihss y total a pagar usando un procedimiento.
presentar los datos usando un procedimiento.
turno    pxh
1        100
2        150
3        180

*/
char nombre [30]; int turno,horas,pb,ihss,tp,pxh;

void ingreso (char nombre[],int &turno, int &horas)
{
   cout<<"ingresar el nombre del....:";
   cin.getline(nombre,30);
   cin>>horas;

   do
      {
        cout<<"ingresar el turno 1,2,3....:";
        cin>>turno;

      }while ((turno<1)  or (turno>3));
}

void calcular (int turno, int horas, int &pxh, int &pb, int &ihss, int tp)
{
    switch (turno)
    {
    case 1:
        pxh=100;
        break;
    case 2:
        pxh=150;
        break;
    default:
        pxh=180;
        break;
    }

    pb= pxh * horas;

    if(pb>7000)
    {
         ihss=245;
    }
    else
    {
         ihss=0.035*pb;
    }

    tp=pb-ihss;
}

void presentar (int pxh, int pb, int ihss, int tp)
{
         cout<<"pago por hora   "<<pxh<< endl;
         cout<<"pago bruto   "<<pb<< endl;
         cout<<"Seguro social   "<<ihss<< endl;
         cout<<"Total a pagar   "<<tp<< endl;
}
int main()
{ for(int i=0;i<3;i++)
    {
    ingreso(nombre,turno,horas);
    calcular(turno,horas,pxh,pb,ihss,tp);
    presentar(pxh,pb,ihss,tp);
    }
    return 0;
}
