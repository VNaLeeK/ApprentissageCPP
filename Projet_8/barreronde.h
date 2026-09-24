#ifndef BARRERONDE_H
#define BARRERONDE_H
#include "barre.h"
#include <iostream>

using namespace std ;
/**
 * @file barreronde.h
 * @author Keelan VERCHAIN
 * @date 24/09/26
 * @version 1.0
 * @brief Implémentation de la classe barreronde
 */
class barreronde : public barre {

private :

    float rayon ;

public :

    barreronde(const string _ref , const float _longueur , const float _densite , const string _nomdelalliage, const float _rayon) ;

    float CalculerSection() const;
    float CalculerMasse() const;
    void AfficherCararond();

};

#endif // BARRERONDE_H
