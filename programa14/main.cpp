#include <iostream>

using namespace std;
/* ingresar la base y el exponente y determinar
la potencia usando ciclo for
*/
int main()
{ int base,exponente,potencia;
    potencia=1;

    cout << "Ingrese la base..." << endl;
    cin>> base;
    cout <<"ingresar el exponente..."<<endl;
    cin>> exponente;

    for(int i=0;i<exponente;i++)
    {
    potencia=potencia*base;
    }

    cout<<"potencia es"<<potencia<<endl;
    return 0;
}
