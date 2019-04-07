//Codigo hecho por Oscar Alejandro Bonilla Cortez BC18010
#include<iostream> //Entrada y salida de datos
#include<queue> //Funcionamiento de la cola
#include<windows.h> //se encarga de los colores de la consola el programa
using namespace std;
//almacenar coordenadas, mostrarlas y ademas mostrar un promedio de todas las coordenadas
struct coord{
	float a;
	float b;
	float c;
};
void clear(bool &rep){ //Despeja la variable en caso de que el tipo de dato sea el incorrecto
	if(cin.fail()) //Si da error al ingresar el dato
	{
		rep = true;
		cin.clear(); //Despeja la variable para que pueda ser ingresada nuevamente
		cin.ignore();
		cout << "Ingrese un valor valido\n\n";
	}
	else{
		rep = false; //el dato no es erroneo
	}
}
void agregar(coord &aux){
	bool rep = false; //indica si un dato fue ingresado erroneamente
	do{
	cout << "Ingrese la coordenada x:\n>"; cin >> aux.a;
	clear(rep);
	}while(rep); //Si el dato es erroneo, seguira pidiendo un dato valido	
	do{
	cout << "Ingrese la coordenada y:\n>"; cin >> aux.b;
	clear(rep);
	}while(rep);	
	do{
	cout << "Ingrese la coordenada z:\n>"; cin >> aux.c;
	clear(rep);
	}while(rep);
}
void mostrar(int lng, coord *inicio){
	int i=1;
	while(lng>0){
		cout << "--------------------------------------------------------------------\n";
		cout << "La coordenada x"<<i<<" es: " << inicio->a << "\n";
		cout << "La coordenada y"<<i<<" es: " << inicio->b << "\n";
		cout << "La coordenada z"<<i<<" es: " << inicio->c << endl;
		cout << "--------------------------------------------------------------------\n\n";
		inicio++; //Genera avances en la posicion del puntero
		lng--; //Resta uno de la cantidad de espacios que faltan por recorrer
		i++;
	}
}
void promedio(int lng, coord *inicio){
	coord promedio;
	int i = 0;
	while(lng>0){	
		promedio.a += inicio->a;
		promedio.b += inicio->b;
		promedio.c += inicio->c;
		inicio++; 
		lng--; 
		i++;
	}	
	promedio.a = (promedio.a/i);
	promedio.b = (promedio.b/i);
	promedio.c = (promedio.c/i);
	cout << "El promedio de la coordenada x es: " << promedio.a << "\n";
	cout << "El promedio de la coordenada y es: " << promedio.b << "\n";
	cout << "El promedio de la coordenada z es: " << promedio.c << "\n\n";
}
int main(){
	queue<coord> cola;
	coord aux;
	coord *inicio;
	int op;
	int lng;
	bool rep = false;
	lng = cola.size();
	do{
	cout << "Ingrese una opcion:\n1-Ingresar coordenada\n2-Mostrar coordenadas\n3-Mostrar promedios\n4-Salir\n>";
	cin >> op;
	switch(op) {
	case 1:
		agregar(aux);
		cola.push(aux);
		inicio = &cola.front();
		lng = cola.size();
		break;
	case 2:
		mostrar(lng,inicio);
		break;
	case 3:
		promedio(lng,inicio);
		break;
	case 4:
		return 0;
	default:
		cout << "Ingrese un valor dentro del rango\n";
	}
	cin.get();
	cin.get();
	system("cls");
	}while(true);
}
