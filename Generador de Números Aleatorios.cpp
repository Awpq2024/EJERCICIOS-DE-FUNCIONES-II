#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int cantidad, maximoValor, numeroAleatorio;
	cout<<"Ingrese la cantidad de numeros aleatorios que desee generar: ";
	cin>>cantidad;
	cout<<"Ingrese el valor maximo permitido para los numeros aleatorios: ";
	cin>>maximoValor;
	
	cout<<"Numeros aleatorios generados: ";
	for (int i=1;i<=cantidad;i++){
		numeroAleatorio=rand()%(maximoValor+1);
		cout<<numeroAleatorio<<" ";
	}
	
	
	return 0;
}