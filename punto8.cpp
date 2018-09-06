/*8. Queremos construir una aplicación para analizar un movimiento de proyectil. La aplicación
debe recibir del usuario el ángulo de salida (θ) y la velocidad inicial del cañón (vo). Escriba
diferentes funciones para calcular el tiempo de vuelo (t), la altura máxima (H) y el alcance
horizontal del proyectil (R). Finalmente escriba una función sin retorno que imprima los
resultados en consola.*/
#include <iostream>
#include <string>
#include <math.h>
using namespace std;
const float PI=3.1425;
const float g=9.8;

float time_flight (float a,float b);
float max_height (float a,float b);
float horizontal_range( float a, float b);


int main()
{
    float ang,vo;
    cout<< "Movimiento de proyectil" <<endl <<endl ;
    cout<<" Ingresa el angulo de lanzamiento del proyectil: ";
    cin>>ang;
    cout<<"\n Ingresa la velocidad inicial del proyectil: ";
    cin>>vo;
    cout<<" \n El tiempo de vuelo es: ";
    cout<<time_flight(ang,vo);
    cout<<"\n La altura máxima es: ";
    cout<<max_height(ang,vo);
    cout<<"\n El alcance horizontal del proyectil es: ";
    cout<<horizontal_range(ang,vo);
}
float time_flight (float a,float b){
    float timf;
    timf=(2*b*((sin(a*PI/180))))/g;
    return timf;
    }
float max_height (float a,float b){
    float height;
    height=(b*b*(sin(a*PI/180))*(sin(a*PI/180)))/2*g;
    return height;
    }
float horizontal_range( float a, float b){
    float r;
    r=(b*b*(sin(2*(a*PI/180))))/g;
return r;    
}
