#include "Conducteur.h"
#include <iostream>
#include <algorithm>
using namespace std;


// Constructeur : formater un conducteur avec son nom, pr�nom et ann�e de naissance
Conducteur::Conducteur(string n, string p, int annee)
    : nom(n), prenom(p), anneeNaissance(annee) {
}


// Renvoie le nom du conducteur
string Conducteur::getNom() const { return nom; }
// Renvoie le pr�nom du conducteur
string Conducteur::getPrenom() const { return prenom; }
// Renvoie l'ann�e de naissance du conducteur
int Conducteur::getAnneeNaissance() const { return anneeNaissance; }


// Ajoute une moto au vecteur mesMotos
void Conducteur::addMoto(Moto* newMoto) {
    mesMotos.push_back(newMoto);
}

// Supprime une moto pr�cise du vecteur mesMotos
void Conducteur::rmMoto(Moto* rmMoto) {
    // remove() d�place toutes les cas de rmMoto vers la fin
    // erase() supprime r�ellement ces cas
    mesMotos.erase(remove(mesMotos.begin(), mesMotos.end(), rmMoto), mesMotos.end());
}


// Affiche les informations
void Conducteur::afficheMotos() const {
    cout << "Conducteur: " << prenom << " " << nom
        << " (" << anneeNaissance << ")" << endl;

    // Parcourt le vecteur mesMotos
    for (auto m : mesMotos) {
        m->afficher();
    }
}
