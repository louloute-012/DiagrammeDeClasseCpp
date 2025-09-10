* Cette classe a une finalité pédagogique :
*\li : Rappel du C++
* \li : Commentaire avec Doxygen
* \li : Git, GitHub
* /
class Mission
{
private:
    int nbPersonne;                ///< Nombre de personnes affectées à la mission
    std::string descriptifMission; ///< Description textuelle de la mission
    int nbHeure;                   ///< Durée en heures de la mission

public:
    /* Forme canonique */
    Mission();                                                        // Constructeur par défaut
    Mission(int nbPersonne, const std::string& descriptif, int nbHeure); // Constructeur avec paramètres
    Mission(const Mission& m);                                        // Constructeur de copie
    Mission& operator=(const Mission& m);                             // Opérateur d’affectation
    ~Mission();                                                       // Destructeur

    /* Accesseurs / Mutateurs */
    int getNbPersonne() const;
    void setNbPersonne(int nb);

    std::string getDescriptifMission() const;
    void setDescriptifMission(const std::string& desc);

    int getNbHeure() const;
    void setNbHeure(int heures);
};

#endif // MISSION_H
