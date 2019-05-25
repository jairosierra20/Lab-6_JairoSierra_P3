#include "Motor.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
Motor::Motor(string pelectrico,string pconfi){
	this->electrico=pelectrico;
	this->confi=pconfi;
}
Motor::Motor(){

}
string Motor::getElectrico(){
	return electrico;
}
void Motor::setElectrico(string pelectrico){
	electrico=pelectrico;
}
string Motor::getConfi(){
	return confi;
}
void Motor::setConfi(string pconfi){
	confi=pconfi;
}
string Motor::toString(){
	string retval = "Electrico: "+electrico+"Transmision del carro: "+confi;
	return retval;
}
Motor::~Motor(){
   cout<<"La instancia fue eliminada"<<endl;
}