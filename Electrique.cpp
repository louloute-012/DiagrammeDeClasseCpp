#include "Electrique.h"
#include <iostream>
using namespace std;

Electrique::Electrique(int p, float tension) : Moteur(p), tensionMax(tension) {}

float Electrique::getTensionMax() const { return tensionMax; }
void Electrique::setTensionMax(float tension) { tensionMax = tension; }

void Electrique::afficher() const {
    cout << "Moteur Electrique -> Puissance: " << puissance
        << " ch, Tension max: " << tensionMax << " V" << endl;
}
