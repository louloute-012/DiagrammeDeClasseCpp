#ifndef ELECTRIQUE_H
#define ELECTRIQUE_H

#include "Moteur.h"

class Electrique : public Moteur { // Héritage
private:
    float tensionMax;

public:
    Electrique(int p = 0, float tension = 0.0);

    float getTensionMax() const;
    void setTensionMax(float tension);

    void afficher() const override;
};

#endif
