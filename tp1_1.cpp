#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int byte=0,num,*dir_num;
    num=20;
    dir_num=&num;
    byte=sizeof(num);
    cout<<"lo que almacena el puntero: "<<*dir_num<<endl;
	cout<<"direccion de memoria del puntero almacenado la variable: "<<dir_num<<endl;
	cout<<"direccion de memoria del la variable: "<<&num<<endl; //deireccion de memoria
    cout<<"direccion del puntero: "<<&dir_num<<endl;
    cout<<"la cantidad de byte que ocupa la variable es: "<<byte<<" byte"<<endl;
	getch();
    return 0;
}
