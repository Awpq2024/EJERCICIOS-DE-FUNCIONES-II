#include <iostream>
#include <cmath>
using namespace std;

void calcularRaices (double a, double b, double c,double& r1, double& r2,bool& esReal)
{
	double discriminante=(b*b)-4*(a*c);
	
	if (discriminante>=0){
		esReal=true;
		r1=(-b+sqrt(discriminante))/(2*a);
		r2=(-b-sqrt(discriminante))/(2*a);
	}else{
		esReal=false;
		r1=-b/(2*a);
		r2=sqrt(-discriminante)/(2*a);
	}
}
int main(){
	double a, b ,c, raiz_1, raiz_2;
	bool esReal;
	
	cout<<"Introduzca los coeficientes de la ecuacion cuadratica (ax^2 + bx + c = 0)"<<endl;
	cout<<"Coeficiente a: ";
	cin>>a;
	cout<<"Coeficiente b: ";
	cin>>b;
	cout<<"Coeficiente c: ";
	cin>>c;
	
	calcularRaices (a, b, c, raiz_1, raiz_2, esReal);
	
	if (esReal){
		cout<<"Las raicez son reales"<<endl;
		cout<<"x1 = "<<raiz_1<<", x2 = "<<raiz_2;
	}else{
		cout<<"Las raices son complejas"<<endl;
		cout<<"x1 ="<<raiz_1<<" + "<<raiz_2<<" i"<<", x2 ="<<raiz_1<<" - "<<raiz_2<<" i";
	}
	
	return 0;
}