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
    std::vector<Moto*> mesmotos; // Aggr�gation 
    
    // --- Attributs priv�s ---

    // Liste des motos associ�es au conducteur
    // Relation d'agr�gation : le conducteur "poss�de" des motos, 
    // mais leur dur�e de vie n'est pas n�cessairement li�e � celle du conducteur

public:
    // --- Constructeur ---
    // Par d�faut, si aucun param�tre n'est fourni, 
    // nom et pr�nom = "" et ann�eNaissance = 0
    Conducteur(std::string n = "", std::string p = "", int annee = 0);
    

    std::string getNom() const;
    std::string getPrenom() const;
   
    // --- Accesseurs (getters) ---


    void addMoto(Moto* newMoto);         // Ajoute une moto au conducteur
    void rmMoto(Moto* rmMoto);           // Supprime une moto du conducteur
    void afficheMotos() const;           // Affiche toutes les motos du conducteur
};

#endif 
