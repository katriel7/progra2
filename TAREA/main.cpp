#include <iostream>

using namespace std;
/*
se tienen 3 columnas con 6 lineas, se necesita dejar la ultima linea para e promedio de cada una de las columnas
elaborar el ingreso, el promedio de columnas y presentar
*/
const int lin=6;
const int col=3;
int num[lin][col];

void ingreso( int num[lin][col]){

for( int l=0; l<lin-1;l++){
        for( int c=0; c<col;c++){

            cout <<"ingreso dato ["<<l<<","<<c<<"]..";
            cin>>num[l][c];
        }
    }
}

void promedio ( int num[lin][col]){
        for( int c=0; c<col;c++){
                int suma=0;
    for( int l=0; l<lin-1;l++){
           suma+=num[l][c] ;

            num[lin-1][c]=suma/5 ;
        }

    }


}
void presentar( int num[lin][col]){

    for( int l=0; l<lin;l++){
        for( int c=0; c<col;c++){
            cout <<num[l][c]<<"  ";

        }
        cout<<endl;

    }
}


int main()
{
   ingreso(num);
   promedio(num);
    presentar(num);
    return 0;
}
