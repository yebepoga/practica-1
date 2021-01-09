#include <iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int main(int argc, char *argv[]) {
	float a,b,c,disc,x1,x2,x;
		
	cout<< "Ingrese el primer numero:"; cin>>a;
	cout<< "Ingrese el segundo numero:"; cin>>b;
	cout<< "Ingrese el tercer numero:"; cin>>c;
	
	disc =pow (b,2)-(4*a*c);
	
	if (a == 0){
		cout<< "El termino cuadrático debe ser diferente de cero.";
	}
	
	else if( disc < 0){
		cout<< "La ecuación no tiene soluciones reales.";
	}
		
	else if ( disc == 0)
	{
		x= -b/(2*a);
		cout<< "La unica solución es x ="<<x;
	}
		
	else ( disc >0);
	{
		
	x1= (-b - sqrt(disc))/2*a;
	x2=	(-b + sqrt(disc))/2*a;
		cout<< "Las soluciones son:"<<endl;
		cout<< "x1="<<x1<<endl;
		cout<< "x2="<<x2<<endl;
	}
	
	getch ();
	return 0;
	
}

