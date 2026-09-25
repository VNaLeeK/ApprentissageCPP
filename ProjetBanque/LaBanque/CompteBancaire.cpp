#include "CompteBancaire.h"
#include <iostream>


using namespace std;

CompteBancaire::CompteBancaire(const float _solde) : solde(_solde) {
}

bool CompteBancaire::Deposer(const float _montant) {
    bool retour = false;
    if (_montant > 0.0) {
        solde += _montant ;
        retour = true ;
    }
    return retour;
}

bool CompteBancaire::Retirer(const float _montant) {
    bool retour = false;
    if (_montant > 0.0 && solde >= _montant) {
        solde -= _montant ;
        retour = true;
    }
    return retour;

}

float CompteBancaire::ConsulterSolde() const {
    return solde ;
}

