#include "Sommet.h"

Sommet::Sommet(string identifiant, string couleur) :identifiant_(identifiant), couleur_(couleur){
}
string Sommet::getIdentifiant(){
	return identifiant_;
}
string Sommet::getCouleur(){
	return couleur_;
}
void Sommet::setCouleur(string couleur){
	couleur_ = couleur;
}