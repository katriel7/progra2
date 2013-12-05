#include <iostream>
/* usando una funcion debera de obtener la suma de los numeros divisibles entre 5
crear una funcion para determinar el promedio de los numeros pares para crear un procedimiento
par amodificiar el arreglo y colocar 0 a todos los numeros que son pares
crear un procedimiento para presentar el arreglo*/

const int tam=4;
int arreglo[4];
int sumaA,promedioP;

void ingreso(int arreglo[])
{
    for (int i=0;i<=tam;i++)
    {
        do
        {
            cout<<"ingresar un numero...:";
            cin>>arreglo[i];
        }while(!((arreglo[i]>=50) and (arreglo[i]<=100)));

    }

}
int numerosdivisibles5(int arreglo[])
{
    int suma=0;
    for(int i=0;i<=tam;i++)
    {
        if (arreglo[i]%5==0)
            suma +=arreglo[i];
    }
    return suma;
}

int promedioarreglo(int arreglo[i])
{
    int suma=0;

    for(int i=0;i<=tam;i++)
    {
        suma+=num[i];

    }
    return suma/tam;
}
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
