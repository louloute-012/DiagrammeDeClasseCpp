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
    std::string nom;
    std::string prenom;
    int anneeNaissance;
    std::vector<Moto*> mesmotos; // Aggrégation 
    
    // --- Attributs privés ---

    // Liste des motos associées au conducteur
    // Relation d'agrégation : le conducteur "possède" des motos, 
    // mais leur durée de vie n'est pas nécessairement liée à celle du conducteur

public:
    // --- Constructeur ---
    // Par défaut, si aucun paramètre n'est fourni, 
    // nom et prénom = "" et annéeNaissance = 0
    Conducteur(std::string n = "", std::string p = "", int annee = 0);
    

    std::string getNom() const;
    std::string getPrenom() const;
   
    // --- Accesseurs (getters) ---


    void addMoto(Moto* newMoto);         // Ajoute une moto au conducteur
    void rmMoto(Moto* rmMoto);           // Supprime une moto du conducteur
    void afficheMotos() const;           // Affiche toutes les motos du conducteur
};

#endif 
