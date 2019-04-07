//Programa creado por: Oscar Alejandro Bonilla Cortez
//Carnet: BC18010       Programacion II       Grupo 02
#include <iostream>
#include <conio.h>
using namespace std;
 float area(float *largo, float *ancho, float *alto){
 	float e;
 	if (*alto == 0){
		e = ((*largo) * (*ancho));
		cout<<"El area del cuadrado es: "<<e;
	}
	else {
		e = ((*largo) * (*ancho) * (*alto));
		cout<<"El volumen del cubo es: "<<e;
	}
 }
int main() {
	float lar;
	float anh;
	float alt;
	cout<<"Ingrese el valor del largo: ";
	cin>>lar;
	cout<<"Ingrese el valor del ancho: ";
	cin>>anh;
	cout<<"Ingrese el valor de lo alto, pero si busca calcular area ingrese cero en este campo"<<endl;
	cin>>alt;
	area(&lar, &anh, &alt);
	return 0;
}
