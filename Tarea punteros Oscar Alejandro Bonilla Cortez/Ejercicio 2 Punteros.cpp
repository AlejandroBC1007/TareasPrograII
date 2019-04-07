//Programa creado por: Oscar Alejandro Bonilla Cortez
//Carnet: BC18010        Programacion II       Grupo 02
#include <iostream>
#include <conio.h>
using namespace std;
int mari(int *jos){
	int quin;
	quin = *jos * 10;
	return quin;
}
int main() {	
	int valor;
	cout<<"Ingrese el valor"<<": ";
	cin>>valor;
	valor = mari(&valor);//La variable "valor" toma el valor retornado por la funcion, que es su valor original ultiplicado por 10.
	cout<<"El nuevo valor es: "<<valor<<" que se almacena en: "<<&valor;
	return 0;
}
