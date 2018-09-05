/* Escriba una aplicación que imprima en la consola una figura triangular basada en un caracter
y de un número de filas ingresado por el usuario. Por ejemplo, ingresando el caracter “*” y
tamaño 5 la pirámide tiene la apariencia:
         *
        **
       ***
      ****
     *****
    ******
   *******
  ********
 ********* */


#include <iostream>
#include <string>
using namespace std;

int main()
{
 int i,j,n,aux;
 string sp;
 string sr;
 cout<<"ingrese un numero para filas y columnas del triangulo: ";
 cin>>n;
 cout<<" \n ingrese el caracter que quiere utilizar: ";
 cin>>sp;
 cout<<endl;
 aux=n;
 sr=sp;
 
 for (j=1;j<=aux;j++){
 for (i=1;i<=n;i++){
     cout<<" ";
     }
     cout<<sp;
cout<<endl;
   n=n-1;
sp=sp+sr;
}

}
