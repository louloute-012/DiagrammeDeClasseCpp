#ifndef ELECTRIQUE_H
#define ELECTRIQUE_H

#include "Moteur.h"


class Electrique : public Moteur { // Héritage public de Moteur
private:
    float tensionMax;  // Tension maximale supportée par le moteur 

public:
    // --- Constructeur ---
    // Initialise un moteur électrique avec une puissance et une tension maximale
    // Par défaut : puissance = 0, tensionMax = 0.0
    Electrique(int p = 0, float tension = 0.0);


    float getTensionMax() const;        // Renvoie la tension maximale
    void setTensionMax(float tension);  // Modifie la tension maximale


    // Redéfinit la méthode virtuelle afficher() de Moteur
    void afficher() const override;
};

#endif 

