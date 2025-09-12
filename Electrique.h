#ifndef ELECTRIQUE_H
#define ELECTRIQUE_H

#include "Moteur.h"

 /**
  * \brief Classe representant un moteur electrique
  */
class Electrique : public Moteur {
private:
    float tensionMax;  ///< Tension maximale du moteur

public:
    /**
     * \brief Constructeur de la classe Electrique
     * \param p Puissance du moteur (par défaut 0)
     * \param tension Tension maximale du moteur (par défaut 0)
     */
    Electrique(int p = 0, float tension = 0.0);

    /**
     * \brief Retourne la tension maximale du moteur electrique
     * \return La tension maximale
     */
    float getTensionMax() const;

    /**
     * \brief Modifie la tension maximale du moteur electrique
     * \param tension La nouvelle tension maximale
     */
    void setTensionMax(float tension);

    /**
     * \brief Affiche les informations du moteur electrique
     */
    void afficher() const override;
};

#endif
