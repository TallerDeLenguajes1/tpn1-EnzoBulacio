#include<iostream>
#include<conio.h>
using namespace std;
//punto a)
int cuadrado(int x);
void cuadrado();
void direccion();
void invertir(int a,int b);
int ordenar(int x,int y);
int main(){
 	int num,mayor,menor,ord,valor,a,b;
 	cout<<"ingrese el numero para sacar su cuadrado: ";
 	cin>>num;
 	valor=cuadrado(num);
 	cout<<"el valor del numero al cuadrado es: "<<valor<<endl;
 	cuadrado();
 	direccion();
 	cout<<"ingrese el valor de a y b, para invertir valores"<<endl;
 	cin>>a;
 	cin>>b;
 	invertir(a,b);
 	cout<<"ingrese dos valores que desea ordenar: "<<endl;
 	cin>>mayor;
 	cin>>menor;
 	ordenar(mayor,menor);
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
void direccion(){
	int num2,*punt;
	cout<<"ingrese un numero: ";
	cin>>num2;
	punt=&num2;
	cout<<"contenido de la variable: "<<*punt<<endl;
	cout<<"la direccion es "<<punt<<endl;
}
//punto d
void invertir(int x,int y){
	int acum1,acum2;
	acum1=x;
	acum2=y;
	x=acum2;
	y=acum1;
	cout<<"los numeros invertidos son: "<<x<<" y "<<y<<endl;
}
//punto e
int ordenar(int mayor,int menor){
	if(menor<mayor){
		cout<<"quedaria ordenado de menor a mayor "<<menor<<"-"<<mayor;
	}
	else{
		cout<<"quedaria ordenado de menor a mayor"<<mayor<<"-"<<menor;
	}
}
