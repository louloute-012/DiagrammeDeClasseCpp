#include "Moto.h"
#include <iostream>
using namespace std;

/**
 * \brief Constructeur de la classe Moto
 * \param p Poids de la moto (par défaut 0)
 * \param m Pointeur vers le moteur de la moto (par défaut nullptr)
 */
Moto::Moto(int p, Moteur* m) : poids(p), moteur(m) {}

/**
 * \brief Retourne le poids de la moto
 * \return Le poids de la moto
 */
int Moto::getPoids() const {
    return poids;
}

/**
 * \brief Modifie le poids de la moto
 * \param p Nouveau poids de la moto
 */
void Moto::setPoids(int p) {
    poids = p;
}

/**
 * \brief Retourne le moteur de la moto
 * \return Pointeur vers le moteur
 */
Moteur* Moto::getMoteur() const {
    return moteur;
}

/**
 * \brief Modifie le moteur de la moto
 * \param m Pointeur vers le nouveau moteur
 */
void Moto::setMoteur(Moteur* m) {
    moteur = m;
}

/**
 * \brief Affiche les informations de la moto et de son moteur
 */
void Moto::afficher() const {
    cout << "Moto -> Poids: " << poids << " kg" << endl;
    if (moteur)
        moteur->afficher();
}
