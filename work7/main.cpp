#include <iostream>

using namespace std;

int main()
{ int num1,num2;

    cout << "Ingrese el primer numero  "<"/n";
    cin >> num1;

    cout << "Ingrese el segundo numero  "<"/n";
    cin >> num2;
    if (num1==num2)
    {
        cout<< "Los numeros son iguales";
    }
    else if (num1!=num2)
    {
        cout<< "Los numeros son distintos";
    }
    else if (num1>num2)
    {
        cout<< "El primer numero es mayor que el segundo";

    }
    else if (num1<num2)
    {
        cout<< "El primer numero es menor que el segundo";
    }
     else if (num2>num1)
    {
        cout<< "El segundo numero es mayor que el segundo";
    }
    else if (num2<num1)
    {
        cout<< "El segundo numero es menor que el segundo";
    }
    return 0;
}
