/*7. Escriba una aplicación que reciba una frase en letras minúsculas y que imprima de regreso la
frase escrita en letras mayúsculas. AYUDA: considere el código ASCII de los caracteres junto
con la conversión de tipo caracter a entero y viceversa.*/

#include <iostream>
#include <string>
using namespace std;
void mayuscula(string phrase);
void minuscula(string phrase1);
int main()
{
    
    string str;
 string pal;
 string pal1;
 cout<<"Ingrese una palabra en minusculas " <<endl <<endl;
 cin>>pal;
cout<<"ingrese una palabra en mayusculas " <<endl <<endl;
cin>>pal1;
cout<<"\n La palabra en mayusculas es: ";

mayuscula(pal);

cout<<"\n La palabra en minusculas es:  ";

minuscula(pal1);
}

void mayuscula(string phrase){
   string   b;
    for (char c : phrase){
      b=c-32;
      cout<<b;
        }
    }
    
void minuscula(string phrase1){
   string   f;
    for (char d : phrase1){
      f=d+32;
      cout<<f;
        }
    }
