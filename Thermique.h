#ifndef THERMIQUE_H
#define THERMIQUE_H

#include "Moteur.h"

class Thermique : public Moteur {
private:
    float cylindree;

public:
    Thermique(int p = 0, float cyl = 0.0);

    float getCylindree() const;
    void setCylindree(float cyl);

    void afficher() const override;
};

#endif
