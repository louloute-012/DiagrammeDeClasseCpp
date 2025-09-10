/*****************************************************************//**
 * \file   Moto.h
 * \brief  D�claration de la classe Moto (version sans moteur)
 *
 * \author Pierre
 * \date   Septembre 2025
 *********************************************************************/

#ifndef MOTO_H
#define MOTO_H

#include <iostream>
#include <string>

 /*!
  * \class Moto
  * \brief Classe repr�sentant une moto (uniquement avec le poids)
  */
class Moto
{
private:
    int poids;        ///< Poids de la moto en kg

public:
    /* Forme canonique */
    Moto();                      ///< Constructeur par d�faut
    Moto(int poids);              ///< Constructeur avec param�tres
    Moto(const Moto& m);          ///< Constructeur de copie
    Moto& operator=(const Moto& m); ///< Op�rateur d�affectation
    ~Moto();                      ///< Destructeur

    /* Accesseurs / Mutateurs */
    int getPoids() const;         ///< Retourne le poids
    void setPoids(int p);         ///< D�finit le poids

    /* Affichage */
    void afficher() const;        ///< Affiche les infos de la moto
};

#endif // MOTO_H
