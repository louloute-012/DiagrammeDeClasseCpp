#ifndef CONDUCTEUR_H
#define CONDUCTEUR_H


#include <string>
#include <vector>
#include "Moto.h"


/*! \class Conducteur
* \brief classe representant un conducteur
*
* On retrouve :
* \li : nom
* \li : prenom
*/
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