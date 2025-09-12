#ifndef ELECTRIQUE_H
#define ELECTRIQUE_H

#include "Moteur.h"


class Electrique : public Moteur { // H�ritage public de Moteur
private:
    float tensionMax;  // Tension maximale support�e par le moteur 

public:
    // --- Constructeur ---
    // Initialise un moteur �lectrique avec une puissance et une tension maximale
    // Par d�faut : puissance = 0, tensionMax = 0.0
    Electrique(int p = 0, float tension = 0.0);


    float getTensionMax() const;        // Renvoie la tension maximale
    void setTensionMax(float tension);  // Modifie la tension maximale


    // Red�finit la m�thode virtuelle afficher() de Moteur
    void afficher() const override;
};

#endif 

