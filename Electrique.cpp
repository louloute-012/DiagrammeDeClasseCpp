#include "Electrique.h"
#include <iostream>
using namespace std;

/**
 * \brief Constructeur de la classe Electrique
 * \param p Puissance du moteur (par défaut 0)
 * \param tension Tension maximale du moteur (par défaut 0.0)
 */
Electrique::Electrique(int p, float tension) : Moteur(p), tensionMax(tension) {}

/**
 * \brief Retourne la tension maximale du moteur electrique
 * \return La tension maximale du moteur
 */
float Electrique::getTensionMax() const {
    return tensionMax;
}

/**
 * \brief Modifie la tension maximale du moteur electrique
 * \param tension La nouvelle tension maximale
 */
void Electrique::setTensionMax(float tension) {
    tensionMax = tension;
}

/**
 * \brief Affiche les informations du moteur electrique
 */
void Electrique::afficher() const {
    cout << "Moteur Electrique -> Puissance: " << puissance
        << " ch, Tension max: " << tensionMax << " V" << endl;
}
