#include "Chasis.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
Chasis::Chasis(string ptipo,string pconfi){
	this->tipo=ptipo;
	this->confi=pconfi;
}
Chasis::Chasis(){

}
string Chasis::getTipo(){
	return tipo;
}
void Chasis::setTipo(string ptipo){
	tipo=ptipo;
}
string Chasis::getConfi(){
	return confi;
}
void Chasis::setConfi(string pconfi){
	confi=pconfi;
}
string Chasis::toString(){
	string retval = "Tipo de ruedas: "+tipo+"Transmision del carro: "+confi;
	return retval;
}
Chasis::~Chasis(){
   cout<<"La instancia fue eliminada"<<endl;
}