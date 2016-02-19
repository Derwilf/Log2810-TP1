#include <fstream>
#include <sstream>
#include "Graphe.h"
using namespace std;

Graphe::Graphe(){}

void Graphe::creerGraphe(string nomFichier){
	ifstream fichier(nomFichier);
	if (fichier)
	{
		int nSommets = 0;
		int nArcs = 0;
		string listeArcs;
		string listeSommets;
		//while (!fichier.eof()){
		getline(fichier, listeSommets);
		stringstream ss(listeSommets);
		string nomSommet;
		while (getline(ss, nomSommet, ';')) {
			cout << nomSommet << endl;
			Sommet unSommet(nomSommet, "n");
			sommets.push_back(unSommet);
			nSommets++;
		}
		getline(fichier, listeArcs);
		stringstream ss1(listeArcs);
		string arc;
		while (getline(ss1, arc, ';')) {
			nArcs++;
			stringstream ss2(arc);
			string tmp1;
			int n = 0;
			string s[3];
			while (getline(ss2, tmp1, ',')) {			
				s[n] = tmp1;
				n++;
			}
			int valeur = stoi(s[2]);
			string nom;
			nom = s[0] + " - " + s[1];
			cout << nom << endl;
			cout << valeur << endl;
			Arc arc(nom, valeur);
			Sommet st1(s[0], "n");
			Sommet st2(s[1], "n");
			for (int i = 0; i < nArcs; i++){
				chemin[i].push_back(make_pair(st2, valeur));
			}
			/*arcs.push_back(make_pair(st1, st2));
			vector<Sommet>::iterator itr = sommets.begin();
			for (itr; itr != sommets.end(); ++itr){
				//itr
			}*/
			
		}
		fichier.close();
	}
	else
		cout << "Errer d'ouverture du fichier" << endl;
}

void Graphe::lireGraphe(){
	/*for (int i = 0; i < sommets.size(); i++){
		cout << sommets[i].getIdentifiant ;
		list<pair<Sommet, int>>::iterator itr = graph[i].begin();
		while (itr != graph[i].end())
		{
			cout << "---" << itr->second << "---" << itr->first.getIdentifiant;
		}
		cout << endl;
	}*/
}

void Graphe::colorierGraphe(){}

void Graphe::extractionGraphe(string couleur, Graphe){}

void Graphe::plusCourtChemin(string origine, string destination){}