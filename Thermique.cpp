#include "Thermique.h"
#include <iostream>
using namespace std;



// Constructeur : initialise le moteur thermique
// Appelle le constructeur de la classe m�re Moteur(p)
// puis initialise l'attribut sp�cifique 'cylindree'
Thermique::Thermique(int p, float cyl) : Moteur(p), cylindree(cyl) {}


// Renvoie la cylindr�e
float Thermique::getCylindree() const { return cylindree; }

// Modifie la cylindr�e
void Thermique::setCylindree(float cyl) { cylindree = cyl; }


// Red�finit la m�thode virtuelle afficher() de Moteur
// Affiche les infos sp�cifiques au moteur thermique
void Thermique::afficher() const {
    cout << "Moteur Thermique -> Puissance: " << puissance
        << " ch, Cylindr�e: " << cylindree << " L" << endl;
}
