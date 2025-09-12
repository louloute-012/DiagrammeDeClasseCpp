#include "Moto.h"
#include <iostream>
using namespace std;

// Constructeur : initialise une moto avec un poids et un moteur
Moto::Moto(int p, Moteur* m) : poids(p), moteur(m) {}


// Renvoie le poids de la moto
int Moto::getPoids() const { return poids; }

// Modifie le poids de la moto
void Moto::setPoids(int p) { poids = p; }

// Renvoie le moteur associé à la moto
Moteur* Moto::getMoteur() const { return moteur; }

// Associe un moteur à la moto
void Moto::setMoteur(Moteur* m) { moteur = m; }


// Affiche les informations de la moto
// Puis délègue l'affichage au moteur 
void Moto::afficher() const {
    cout << "Moto -> Poids: " << poids << " kg" << endl;
    if (moteur)
        moteur->afficher(); // affichage spécifique au type de moteur
}

