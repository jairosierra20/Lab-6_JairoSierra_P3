#include "Pintura.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
Pintura::Pintura(string pcolor,string pacabado){
	this->color=pcolor;
	this->acabado=pacabado;
}
Pintura::Pintura(){

}
string Pintura::getColor(){
	return color;
}
void Pintura::setColor(string pcolor){
	color=pcolor;
}
string Pintura::getAcabado(){
	return acabado;
}
void Pintura::setAcabado(string pacabado){
	acabado=pacabado;
}
string Pintura::toString(){
	string retval = "Color de la pintura: "+color+"Acabado: "+acabado;
	return retval;
}
Pintura::~Pintura(){
   cout<<"La instancia fue eliminada"<<endl;
}