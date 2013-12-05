#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{  int numero,cdiv2,suma,numMayor,prom,temp,resp;
   cdiv2=0;
   suma=0;
   do
    {
    cout << "Ingresar un numero par comprendido entre 1 - 200 ...!";
    cin>>numero;

    while (numero % 2==0)

    if ((numero!=0) and (numero<200))
    {
	    temp = numero % 10;
        suma = suma + temp;
        numero = numero / 10;
        cdiv2++;
    }
    if (numero>numMayor)
    {
        numMayor=numero;
    }

    do
		{
			cout<< "Desea seguir? s/n: ";
			cin>>menu;

		}while ((resp!='N') and (resp!='S'));

        }while (resp!='N');
        }
    cout<<"la suma de los numeros es..."<<suma;
    return 0;
}
