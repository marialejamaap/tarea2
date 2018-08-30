#include <iostream>
#include <string>

using namespace std;
int fizz(int a);
int buzz(int c);
int fizzbuzz(int d);


int main(){

	cout<<" Problem FizzBuzz " <<endl <<endl;

	int b=1;
while(b<101){
	if (b%15==0){
		cout<< fizzbuzz(b) <<endl;
	}
	else if (b%5==0){
		cout<< buzz(b) <<endl;
			}
	 else if (b%3==0){
		cout<<fizz(b) <<endl;
			}
	else {
			cout<<b <<endl;
		}
		b++;
}	
}
int fizz(int a)
{
cout<<"Fizz ";
}
int buzz(int c)
{
cout<<"Buzz ";
}
int fizzbuzz(int d)
{
cout<<"FizzBuzz ";
}
