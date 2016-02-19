#ifndef ARC_H
#define ARC_H
#include <iostream>
#include <string>
//#include <utility> //To use pair
#include "Sommet.h"
using namespace std;

class Arc{
public: 
	Arc(string identifiant, int valeur);
private:
	string identifiant_;
	int valeur_;
	//pair<Sommet, Sommet> sommets;
};
#endif