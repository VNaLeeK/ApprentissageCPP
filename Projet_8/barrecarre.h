#ifndef BARRECARRE_H
#define BARRECARRE_H
#include "barre.h"

#include <iostream>

using namespace std ;


class barrecarre : public barre {

private :

    float cote ;

public :

    barrecarre(const string _ref , const float _longueur , const float _densite , const string _nomdelalliage , const float _cote) ;

    float CalculerSection() const;
    float CalculerMasse() const;
    void AfficherCaracarre();

};

#endif // BARRECARRE_H
