#include <iostream>

using namespace std;
/* se tiene que ingresar un numero este se tiene que validar que sea par o divisible entre 5, debera de contar
cuantos son pares y cuantos son divisibles entre 5, tiene que preguntar si desea continuar, validar que la respuesta solo sea S o N
obtener el numero mayor de los numeros que se ingresaron correctamente, obtener el promedio de los numeros que fueron mayores a 100
desarrollar el programa usando ciclo while, estructuras de condicion se tomara en cuenta el orden, identado, el nombre de las
variables y la eficiencia del programa */

#include <conio.h>
#include <string>
#include <string.h>
#include <stdio.h>
#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
	char menu;
	int suma,canpromedio;
	int pares,divisibles;
	int numero;
	int mayor;
	int totalingresados;
	float promedio=0;
	pares=0;
	divisibles=0;
	canpromedio=0;
	suma=0;
	totalingresados=0;
	menu='s';
	while(menu!='n')
    {
		cout<< "Ingrese numero: ";
		cin>> numero;
		if (totalingresados==0)
			mayor=numero;
		totalingresados++;
		if (numero%5==0)
			divisibles++;
		if (numero%2==0)
				pares++;
		if ((numero%5==0)||(numero%2==0))
		{
			if (numero>100)
			{
				canpromedio++;
				suma=suma+numero;
			}
			if (numero>mayor)
				mayor=numero;
		}

		do
		{
			cout<< "Desea seguir? s/n: ";
			cin>>menu;
			//system("cls");//limpia pantalla
		}while ((menu!='s')&&(menu!='n'));

    }
	promedio=suma/canpromedio;
	cout << "Pares: " << pares<<endl;
	cout << "Divisibles (5): " << divisibles<<endl;
	cout << "El numero mayor correctamente ingresado: " << mayor<<endl;
	cout << "Promedio de los numeros mayores a 100: " << promedio<<endl;
	//getch();//pausa para ver resultados
    return 0;
}
