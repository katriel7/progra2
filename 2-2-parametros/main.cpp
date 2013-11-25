#include <iostream>

using namespace std;
/* como usar los parametros de valor los cuales no reflejan cambios que tienen en un procedimiento
en el min, pero los de variable si reflejan todos los que hayan sufrido en el programa principal
*/

void calcular (int &sueldo, int &ihss)
{
    if (sueldo>7000)
        ihss=245;
    else
        ihss=0.035 * sueldo;
        sueldo=sueldo*1.20;
}
int main()
{
    int sueldo=8000;
    int ihss=0;



    cout << "ingresar sueldo....:";
    cin>>sueldo;

    calcular (sueldo,ihss);

    cout << "Sueldo..........:" << sueldo<<endl;
    cout << "Ihss..........:" << ihss<<endl;
    return 0;
}
