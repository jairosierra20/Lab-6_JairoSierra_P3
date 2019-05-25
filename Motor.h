#ifndef MOTOR_H
#define MOTOR_H
#include <string>
using std::string;
class Motor{
private:
	string electrico;
	string confi;
public:
	Motor();
	Motor(string,string);
	string getElectrico();
	void setElectrico(string);
	string getConfi();
	void setConfi(string);
	string toString();
	~Motor();
};
#endif