#include "Moteur.h"
#include <iostream>
using namespace std;

Moteur::Moteur(int p) : puissance(p) {}

int Moteur::getPuissance() const { return puissance; }
void Moteur::setPuissance(int p) { puissance = p; }

void Moteur::afficher() const {
    cout << "Moteur puissance: " << puissance << " ch" << endl;
}
