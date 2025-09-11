#include <iostream>
#include "conducteur.h"
#include <algorithm>
using namespace std;

// Correction : utiliser le nom de classe correct "Conducteur" (majuscule)
Conducteur::Conducteur(string n, string p, int annee) : 
    nom(n), prenom(p), anneeNaissance(annee) {}

string Conducteur::getNom() const { return nom; }
string Conducteur::getPrenom() const { return prenom; }
int Conducteur::getAnneeNaissance() const { return anneeNaissance; }

void Conducteur::addmoto(Moto* newmoto) {
    mesmotos.push_back(newmoto);
}

void Conducteur::rmmoto(Moto* rmmoto) {
    auto it = find(mesmotos.begin(), mesmotos.end(), rmmoto);
    if (it != mesmotos.end()) {
        mesmotos.erase(it);
    }
}

void Conducteur::affichemotos() const {
    cout << "Conducteur: " << nom << " " << prenom << ", Année de naissance: " << anneeNaissance << endl;
    for (auto m : mesmotos) {
        if (m) {
            m->afficher();
        }
    }
}