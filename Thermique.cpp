#include "Thermique.h"
#include <iostream>
using namespace std;



// Constructeur : initialise le moteur thermique
// Appelle le constructeur de la classe mère Moteur(p)
// puis initialise l'attribut spécifique 'cylindree'
Thermique::Thermique(int p, float cyl) : Moteur(p), cylindree(cyl) {}


// Renvoie la cylindrée
float Thermique::getCylindree() const { return cylindree; }

// Modifie la cylindrée
void Thermique::setCylindree(float cyl) { cylindree = cyl; }


// Redéfinit la méthode virtuelle afficher() de Moteur
// Affiche les infos spécifiques au moteur thermique
void Thermique::afficher() const {
    cout << "Moteur Thermique -> Puissance: " << puissance
        << " ch, Cylindrée: " << cylindree << " L" << endl;
}
