#ifndef GRAPHE_H
#define GRAPHE_H
#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <utility>
#include "Arc.h"
#include "Sommet.h"
using namespace std;

class Graphe {
public:
	Graphe();
	void creerGraphe(string nomFichier);
	void lireGraphe();
	void colorierGraphe();
	void extractionGraphe(string couleur, Graphe);
	void plusCourtChemin(string origine, string destination);
private:
	list<pair<Sommet, Sommet>> arcs;
	vector<Sommet> sommets;
	vector<list<pair<Sommet, int>>> chemin;
};
#endif