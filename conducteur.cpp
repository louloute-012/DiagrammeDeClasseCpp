<<<<<<< HEAD
#include "Conducteur.h"
#include <iostream>
#include <algorithm>
using namespace std;


// Constructeur : formater un conducteur avec son nom, prénom et année de naissance
Conducteur::Conducteur(string n, string p, int annee)
    : nom(n), prenom(p), anneeNaissance(annee) {
}


// Renvoie le nom du conducteur
string Conducteur::getNom() const { return nom; }
// Renvoie le prénom du conducteur
string Conducteur::getPrenom() const { return prenom; }
// Renvoie l'année de naissance du conducteur
int Conducteur::getAnneeNaissance() const { return anneeNaissance; }


// Ajoute une moto au vecteur mesMotos
void Conducteur::addMoto(Moto* newMoto) {
    mesMotos.push_back(newMoto);
}

// Supprime une moto précise du vecteur mesMotos
void Conducteur::rmMoto(Moto* rmMoto) {
    // remove() déplace toutes les cas de rmMoto vers la fin
    // erase() supprime réellement ces cas
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
=======
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
>>>>>>> 5fbec5fc6a632b5513fd96062b4d3afde9bcf905
