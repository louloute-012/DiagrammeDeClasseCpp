/*****************************************************************//**
 * \file   Moto.cpp
 * \brief  Implémentation de la classe Moto (version sans moteur)
 *
 * \author Pierre
 * \date   Septembre 2025
 *********************************************************************/

#include "Moto.h"
#include <iostream>

 /* ======== Constructeurs / Destructeur ======== */

Moto::Moto() : poids(0)
{
    // Constructeur par défaut
}

Moto::Moto(int p) : poids(p)
{
    // Constructeur avec paramètres
}

Moto::Moto(const Moto& m) : poids(m.poids)
{
    // Constructeur de copie
}

Moto& Moto::operator=(const Moto& m)
{
    if (this != &m) {
        this->poids = m.poids;
    }
    return *this;
}

Moto::~Moto()
{
    // Rien à libérer
}

/* ======== Accesseurs / Mutateurs ======== */

int Moto::getPoids() const
{
    return poids;
}

void Moto::setPoids(int p)
{
    poids = p;
}

/* ======== Méthode d'affichage ======== */

void Moto::afficher() const
{
    std::cout << "Moto - Poids : " << poids << " kg" << std::endl;
}
