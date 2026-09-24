#ifndef BARRE_H
#define BARRE_H
#include <iostream>

using namespace std ;

class barre {

protected :

    string ref ;
    float longueur ;
    float densite ;
    string nomdelalliage ;

public :

    barre(const string _ref , const float _longueur , const float _densite , const string _nomdelalliage ) ;
    void AfficherCara();

};


#endif // BARRE_H


// Rond = 1 paramètre = le rayon = r
// Carré = 1 paramètre = un coté = c
// Hexagone = 1 paramètre = un coté = c
// Octogone = 1 paramètre = un coté = c
// Rectangle = 2 paramètres = une longueur et une largeur = L et l
// L = 3 paramètres = Longueur de l'aile 1, Longueur de l'aile 2, Épaisseur = L1 , L2 , E
// Tube rond = 2 paramètres = diamètre ext , diamètre int = De , Di
// Tube hexagonal = 2 paramètres = Distance entre plats extérieure, Épaisseur = De , E
// Tube octogonal = 2 paramètres = Distance entre plats extérieure, Épaisseur = De , E