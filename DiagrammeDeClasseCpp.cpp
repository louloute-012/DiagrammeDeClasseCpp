#include <iostream>
#include "Moto.h"
#include "Moteur.h"
#include "Electrique.h"
#include "Thermique.h"
#include "Conducteur.h"

using namespace std;

int main() {
    // Création des moteurs
    Moteur* moteurClassique = new Moteur(80);
    Electrique* moteurElectrique = new Electrique(60, 400.0);
    Thermique* moteurThermique = new Thermique(120, 1.6);

    // Création des motos avec différents moteurs
    Moto* moto1 = new Moto(180, moteurClassique);
    Moto* moto2 = new Moto(200, moteurElectrique);
    Moto* moto3 = new Moto(220, moteurThermique);

    // Affichage des motos
    cout << "=== Moto avec moteur classique ===" << endl;
    moto1->afficher();

    cout << "\n=== Moto avec moteur électrique ===" << endl;
    moto2->afficher();

    cout << "\n=== Moto avec moteur thermique ===" << endl;
    moto3->afficher();

    // Modifications
    cout << "\n--- Modifications ---" << endl;
    moteurClassique->setPuissance(100);
    moteurElectrique->setTensionMax(450.0);
    moteurThermique->setCylindree(2.0);

    moto1->setPoids(190);
    moto2->setPoids(210);
    moto3->setPoids(230);

    // Réaffichage après modification
    cout << "\n=== Après modifications ===" << endl;
    moto1->afficher();
    moto2->afficher();
    moto3->afficher();


    // création de conducteur
    cout << "\n=== Conducteur ===" << endl;
    Conducteur* conducteur1 = new Conducteur("Doe", "John", 1990);
	Conducteur* conducteur2 = new Conducteur("Smith", "Jane", 1985);

    conducteur1->addmoto(moto1);
    conducteur2->addmoto(moto2);
    conducteur1->affichemotos();    
	conducteur2->affichemotos();

    // Nettoyage mémoire
    delete moto1;
    delete moto2;
    delete moto3;
    delete moteurClassique;
    delete moteurElectrique;
    delete moteurThermique;
    delete conducteur1;
	delete conducteur2;

    return 0;
}
