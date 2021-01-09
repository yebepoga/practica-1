#include <iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	float centrox,centroy,radio,puntox,puntoy,d ;
	
	cout<<"Ingrese la cordenada de centro en x : "; cin>>centrox;
	cout<<"Ingrese la cordenada de centro en y : "; cin>>centroy;
	cout<<"Ingrese la longitud del radio: "; cin>>radio;
	cout<<"Ingrese la cordenada del punto x : "; cin>>puntox;
	cout<<"Ingrese la cordenada del punto y : "; cin>>puntoy;
	
	d = (sqrt(pow(puntox-centrox, 2))+ (pow(puntoy-centroy ,2)));
	 
	if ( d ==radio) {
		cout<<endl<<"El punto está en la circunferencia.";
	}
	else if ( d> radio){
		cout<<endl<<"EL punto está fuera de la circunferencia";
	}
	else cout<<endl <<"El punto esta dentro de la circunferencia";
	
	getch ();
	return 0;
}

