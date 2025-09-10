#include <iostream>
#include "Moto.h"

int main()
{
    // Création d’une moto avec le constructeur par défaut
    Moto m1;
    m1.setPoids(200);
    m1.afficher();

    // Création d’une moto avec paramètres
    Moto m2(150);
    m2.afficher();

    // Test du constructeur de copie
    Moto m3 = m2;
    m3.afficher();

    // Test de l’opérateur d’affectation
    m1 = m3;
    m1.afficher();

    return 0;
}
