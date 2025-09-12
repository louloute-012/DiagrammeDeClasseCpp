#ifndef THERMIQUE_H
#define THERMIQUE_H

#include "Moteur.h"

 /**
  * \brief Classe representant un moteur thermique
  */
class Thermique : public Moteur {
private:
    float cylindree; 

public:
    /**
     * \brief Constructeur de la classe Thermique
     * \param p Puissance du moteur (par d�faut 0)
     * \param cyl Cylindr�e du moteur (par d�faut 0.0)
     */
    Thermique(int p = 0, float cyl = 0.0);

    /**
     * \brief Retourne la cylindr�e du moteur
     * \return La cylindr�e du moteur
     */
    float getCylindree() const;

    /**
     * \brief Modifie la cylindree du moteur
     * \param cyl La nouvelle cylindr�e
     */
    void setCylindree(float cyl);

    /**
     * \brief Affiche les informations du moteur thermique
     */
    void afficher() const override;
};

#endif
