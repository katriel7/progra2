#include <iostream>

using namespace std;
const int tam=4;
int num[tam];
int mayor,menor,promedio;

void ingreso (int num[])
{
    for (int i=0;i<=tam;i++)
    {
        cout<<"ingresar un numero["<<i<<"]...:";
        cin>>num[i];

    }
}
int promedioArreglo(int num[])
{
    int suma=0;

    for(int i=0;i<=tam;i++)
    {
        suma+=num[i];

    }
    return suma/tam;
}
int mayorArreglo(int num[])
{ int maxi=num[0];
    for (int i=0;i<=tam;i++)
    {
        if (num[i]>maxi)
        {
            maxi=num[i];
        }
    }
    return maxi;
}
int menorArreglo(int num[])
{ int menorx=num[0];
    for (int i=0;i<=tam;i++)
    {
        if (num[i]<menorx)
        {
            menorx=num[i];
        }
    }
    return menorx;
}
int pares(int num[])
{int cpar=0;
for(int i=0;i<=tam;i++)
{
    if (num[i]%2==0)
    {
        cpar++
    }
    return cpar;
}
}
int main()
{
    ingreso(num);
    promedio=promedioArreglo(num);
    mayor=mayorArreglo(num);
    menor=menorArreglo(num);
    cout << "Promedio" <<promedio<< endl;
    cout << "Numero mayor" <<mayor<< endl;
    cout << "Numero menor" <<menor<< endl;
    return 0;
}
