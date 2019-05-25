#include "Carro.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
//Constructores
Carro::Carro(string pmodelo,int pnumero,Chasis* pchasis,Motor* pmotor,Pintura* ppintura){
	this->modelo=pmodelo;
	this->numero=pnumero;
	this->chasis=pchasis;
	this->motor=pmotor;
	this->pintura=ppintura;
}
Carro::Carro(){

}
string Carro::getModelo(){
	return modelo;
}
void Carro::setModelo(string pmodelo){
	modelo=pmodelo;
}
int Carro::getNumero(){
	return numero;
}
void Carro::setNumero(int pnumero){
	numero=pnumero;
}
Chasis* Carro::getChasis(){
	return chasis;
}
void Carro::setChasis(Chasis* pchasis){
	chasis=pchasis;
}
Motor* Carro::getMotor(){
	return motor;
}
void Carro::setMotor(Motor* pmotor){
	motor=pmotor;
}
Pintura* Carro::getPintura(){
	return pintura;
}
void Carro::setPintura(Pintura* ppintura){
	pintura=ppintura;
}
string Carro::toString(){
    cout<<"Modelo: "<<modelo<<numero<<endl;
    cout<<"Chasis: "<<chasis->toString()<<endl;
    cout<<"Motor :"<<motor->toString()<<endl;
    cout<<"Pintura: "<<pintura->toString()<<endl;
    return "";
}
Carro::~Carro(){
   cout<<"La instancia fue eliminada"<<endl;
}