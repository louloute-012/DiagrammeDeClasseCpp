#include "Moto.h"
#include <iostream>
using namespace std;

Moto::Moto(int p, Moteur* m) : poids(p), moteur(m) {}

int Moto::getPoids() const { return poids; }
void Moto::setPoids(int p) { poids = p; }

Moteur* Moto::getMoteur() const { return moteur; }
void Moto::setMoteur(Moteur* m) { moteur = m; }

void Moto::afficher() const {
    cout << "Moto -> Poids: " << poids << " kg" << endl;
    if (moteur) moteur->afficher();
}
