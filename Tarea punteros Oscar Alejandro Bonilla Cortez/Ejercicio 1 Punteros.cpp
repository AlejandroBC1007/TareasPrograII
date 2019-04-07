//Programa creado por: Oscar Alejandro Bonilla Cortez
//Carnet: BC18010      Programacion II       Grupo 02
#include <iostream>
#include <conio.h>
using namespace std;
int k;
int h;
int mayor(int *dir_k, int *dir_h){
	int l;//Utiliza esta variable como auxiliar para almacenar el valor mayor mientras se hace el cambio de valor.
	l = *dir_h;
	*dir_h = *dir_k;
	*dir_k = l;		
	k = *dir_k;
	return k;
}
int main() {
	cout<<"Ingrese el primer valor"<<": ";
	cin>>k;
	cout<<"Ingrese el segundo valor"<<": ";
	cin>>h;
	if (h > k){
	k = mayor(&k, &h);//Se llama la funcion que toma los valores de la variable k y h y el valor retornado se almacena en k.
	cout<<"El segundo valor "<<k<<" es mayor por lo que se almacena en: "<<&k<<endl;
	cout<<"El primer valor "<<h<<" es menor por lo que se almacena en: "<<&h;
	}
	else{
		cout<<"El primer valor es mayor o ambos valores son igules";
	}	
	getch();
	return 0;
}
