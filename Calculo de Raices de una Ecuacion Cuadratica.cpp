#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double a, b ,c;
	double discriminante, raiz1, raiz2;
	double real, imaginario;
	
	cout<<"----------Bienvenido-------"<<endl;
	cout<<"Introdusca los coeficientes de la ecuacion cuadratica (ax^2 + bx + c = 0)"<<endl;
	cout<<"Coeficiente a: ";
	cin>>a;
	cout<<"Coeficiente b: ";
	cin>>b;
	cout<<"Coeficiente c: ";
	cin>>c;
	
	discriminante=(b*b)-4*(a*c);
	
	if (discriminante>0){
		raiz1=(-b+sqrt(discriminante))/(2*a);
		raiz2=(-b-sqrt(discriminante))/(2*a);
		cout<<"Las raicez son reales y diferentes"<<endl;
		cout<<"x1 = "<<raiz1<<", x2 = "<<raiz2;
		
	}else if (discriminante==0){
		raiz1=-b/(2*a);
		cout<<"Las raices son reales e iguales"<<endl;
		cout<<"x1 = "<<raiz1<<", x2 = "<<raiz1;
		
	}else{
		real=-b/(2*a);
		imaginario=sqrt(-discriminante)/(2*a);
		cout<<"Las raices son complejas"<<endl;
		cout<<"x1 ="<<real<<" + "<<imaginario<<"i"<<", x2 ="<<real<<" - "<<imaginario<<"i";
	
	}
	
	return 0;
}