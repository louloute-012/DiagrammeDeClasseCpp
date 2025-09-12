#ifndef CONDUCTEUR_H
#define CONDUCTEUR_H
#include <string>
#include "moto.h"
#include <vector>

class Conducteur {
private:
    std::string nom;
    std::string prenom;
    int anneeNaissance;
    std::vector<Moto*> mesmotos; // Aggrégation 
    
public:
    Conducteur(std::string n = "", std::string p = "", int annee = 0);
    

    std::string getNom() const;
    std::string getPrenom() const;
   


    int getAnneeNaissance() const;
    void addmoto(Moto* newmoto);
    void rmmoto(Moto* rmmoto);
    void affichemotos() const;
};

#endif
