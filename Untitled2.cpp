#include<iostream>
using namespace std; 
int a,b,c;
int op;
bool mseguir = true;  

int main ()
{
	do 
	{
		system("cls");
		cout<<"Menu operaciones"<<endl;
		cout<<"1. Suma"<<endl;
		cout<<"2. Resta"<<endl;
		cout<<"3. Multiplicacion"<<endl;
		cout<<"4. Salir"<<endl;
		cout<<"Ingrese opcion"<<endl;
		cin>>op;
		switch (op)
		{
			case 1: system("cls");
					cout<<"ingrese valor 1"<<endl;
					cin>>a;
					cout<<"ingrese valor 2"<<endl;
					cin>>b; 
					
					c= a+b; 
					cout<<"la suma es "<<c<<endl;
					system("pause");
					break; 
					
			case 2: system("cls");
					cout<<"ingrese valor 1"<<endl;
					cin>>a;
					cout<<"ingrese valor 2"<<endl;
					cin>>b; 
					
					c= a-b; 
					cout<<"la resta es "<<c<<endl;
					system("pause");
					break;
			
			case 3:	system("cls");
					cout<<"ingrese valor 1"<<endl;
					cin>>a;
					cout<<"ingrese valor 2"<<endl;
					cin>>b; 
					
					c= a*b; 
					cout<<"la multiplicacuon es "<<c<<endl;
					system("pause");
					break;
			case 4:  mseguir=false;  
						
		} 

		if (op > 4); 
			cout<<"Opcion invalida"<<endl;
				system("pause");
	}while(mseguir==true);
}
