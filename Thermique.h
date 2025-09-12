#ifndef THERMIQUE_H
#define THERMIQUE_H

#include "Moteur.h"

class Thermique : public Moteur { // H�ritage public de Moteur
private:
    float cylindree;  // Cylindr�e du moteur 

public:
   
    // Initialise un moteur thermique avec une puissance et une cylindr�e
    // Par d�faut : puissance = 0, cylindr�e = 0.0
    Thermique(int p = 0, float cyl = 0.0);

 
    float getCylindree() const;      // Renvoie la cylindr�e
    void setCylindree(float cyl);    // Modifie la cylindr�e


    // Red�finit la m�thode virtuelle afficher() de la classe Moteur
    void afficher() const override;
};

#endif 
