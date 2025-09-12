#ifndef MOTO_H
#define MOTO_H

#include "Moteur.h"


class Moto {
private:
    int poids;         // Poids de la moto 
    Moteur* moteur;    // Pointeur vers un moteur 

public:

    // Initialise une moto avec un poids et un moteur
    // Par défaut 
    Moto(int p = 0, Moteur* m = nullptr);

    int getPoids() const;         // Renvoie le poids
    void setPoids(int p);         // Modifie le poids

    Moteur* getMoteur() const;    // Renvoie le moteur associé
    void setMoteur(Moteur* m);    // Associe un moteur à la moto

    // Affiche les caractéristiques de la moto (poids + moteur)
    void afficher() const;
};

#endif 

