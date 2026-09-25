#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H

#include "CompteBancaire.h"
#include <iostream>

using namespace std ;


class CompteEpargne : public CompteBancaire {

protected :
    float tauxInterets ;

public :
    CompteEpargne(const float _solde, const float _tauxInterets);
    bool CalculerInterets(const float solde , const float tauxInterets);
    float ModifierTaux(const float tauxInterets);


};

#endif // COMPTEEPARGNE_H
