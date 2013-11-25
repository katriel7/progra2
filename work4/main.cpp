#include <iostream>

using namespace std;

int main()
{ int numeroS,numero,resultado;

    cout << "Ingresa el numero secreto...">
    cin>> numeroS;

    cout<< "Adiva el numero entre 1 y 1000...">
    cin>> numero;

    if (numeroS==numero)
    {
      cout<<"Felicidades has adivinado"<"/n" ;
    }
    else if (numero!=numeroS)
    {
      cout<<"Lo siento el numero es mayor que 1000, vuelve a intentarlo"<"/n" ;
    }
    else if (numeroS=numero)
    {
      cout<<"Lo siento has fallado, vuelve a intentarlo"<"/n" ;
    }
    return 0;
}
