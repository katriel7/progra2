#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
char p1,p2,p3,p4,p5,p6,p7,p8,p9;
char marca;
int Posicion;
int Contador;


void Presentar(char p1,char p2,char p3, char p4,char p5,char p6,char p7,char p8,char p9)
{
    cout<<p1<<" "<<p2<<" "<<p3<<"\n";

    cout<<p4<<" "<<p5<<" "<<p6<<"\n";

    cout<<p7<<" "<<p8<<" "<<p9<<"\n";
}


int Combinacion (char p1,char p2,char p3, char p4,char p5,char p6,char p7,char p8,char p9)
{
	if ((p1=='x') and (p2=='x') and (p3=='x'))
		return 1;
	else if ((p4=='x') and (p5=='x') and (p6=='x'))
        return 1;
	else if ((p7=='x') and (p8=='x') and (p9=='x'))
		return 1;
	else if ((p1=='x') and (p4=='x') and (p7=='x'))
		return 1;
	else if ((p2=='x') and (p5=='x') and (p8=='x'))
		return 1;
	else if ((p3=='x') and (p6=='x') and (p9=='x'))
		return 1;
    else if ((p1=='x') and (p5=='x') and (p9=='x'))
		return 1;
	else if ((p3=='x') and (p5=='x') and (p7=='x'))
		return 1;
    else if ((p1=='0') and (p2=='0') and (p3=='0'))
		return 2;
	else if ((p4=='0') and (p5=='0') and (p6=='0'))
		return 2;
	else if ((p7=='0') and (p8=='0') and (p9=='0'))
		return 2;
	else if ((p1=='0') and (p4=='0') and (p7=='0'))
		return 2;
	else if ((p2=='0') and (p5=='0') and (p8=='0'))
		return 2;
	else if ((p3=='0') and (p6=='0') and (p9=='0'))
		return 2;
    else if ((p1=='0') and (p5=='0') and (p9=='0'))
		return 2;
	else if ((p3=='0') and (p5=='0') and (p7=='0'))
		return 2;
    else if (Contador==9)
        return 3;
    else
        return -1;
}

int main()
{
int i;
Contador=0;
do
{
        cout<<" Ingrese un numero de la posicion 1-9.......:";
        cin>>Posicion;
        _flushall();
        cout<<" Ingresar X o 0..:";
switch (Posicion)
         {
    case 1:
        if ((p1=='x') or (p1=='0'))
            cout<<"Posicion llena";
        else
            cin.get(p1);
        break;
    case 2:
        if ((p2=='x') or (p2=='0'))
            cout<<"Posicion llena";
        else
            cin.get(p2);
        break;
    case 3:
        if ((p3=='x') or (p3=='0'))
            cout<<"Posicion llena";
        else
            cin.get(p3);
        break;
    case 4:
        if ((p4=='x') or (p4=='0'))
            cout<<"ya esta llena";
        else
            cin.get(p4);
        break;
    case 5:
        if ((p5=='x') or (p5=='0'))
            cout<<"Posicion llena";
        else
            cin.get(p5);
        break;
    case 6:
        if ((p6=='x') or (p6=='0'))
            cout<<"Posicion llena";
        else
            cin.get(p6);
        break;
    case 7:
        if ((p7=='x') or (p7=='0'))
            cout<<"Posicion ocupada";
        else
            cin.get(p7);
        break;
    case 8:
        if ((p8=='x') or (p8=='0'))
            cout<<"Posicion cupada";
        else
            cin.get(p8);
        break;
    case 9:
        if ((p9=='x') or (p9=='0'))
            cout<<"Posicion ocupada";
        else
            cin.get(p9);
        break;
         }
        _flushall();
    cout<<"\n";
    Contador++;
    Presentar(p1,p2,p3,p4,p5,p6,p7,p8,p9);
    i =Combinacion(p1,p2,p3,p4,p5,p6,p7,p8,p9);

} while (i<=0);

        if(i==1)
            cout<<"Gano el jugador X";
        else if (i==2)
            cout<<"Gano el juegado 0";
        else if (i==3)
            cout<<"Ninguno gano";
    return 0;
}

