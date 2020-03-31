#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int num,*dir_num;
    num=20;
    dir_num=&num;
    cout<<"Numero: "<<num<<endl;
    cout<<"x"<<*dir_num<<endl;
	cout<<"direccion de memoria del la variable: "<<&num<<endl; //deireccion de memoria
    cout<<"direccion de memoria del puntero almacenado la variable: "<<dir_num<<endl;
    getch();
    return 0;
}
