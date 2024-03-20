#include<iostream>
using namespace std;
main(){
	string nombre;
	int dato;
	cout<<"Ingrese dato: ";
	cin>>dato;
	cin.ignore();
	cout<<"Ingrese su nombre: ";
	getline(cin, nombre);
	cout<<nombre<<endl;	

}
