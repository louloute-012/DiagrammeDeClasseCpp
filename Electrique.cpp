#include "Electrique.h"
#include <iostream>
using namespace std;



// Constructeur : initialise le moteur électrique
// Appelle le constructeur de la classe mère Moteur
// puis initialise l'attribut spécifique 'tensionMax'
Electrique::Electrique(int p, float tension) : Moteur(p), tensionMax(tension) {}


// Renvoie la tension maximale
float Electrique::getTensionMax() const { return tensionMax; }

// Modifie la tension maximale
void Electrique::setTensionMax(float tension) { tensionMax = tension; }

// Redéfinit la méthode virtuelle afficher() de Moteur
// Affiche les infos spécifiques au moteur électrique
void Electrique::afficher() const {
    cout << "Moteur Electrique -> Puissance: " << puissance
        << " ch, Tension max: " << tensionMax << " V" << endl;
}

