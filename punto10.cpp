/*10. Escriba una aplicación para calcular la potencia número 𝑎
𝑏 con una función basada en recursividad. AYUDA: considere que 𝑎
𝑏 = 𝑎 ∗ 𝑎^(𝑏−1)
y que 𝑎^0 = 1.*/



#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int potencia(int a, int b);

int main()
{
    
    int i,x,y,p;
    cout<<"Potencia"<<endl<<endl;
    
cout<<" Ingrese la base: " <<endl; cin>> x;
cout<<"Ingrese la potencia: "; cin>>y;
for (i=0;i<=y;i++){
p=potencia(x,y);}
cout<<" \n El resultado es: " <<p;

    }

int potencia(int a, int b){
    if (b==0)
    return 1;
    else 
    return a*pow(a,b-1);
    
    }
