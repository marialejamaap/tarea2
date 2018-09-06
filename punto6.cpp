/*6. Escriba una función con dos argumentos de entrada enteros y que regrese el mayor número
entre ellos. Posteriormente escriba una aplicación que reciba 6 números enteros y que use
ÚNICAMENTE dicha función para calcular el mayor de ellos.*/


#include <iostream>
#include<string>


using namespace std;
int max(int x);
int main(){
int a, counter=0, z ;
cout<<"enter six numbers" <<endl ;
do{

cin>>a;
z=max(a);
 counter++;
   } while (counter!=6);
   
   cout<<" el numero mayor es: " << z; 
}


int max(int x){
  int  mayor=0;
  int menor; 
  int contador1=1;
    if (x>=mayor)
    mayor=x;
if ((x>=0)&&((x<menor)||(contador1==1))){
    menor=x;
    contador1++;
    return mayor;}
    }
