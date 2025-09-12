#ifndef THERMIQUE_H
#define THERMIQUE_H

#include "Moteur.h"

class Thermique : public Moteur { // Héritage public de Moteur
private:
    float cylindree;  // Cylindrée du moteur 

public:
   
    // Initialise un moteur thermique avec une puissance et une cylindrée
    // Par défaut : puissance = 0, cylindrée = 0.0
    Thermique(int p = 0, float cyl = 0.0);

 
    float getCylindree() const;      // Renvoie la cylindrée
    void setCylindree(float cyl);    // Modifie la cylindrée


    // Redéfinit la méthode virtuelle afficher() de la classe Moteur
    void afficher() const override;
};

#endif 
