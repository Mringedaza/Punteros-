#include <iostream>
using namespace std;
int x=24;
int y=24; 

int *z;
int *w;
int main()
{
	
	z=&x;
	w=&y;
	cout<<"Contenido de x" <<x<<endl;
	cout<<"Direccion de memoria de x"<<&x<<endl; 
	cout<<"Direccion de memoria de y"<<&y<<endl;
	cout<<"Direccion de memoria de *z"<<&z<<endl;
	cout<<"Direccion de memoria de *w"<<&w<<endl;
	cout<<"Contenido de z" <<z<<endl;
	cout<<"Contenido de w" <<w<<endl;
	*z=50;
	cout<<"Nuevo contenido de x"<<x<<endl;
}

