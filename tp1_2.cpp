#include<iostream>
#include<conio.h>
using namespace std;
//punto a)
int cuadrado(int x);
void cuadrado();
int main(){
 	int num,valor;
 	cout<<"ingrese el numero: ";
 	cin>>num;
 	valor=cuadrado(num);
 	cout<<"el valor del numero al cuadrado es: "<<valor<<endl;
 	cuadrado();
	getch ();
 	return 0;
 }
int cuadrado(int x){
	int resultado;
	resultado=x*x;
	return resultado;
}
//punto b)
void cuadrado(){
	int num1;
	cout<<"ingrese el numero: ";
	cin>>num1;
	num1=num1*num1;
	cout<<"el valor es: "<<num1<<endl;
}
