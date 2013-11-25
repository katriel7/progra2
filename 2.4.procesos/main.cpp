#include <iostream>
#include <stdlib.h>
using namespace std;
/* ingresar el nombre,turno  y las horas, usando un procedimiento luego, determinar las horas normales
usando una funcion, lo mismo con las horas extras las primeras 40 son normales y las demas son extras

luego determinar el pago por hora normal y extra usando un procedimiento
turno    pago normal   pago extra
1           100           120
2           130           150
3           140           160
elaborar una funcion para el ihss usando un procedimiento realizar los calculos y en otro
procedimiento presentar los datos.
*/
char nombre[30];
int turno,horas,hn,he;
double pxn,pxe,pn,pe,pb,ihss,tp;
void ingresar(char nombre[],int &horas,int &turno)
{
    cout << "Ingresar el nombre del empleado...";
    cin>>getline(nombre,30);
    cout<<"Horas....:";
    cin>>horas;
    do
{
    cout << "ingresar turno 1,2,3";
    cin>>turno;
} while ((turno<1)||(turno>3))
_flushall(;)
}
int horasN(int horas)
{
    if horasN(int horas)
    {
        return 40;
    }
    else
    {
        return horas;
    }
}
int horasE(int horas)
{
    if horasE(horas>40)
    {
        return 40;
    }
    else
    {
        return horas;
    }
}
    return 0;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
