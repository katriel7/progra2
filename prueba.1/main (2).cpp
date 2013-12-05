#include <iostream>

using namespace std;
/* Ingresar el nombre del empleado, las horas trabajadas, el turno, luego determinar las horas normales que son
las primeras 40 y las extras que son las mayores a 40.
Debera de obtener el pago por hora usando el turno, luego un bono, el pago bruto que es la suma de los pagos normales y extras,
ihss y total a pagar.

turno  pn  pe
1      100 130
2      135 140
3      140 138

Bono si el empleado es de turno 1 y trabajo mas de 45 horas, el bono es de 300 y sino es de 100.

Para calcular el seguro, el pago bruto mayor a 7000 es 245 y sino el pago bruto por 3.5%.Ingre
*/
int main()
{ char empleado[30];
  int horast, turno, horasn, horase, pn, pe, bono;
  double ihss, pb, tp;

    cout << "Ingresar nombre del empleado:";
    cin.getline(empleado,30);

    cout << "Ingresar las horas trabajadas:";
        cin >> horast;

     cout << "Ingresar turno:";
        cin >> turno;

        if (horast>40)
        {
         horasn=40;
         horase=horast-40;
        }
        else
        {
         horasn=horast;
         horase=0;
        }
        if (turno==1)
        {
         pn=100*horasn;
         pe=130*horase;
        }
        else if (turno==2)
        {
          pn=135*horasn;
          pe=140*horase;
        }
        else if (turno==3)88;
        {
         pn=140*horasn;
         pe=138*horase;
        }
        else
        {
         pn=0;
         pe=0;

         pn=horasn*pn
         pe=horase*pe
        }
