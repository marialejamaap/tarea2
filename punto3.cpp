/*3. Escribir una aplicación para el famoso problema FizzBuzz. La aplicación debe imprimir los
números del 1 al 100. Pero, para números múltiplos de 3 debe imprimir “Fizz” (en vez del
número). Para números múltiplos de 5 debe reemplazar por “Buzz”. Para números múltiplos
simultáneamente de 3 y 5 debe imprimir “FizzBuzz”.*/


#include <iostream>
#include <string>

using namespace std;
void fizz(int a);
void  buzz(int c);
void fizzbuzz(int d);


int main(){

	cout<<" Problem FizzBuzz " <<endl <<endl;

	int b=1;
while(b<101){
	if (b%15==0){
	    fizzbuzz(b);
	    cout<<endl;
	}
	else if (b%5==0){
	fizz(b);
	 cout<<endl;
			}
	 else if (b%3==0){
	buzz(b);
	 cout<<endl;
			}
	else {
cout<<b<<endl;
		}
		b++;
}	
}
void  fizz(int a){
 cout<<"Fizz";
}
void buzz(int c){
cout<<"Buzz";

}
void fizzbuzz(int d){
cout<<"FizzBuz";
}
