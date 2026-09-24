#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H
#include "barre.h"

#include <iostream>

using namespace std ;

class barrerectangle : public barre {

private :

    float largeur ;
    float hauteur ;

public :

    barrerectangle(const string _ref , const float _longueur , const float _densite , const string _nomdelalliage, const float _largeur , const float _hauteur) ;

    float CalculerSection() const;
    float CalculerMasse() const;
    void AfficherCararectangle();

};
#endif // BARRERECTANGLE_H
