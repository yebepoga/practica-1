#include <iostream>
#include<conio.h>
using namespace std;

int main(int argc, char *argv[]) {
	
	int  numero, invertido, cociente, residuo, centena,decena,unidad;
	int	 umill;
	
	cout<<"Ingrese un número  :"; cin>>numero;
	
	if (numero>=10000){
		
		cout<<"No se puede invertir no cumple los requisitos. ";
	}
	
	else if( numero>0 && numero <10){
		
		invertido = numero;
		cout <<"El número es : "<<invertido;
	}
		 
	else if(numero >=10 && numero <100)
	{
		cociente = numero / 10 ;
		residuo= numero%10;
		invertido = residuo*10+cociente;
		
	cout<<" El número invertido es : "<<invertido;
	}
	else if( numero >=100 && numero <1000)
	{
		centena =numero /100;//me da el primer numero
		decena = (numero%100)/10;
		unidad = numero%10;
		
		invertido = unidad*100 +decena*10 + centena;
		cout<<" El número invertido es : "<<invertido;
	}
	else if( numero >=1000 && numero <10000)
	{
		umill = numero /1000;
		centena = (numero %1000)/100;
		decena = (numero%100)/10;
		unidad =  numero%10;
		
		invertido = unidad*1000+decena*100+centena*10+umill;
		
		cout<<" El número invertido es : "<<invertido;
	}
	getch ();
	return 0;
}

