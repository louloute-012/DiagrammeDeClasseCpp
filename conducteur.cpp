#include "Conducteur.h"
#include <iostream>
#include <algorithm>

using namespace std;


Conducteur::Conducteur(string n, string p, int annee) 
    : nom(n), prenom(p), anneeNaissance(annee) { 
}

string Conducteur::getNom() const {
    return nom;
}

string Conducteur::getPrenom() const {
    return prenom;
}


int Conducteur::getAnneeNaissance() const {
    return anneeNaissance;
}


void Conducteur::addMoto(Moto* newMoto) {
    mesMotos.push_back(newMoto);
}


void Conducteur::rmMoto(Moto* rmMoto) {
    mesMotos.erase(remove(mesMotos.begin(), mesMotos.end(), rmMoto), mesMotos.end());
}

void Conducteur::afficheMotos() const {
    cout << "Conducteur: " << prenom << " " << nom << " (" << anneeNaissance << ")" << endl;
    for (auto m : mesMotos) {
        m->afficher();
    }
}
