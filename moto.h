#ifndef MOTO_H
#define MOTO_H

#include "Moteur.h"

 /**
  * \brief Classe representant une moto
  */
class Moto {
private:
    int poids;       ///< Poids de la moto en kg
    Moteur* moteur;  ///< Pointeur vers le moteur de la moto

public:
    /**
     * \brief Constructeur de la classe Moto
     * \param p Poids de la moto (par défaut 0)
     * \param m Pointeur vers le moteur de la moto (par défaut nullptr)
     */
    Moto(int p = 0, Moteur* m = nullptr);

    /**
     * \brief Retourne le poids de la moto
     * \return Le poids de la moto
     */
    int getPoids() const;

    /**
     * \brief Modifie le poids de la moto
     * \param p Nouveau poids de la moto
     */
    void setPoids(int p);

    /**
     * \brief Retourne le moteur de la moto
     * \return Pointeur vers le moteur
     */
    Moteur* getMoteur() const;

    /**
     * \brief Modifie le moteur de la moto
     * \param m Pointeur vers le nouveau moteur
     */
    void setMoteur(Moteur* m);

    /**
     * \brief Affiche les informations de la moto et de son moteur
     */
    void afficher() const;
};

#endif
