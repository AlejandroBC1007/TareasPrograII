//Programa creado por: Oscar Alejandro Bonilla Cortez
//Carnet: BC18010        Programacion II       Grupo 02
#include <iostream>
#include <conio.h>
using namespace std;
int numA;
int numB;
int menorAcero(int *a, int *b){
	if(*a > *b){
		*b = 0;
		numB = *b;
	}
	else if(*a < *b){
		*a = 0;
		numA = *a;
	}
}
int main() {
	cout<<"Ingrese el primer numero: ";
	cin>>numA;
	cout<<"Ingrese el segundo numero: ";
	cin>>numB;
	menorAcero(&numA, &numB);
	cout<<numA<<endl;
	cout<<numB;
	return 0;
}
