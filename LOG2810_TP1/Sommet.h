#ifndef SOMMET_H
#define SOMMET_H
#include <iostream>
#include <string>
#include <list>
#include <utility>
using namespace std;

class Sommet{
public:
	Sommet(string identifiant, string couleur);
	string getIdentifiant();
	string getCouleur();
	void setCouleur(string couleur);
private:
	string identifiant_;
	string couleur_;
	
};
#endif