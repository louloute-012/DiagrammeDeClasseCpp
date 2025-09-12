#ifndef MOTEUR_H
#define MOTEUR_H



class Moteur {
protected:
    int puissance;   ///< Puissance du moteur 

public:
    /*!
     * \brief Constructeur
     * \param p : puissance du moteur 
     */
    Moteur(int p = 0);

    /*!
     * \brief Accesseur de la puissance
     * \return la puissance du moteur
     */
    int getPuissance() const;

    /*!
     * \brief Mutateur de la puissance
     * \param p : nouvelle valeur de la puissance
     */
    void setPuissance(int p);

    /*!
     * \brief M�thode virtuelle d'affichage
     * Affiche les informations du moteur.
     * Red�finie dans les classes filles
     */
    virtual void afficher() const;

    /*!
     * \brief Destructeur virtuel
     * D�fini comme virtuel pour permettre une destruction correcte
     * des objets polymorphiques (h�ritage).
     */
    virtual ~Moteur() {}
};

#endif 

