#include <iostream>

using namespace std;
/* ingresar 10 numeros y al final presentar cuantos numeros fueron divisibles entre 5,el promedio de los divisibles
entre 5 y el numero mayor de todos los numero */

int main()
{ int num,cdiv5,prom,suma,numMayor;
   cdiv5=0;
   for(int i=0;i<10;i++)
    {
    cout << "Ingrese 10 numeros" << endl;
    cin>>num;
    if ((num % 5)==0)
       {
       cdiv5++;
       suma+=num;
       }
       if (cdiv5>0)
        {
            prom=suma/cdiv5;
        }
        else
        {
            prom=0;
        }
        if (num>numMayor)
        {
          num=numMayor;
        }
        }
    cout<<"Los numeros divisibles entre 5 son....:"<<cdiv5<<endl;
    cout<<"El promedio de los numeros divisibes es....:"<<prom<<endl;
    cout<<"El numero mayor es....:"<<numMayor<<endl;
    return 0;
}
