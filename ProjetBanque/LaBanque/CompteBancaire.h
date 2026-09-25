#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H

#include <iostream>

using namespace std ;

class CompteBancaire {

protected :
    float solde ;

public :
    CompteBancaire(const float solde);
    bool Deposer(const float montant);
    bool Retirer(const float montant);
    float ConsulterSolde() const ;

};

#endif // COMPTEBANCAIRE_H
