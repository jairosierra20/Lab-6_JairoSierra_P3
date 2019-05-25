#include "Carro.h"
#include "Chasis.h"
#include "Motor.h"
#include "Pintura.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
#include <string>
using std::string;
#include <vector>
using std::vector;
char** provisionarMatriz(int,int);
//liberar memoria de la matriz
void liberarMatriz(char**&,int,int);
//imprimir la matriz
void printMatrix(char**,int,int);
//metodo de crear prototipo
void Crear(char**&);
int cont=0;
int cont2=0;
void Avanzar(char**&);
vector<Carro*> carros;
	vector<Carro*> producidos;
	int con2=0;
char** Matrix=provisionarMatriz(5,4);
void P(char**);
int main(){
	int opcion=0;
	while(opcion!=6){
		//inicializar matriz n x n
		cout<<"Menu"<<endl;
		cout<<"1) Agregar Prototipo"<<endl;
		cout<<"2) Ver matriz de linea de produccion"<<endl;
		cout<<"3) Ver detalles de las lineas de produccion"<<endl;
		cout<<"4) Ver listado de carros producidos"<<endl;
		cout<<"5) Avanzar ciclo de linea de produccion"<<endl;
		cout<<"6) Salir"<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:
			    Crear(Matrix);
			    con2++;
				break;
			case 2:
			//P(Matrix);
			for (int i = 1; i < con2; ++i)
			{
				Matrix[cont-i][0]='P';
			}
				printMatrix(Matrix,5,4);
					break;
			case 3:
				for (int i = 0; i < carros.size(); ++i)
				{
					cout<<i<<"- "<<carros[i]->toString()<<endl;
				}
				break;
			case 4:
			cout<<"Carros producidos"<<endl;
				for (int i = 0; i < 5; ++i)
				{
					for (int j = 0; j < 4; ++j)
					{
						if(Matrix[i][3]=='C'){
							producidos.push_back(carros[i]);
							carros.erase(carros.begin()+i);
						}
					}
				}
				for (int i = 0; i < producidos.size(); ++i)
				{
					cout<<i<<"- "<<producidos[i]->toString()<<endl;
				}
				break;
			case 5:
					Avanzar(Matrix);
				break;
		}
	}
	liberarMatriz(Matrix,5,4);
	return 0;
}//fin del main
char** provisionarMatriz(int f,int c){
   char** matrix = NULL;
   matrix = new char*[f];
   for(int i=0;i<c;i++){
      matrix[i]=new char[c];
      for (int j = 0; j < c; ++j)
      {
      	matrix[i][j]=' ';
      }
   }
   return matrix;
}
void liberarMatriz(char**& matrix,int f,int c){
   for(int i=0;i<f;i++){
    if(matrix[i] != NULL){
     delete[] matrix[i];
     matrix[i]=NULL;
    }
 }
}
void printMatrix(char** matrix,int f,int c){
    for(int i=0;i<f;i++){
     for(int j=0;j<c;j++){
        cout<<"[ "<<matrix[i][j]<<" ]"<<"  ";
     }
     cout<<endl;
  }

}
void Crear(char**& matrix){
	string modelo="";
	cout<<"Ingrese el nombre del modelo (2-3 Letras)"<<endl;
	cin>>modelo;
	if(modelo.length()>3 || modelo.length()<2){
		cout<<"Ingrese el nombre del modelo (2-3 Letras)"<<endl;
		cin>>modelo;
	}
	string tipo="";
	cout<<"Ingrese el tipo de ruedas del carro: "<<endl;
	cin>>tipo;
	string confi="";
	int opc=0;
	cout<<"Transmision del chasis"<<endl;
	cout<<"1) Automatica"<<endl;
	cout<<"2) No Automatica"<<endl;
	cin>>opc;
	if(opc==1){
		confi="Automatica";
	}
	if(opc==2){
		confi="No Automatica";
	}
	if(opc!= 1 && opc!=2){
		cout<<"Opcion incorrecta"<<endl;
	}
	Chasis* chasis=new Chasis(tipo,confi);
	string electrico="";
	int opc1=0;
	cout<<"Tipo del motor"<<endl;
	cout<<"1) Electrico"<<endl;
	cout<<"2) No Electrico"<<endl;
	cin>>opc1;
	if(opc1==1){
		electrico="Electrico";
	}
	if(opc1==2){
		electrico="No Electrico";
	}
	if(opc1!=1 && opc1!=2){
		cout<<"Opcion incorrecta"<<endl;
	}
	string confi2="";
	cout<<"Ingrese la configuracion del motor: "<<endl;
	cin>>confi2;
	Motor* motor=new Motor(electrico,confi2);
	string color="";
	cout<<"Ingrese el color de la Pintura: "<<endl;
	cin>>color;
	string acabado="";
	cout<<"Ingrese el acabado de la pintura: "<<endl;
	cin>>acabado;
	Pintura* pintura=new Pintura(color,acabado);
	carros.push_back(new Carro(modelo,cont,chasis,motor,pintura));
	cont++;

}
void Avanzar(char**& matriz){
	for (int j = 0; j < 5; ++j)
	{
		for (int k = 1; k < 4; ++k)
						{
			if(Matrix[j][0]=='P' && Matrix[j][k]==' '){
					cout<<"Hola"<<endl;
					Matrix[j][k]='C';
					break;
			}
		}
					
	}
}
void P(char** Matrix){
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			if(i<cont){
				if(j==0){
					if(Matrix[i][j]==' '){
						Matrix[i][j]='P';
					}
				}
			}
		}
	}
}