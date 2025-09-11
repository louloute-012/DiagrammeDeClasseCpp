#include "Thermique.h"
#include <iostream>
using namespace std;

Thermique::Thermique(int p, float cyl) : Moteur(p), cylindree(cyl) {}

float Thermique::getCylindree() const { return cylindree; }
void Thermique::setCylindree(float cyl) { cylindree = cyl; }

void Thermique::afficher() const {
    cout << "Moteur Thermique -> Puissance: " << puissance
        << " ch, Cylindrée: " << cylindree << " L" << endl;
}
