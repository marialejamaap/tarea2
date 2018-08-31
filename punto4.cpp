
#include <iostream>
#include <string>
using namespace std;

int triangulo(int a);
int main(){
    cout<<"Triangulo de Caracteres"<<endl <<endl; 
 int c;
 cout<<"ingrese un valor para filas y columnas...1,2,3...: ";
 cin>>c;
 cout<<triangulo(c);
 }
 
 int triangulo (int a){
     int i,j;
 for(i=1;i<=a;i++){
     for(j=1;i>=j;j++)
     cout<<"*";
     cout<<"\n"; 
     }
     return a;}
     
