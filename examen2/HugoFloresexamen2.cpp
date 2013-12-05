#include <iostream>
int numero;
void ingreso(int &numero)
{
    do
    {
        cout<<"Ingresar 5 numeros..>";
        cin>>numero;
    }
    while (!(((numero % 2)==0) or ((numero % 5 )==0)));

}

const int tam=5;
int arreglo[5];
int sumaA,numMayor;

void ingreso(int arreglo[])
{
    for (int i=0;i<=tam;i++)
    {
       do
       {
            cout<<"Ingresar numero...:";
            cin>>arreglo[i];

       }while(!(arreglo[i]>100));

    }
}
int numerosvidisibles5(int arreglo[])
{
    int suma=0;
    for (int i=0;i<=tam;i++)
    {
        if (arreglo[i] % 5==0)
            suma += arreglo[i];
    }
    return suma;
}


using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
