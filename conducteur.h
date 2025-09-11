/*****************************************************************//**
 * \file   Entreprise.h
 * \brief  Declaration de la classe entreprise
 * 
 * \author Pierre
 * \date   June 2023
 *********************************************************************/

#ifndef Conducteur_H
#define Conducteur_H
#include <iostream>
#include <string>


 /*! \class Conducteur
    * \brief classe representant une Conducteur. 4 attributs prives
    * 
    * Cette classe a une finalite pedagogique : 
    * \li : Rappel du C++
    * \li : commentaire avec Doxygen
    * \li : git, github
    */
class Conducteur
{

    private:
        /**
		 * Membre prive nomConducteur : contient le nom du conducteur
         */
        std::string nomConducteur; 
        /**
		 * Membre prive prenomConducteur : contient le prenom du conducteur
         */
        std::string prenomConducteur; 
        /**
         * Membre prive anneeNaissance : contient l'age du conducteur
		 */



    protected : 



    public:
        /*Classe sous forme canonique*/
        Entreprise();   
        ~Entreprise();  
        Entreprise(const Entreprise& entre); 
        Entreprise &operator = (const Entreprise& entre); 

        Entreprise(std::string nom, std::string ville); 
        std::string getNomEntreprise();
        void setEntreprise(std::string nouveauNom);
        std::string getVilleEntreprise();
        void setVilleEntreprise(std::string nouvelleVille);
       
};

#endif