#include "Moteur.h"
#include <iostream>
using namespace std;



// Initialise un moteur avec une puissance donnée 
Moteur::Moteur(int p) : puissance(p) {}


// Renvoie la puissance du moteur
int Moteur::getPuissance() const {
    return this->puissance;
}


// Modifie la puissance du moteur
void Moteur::setPuissance(int p) {
    this->puissance = p;
}


// Affiche les informations de base d'un moteur
// (sera redéfinie par les classes filles : Thermique et Electrique)
void Moteur::afficher() const {
    cout << "Moteur puissance: " << puissance << " ch" << endl;
}
