#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double cateto1, cateto2, hipotenusa;
	cout<<"Ingrese el valor del cateto 1: ";
	cin>>cateto1;
	cout<<"Ingrese el valor del cateto 2: ";
	cin>>cateto2;
	
	hipotenusa=sqrt((cateto1*cateto1)+(cateto2*cateto2));
	
	cout<<"La hipotenusa resultante es: "<<hipotenusa;
	
	return 0;
}