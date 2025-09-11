#ifndef MOTO_H
#define MOTO_H

#include "Moteur.h"

class Moto {
private:
    int poids;
    Moteur* moteur; // Composition

public:
    Moto(int p = 0, Moteur* m = nullptr);

    int getPoids() const;
    void setPoids(int p);

    Moteur* getMoteur() const;
    void setMoteur(Moteur* m);

    void afficher() const;
};

#endif
