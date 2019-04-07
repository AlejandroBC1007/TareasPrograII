//Programa creado por: Oscar Alejandro Bonilla Cortez
//Carnet: BC18010        Programacion II       Grupo 02
#include <iostream>
#include <conio.h>
using namespace std;
int potencia(double *num, int *pot){
	int *s;
	*s = 1;
	for(int i=1; i<=*pot; i++){//El ciclo se repite el mismo numero de veces que el valor potencial
		*s = (*s) * (*num);//Cada ves que se repite el ciclo se multiplica por el mismo valor del numero
	}
	return *s;
}
int main() {	
	double n;
	int x;
	int s;
	cout<<"Numero: ";
	cin>>n;
	cout<<"Potencia: ";
	cin>>x;
	cout<<potencia(&n, &x);
	return 0;
}
