#include "Electrique.h"
#include <iostream>
using namespace std;



// Constructeur : initialise le moteur �lectrique
// Appelle le constructeur de la classe m�re Moteur
// puis initialise l'attribut sp�cifique 'tensionMax'
Electrique::Electrique(int p, float tension) : Moteur(p), tensionMax(tension) {}


// Renvoie la tension maximale
float Electrique::getTensionMax() const { return tensionMax; }

// Modifie la tension maximale
void Electrique::setTensionMax(float tension) { tensionMax = tension; }

// Red�finit la m�thode virtuelle afficher() de Moteur
// Affiche les infos sp�cifiques au moteur �lectrique
void Electrique::afficher() const {
    cout << "Moteur Electrique -> Puissance: " << puissance
        << " ch, Tension max: " << tensionMax << " V" << endl;
}

