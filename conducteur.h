#ifndef CONDUCTEUR_H
#define CONDUCTEUR_H
<<<<<<< HEAD

#include <string>
#include <vector>
#include "Moto.h"



class Conducteur {
private:
    // --- Attributs privés ---
    std::string nom;              // Nom du conducteur
    std::string prenom;           // Prénom du conducteur
    int anneeNaissance;           // Année de naissance du conducteur

    // Liste des motos associées au conducteur
    // Relation d'agrégation : le conducteur "possède" des motos, 
    // mais leur durée de vie n'est pas nécessairement liée à celle du conducteur
    std::vector<Moto*> mesMotos;

public:
    // --- Constructeur ---
    // Par défaut, si aucun paramètre n'est fourni, 
    // nom et prénom = "" et annéeNaissance = 0
    Conducteur(std::string n = "", std::string p = "", int annee = 0);

    // --- Accesseurs (getters) ---
    std::string getNom() const;          // Renvoie le nom
    std::string getPrenom() const;       // Renvoie le prénom
    int getAnneeNaissance() const;       // Renvoie l'année de naissance


    void addMoto(Moto* newMoto);         // Ajoute une moto au conducteur
    void rmMoto(Moto* rmMoto);           // Supprime une moto du conducteur
    void afficheMotos() const;           // Affiche toutes les motos du conducteur
};

#endif 
=======
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
>>>>>>> 5fbec5fc6a632b5513fd96062b4d3afde9bcf905
