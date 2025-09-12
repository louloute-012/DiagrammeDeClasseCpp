#include "Moteur.h"
#include <iostream>
using namespace std;



// Initialise un moteur avec une puissance donn�e 
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
// (sera red�finie par les classes filles : Thermique et Electrique)
void Moteur::afficher() const {
    cout << "Moteur puissance: " << puissance << " ch" << endl;
}
