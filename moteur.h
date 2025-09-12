#ifndef MOTEUR_H
#define MOTEUR_H

 /**
  * \brief Classe representant un moteur 
  */
class Moteur {
protected:
    int puissance;  ///< Puissance du moteur en chevaux

public:
    /**
     * \brief Constructeur de la classe Moteur
     * \param p Puissance du moteur (par défaut 0)
     */
    Moteur(int p = 0);

    /**
     * \brief Retourne la puissance du moteur
     * \return La puissance du moteur
     */
    int getPuissance() const;

    /**
     * \brief Modifie la puissance du moteur
     * \param p La nouvelle puissance
     */
    void setPuissance(int p);

    /**
     * \brief Affiche les informations du moteur
     */
    virtual void afficher() const;

    /**
     * \brief Destructeur virtuel
     */
    virtual ~Moteur() {}
};

#endif
