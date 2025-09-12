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
     * \param p Puissance du moteur (par défaut 0)
     * \param cyl Cylindrée du moteur (par défaut 0.0)
     */
    Thermique(int p = 0, float cyl = 0.0);

    /**
     * \brief Retourne la cylindrée du moteur
     * \return La cylindrée du moteur
     */
    float getCylindree() const;

    /**
     * \brief Modifie la cylindree du moteur
     * \param cyl La nouvelle cylindrée
     */
    void setCylindree(float cyl);

    /**
     * \brief Affiche les informations du moteur thermique
     */
    void afficher() const override;
};

#endif
