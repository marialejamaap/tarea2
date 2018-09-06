/*  5. Escriba una aplicación que reciba una frase del usuario. Luego debe imprimir de regreso el
número total de vocales y el número total de consonantes que se encuentran en la frase.*/



#include <iostream>
#include<string>


using namespace std;
string palabra(string str);
int main(){
string phrase;
cout<<"introduzca una frase: ";
getline(cin, phrase);
palabra(phrase);
}

string palabra(string str){

int count_a=0, count_e=0,count_i=0, count_o=0,count_u=0, count_vocales, count_consonante;
for (char c: str){

if ((c=='a')|| (c=='A'))
count_a=count_a+1;
else if ((c=='e')|| (c=='E'))

count_e=count_e+1;
else if ((c=='i')|| (c=='I')) 

count_i=count_i+1;
else if ((c=='o')|| (c=='O'))
count_o=count_o+1;
else if ((c=='u')||(c=='U'))

count_u=count_u+1;

else 

count_consonante++;}

count_vocales=count_a+count_e+count_i+count_o+count_u;
cout<<"total de vocales son: " << count_vocales;
cout<<"\n total de consonantes son: "<<count_consonante;
}
