#ifndef CHASIS_H
#define CHASIS_H
#include <string>
using std::string;
class Chasis{
private:
	string tipo;
	string confi;
public:
	Chasis();
	Chasis(string,string);
	string getTipo();
	void setTipo(string);
	string getConfi();
	void setConfi(string);
	string toString();
	~Chasis();
};
#endif