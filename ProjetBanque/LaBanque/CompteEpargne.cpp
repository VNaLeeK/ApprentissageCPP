#include "CompteEpargne.h"
#include <iostream>


using namespace std;

CompteEpargne::CompteEpargne(const float _solde , const float _tauxInterets) :
    CompteBancaire(_solde), tauxInterets( _tauxInterets) {
}

bool CompteEpargne::CalculerInterets(const float _solde , const float _tauxInterets) {
    bool retour = false;
    if (_solde > 0.0) {
        solde += _solde * (_tauxInterets / 100.0);
        retour = true ;
    }
    return retour;
}

float CompteEpargne::ModifierTaux(const float _tauxInterets) {
    tauxInterets = _tauxInterets;
    return tauxInterets;
}