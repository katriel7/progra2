#include <iostream>

using namespace std;
/* ingresar 3 numeros y determinar cuantos son divisibles entre 3
*/
int main()
{   int numero,cdiv3,suma,prom;
    cdiv3=0;
    for(int i=0;i<5;i++)
    {
    cout << "Ingresar numero entero...!" ;
    cin>> numero;
    if ((numero % 3)==0)
    {
       cdiv3++;
    }
    }
        if (cdiv3>0)
        {prom=suma/cdiv3;
        }
        else
        {prom=0;
        }
    cout<<"contador de divisibles entre 3 es....:"<<cdiv3<<endl;
    cout<<"El promedio de los numeros es....:"<<prom<<endl;

    return 0;
}
