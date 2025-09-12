#include "Moteur.h"
#include <iostream>
using namespace std;

/**
 * \brief Constructeur de la classe Moteur
 * \param p Puissance du moteur (par défaut 0)
 */
Moteur::Moteur(int p) : puissance(p) {}

/**
 * \brief Retourne la puissance du moteur
 * \return La puissance du moteur
 */
int Moteur::getPuissance() const {
    return this->puissance;
}

/**
 * \brief Modifie la puissance du moteur
 * \param p La nouvelle puissance du moteur
 */
void Moteur::setPuissance(int p) {
    this->puissance = p;
}

/**
 * \brief Affiche les informations du moteur
 */
void Moteur::afficher() const {
    cout << "Moteur puissance: " << puissance << " ch" << endl;
}
