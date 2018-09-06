/*9. Escriba una función llamada “exchange” que intercambie los valores de dos variables que
contienen enteros. Para ello ingrese los valores por referencia. Mejore la aplicación anterior
sobrecargando la función “exchange”, para que sea posible intercambiar variables enteras,
flotantes y strings.*/
#include <iostream>
#include <string>
#include <math.h>
using namespace std;


void exchange(int &x,int &y);
void exchange(float &n,float&m);
void exchange(string &str1, string &str2);


int main()
{
    int x,y;
    float n,m;
    string str1,str2;
    cout<<" Cambio de variables" <<endl <<endl;
    cout<< "Ingrese dos numeros enteros" <<endl;
    cout<< "numero 1:"; cin>>x;
    cout<< "numero 2:"; cin>>y;
    cout<< "Ingrese dos numeros  flotantes" <<endl;
    cout<< "numero 1:"; cin>>n;
    cout<< "numero 2:"; cin>>m;
    cout<< "Ingrese dos palabras" <<endl;
    cout<< "palabra 1:"; cin>>str1;
    cout<< "palabra 2:"; cin>>str2;
    
    
    exchange(x,y);
    exchange(n,m);
    exchange(str1,str2);
    
    cout<<"\n El nuevo valor de numero 1 es: " <<x;
    cout<<"\n El nuevo valor de numero 2 es: " <<y;
    cout<<"\n El nuevo valor de numero 1 es: " <<n;
    cout<<"\n El nuevo valor de numero 2 es: " <<m;
    cout<<"\n palabra 1 es: " <<str1;
    cout<<"\n palabra 2 es: " <<str2;
    
}

void exchange(int &x,int &y){
    int aux; 
    aux=y;
    y=x;
    x=aux;
    } 
    void exchange(float &n,float &m){
    float aux2; 
    aux2=m;
    m=n;
    n=aux2;
    } 
    void exchange(string &str1,string &str2){
    string aux1; 
    aux1=str2;
    str2=str1;
    str1=aux1;
    } 
