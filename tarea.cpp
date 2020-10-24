#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<string>
#include<windows.h>
#include<cstdlib>
#include<fstream>
#include<iomanip>

using namespace std;

int dato;
struct traduccion{
	char palabra[50];
	char traduccion[50];
	char significado[50];
}datos;

void palabras(ofstream &arch){
	system("cls");
	int i;
	
	arch.open("palabras.txt", ios::out | ios::app);
	cout<<"Traduccion de palabras \n\n";
	cout<<"Palabra  : ";gets(datos.palabra);gets(datos.palabra);
	cout<<"\n Traduccion: ";gets(datos.traduccion);
	cout<<"\n Significado: ";gets(datos.significado);
	
	arch<<"|\n"<<datos.palabra<<"|\n"<<datos.traduccion <<"|\n "<<datos.significado<<"| \n\n";

	
	arch.close();
}

void cons(ifstream &archivocons){
	system("cls");
	int fila=0, columna=0;
	int control=1;
	archivocons.open("palabras.txt", ios::out | ios::app);
	
		string mostrar, line;
		
		while (getline(archivocons, line))
		{
			mostrar =line;
	 	cout <<mostrar;
			
		}
		archivocons.close();
		getch(); 
}
main(){
	
	ofstream arch;
	ifstream archivocons;
	do{
		system("cls");
		
		cout<<"Menu\n";
	
		cout<<"\n 1. Ingresar   ";
		cout<<"\n 2. Ver palabras ";
		cout<<"\n 3. Eliminar ";
		cout<<"\n 4. Salir ";
		cout<<"\n Ingrese la opcion a ejecutar: "; cin>>dato; 
		
		switch(dato){
			case 1:
				palabras(arch);
				break;
				
				case 2:
					cons(archivocons);
		
					break;	
					
				case 3:	
				remove("palabras.txt");
				break;			
		}
	}while(dato<=3);

}
