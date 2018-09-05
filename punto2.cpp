/*2. Recibir un entero N y calcular dos valores: la suma de todos los números pares y la suma de
todos los impares hasta N.*/

#include <iostream>

using namespace std;

int main(){
	
	int N, sum_even=0 , sum_odd=0, i=0 ;
	cout<<" Enter number: " ; 
cin>>N;
for (i=0;i<=N;i++) {
	if (i%2==0){
		sum_even=sum_even+i;
	}
	else{
		sum_odd=sum_odd+i;
	}
}
cout<<"\n sum of even number is: " << sum_even;
	cout <<"\n sum of odd number is: " << sum_odd;
	return 0;
}
