#include "Thermique.h"
#include <iostream>
using namespace std;

/**
 * \brief Constructeur de la classe Thermique
 * \param p Puissance du moteur (par défaut 0)
 * \param cyl Cylindrée du moteur (par défaut 0)
 */
Thermique::Thermique(int p, float cyl) : Moteur(p), cylindree(cyl) {}

/**
 * \brief Retourne la cylindree du moteur thermique
 * \return La cylindree du moteur
 */
float Thermique::getCylindree() const {
    return cylindree;
}

/**
 * \brief Modifie la cylindree du moteur thermique
 * \param cyl La nouvelle cylindree
 */
void Thermique::setCylindree(float cyl) {
    cylindree = cyl;
}

/**
 * \brief Affiche les informations du moteur thermique
 */
void Thermique::afficher() const {
    cout << "Moteur Thermique -> Puissance: " << puissance
        << " ch, Cylindrée: " << cylindree << " L" << endl;
}
