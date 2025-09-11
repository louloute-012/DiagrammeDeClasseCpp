#ifndef MOTEUR_H
#define MOTEUR_H

class Moteur {
protected:
    int puissance;

public:
    Moteur(int p = 0);

    int getPuissance() const;
    void setPuissance(int p);

    virtual void afficher() const;
    virtual ~Moteur() {}
};

#endif
