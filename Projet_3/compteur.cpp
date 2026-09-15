#include "compteur.h"
using namespace std;

Compteur::Compteur(const int _valeurInit, const int _pas) : valeur(_valeurInit), pas(_pas) {
}

Compteur::~Compteur() {
}

void Compteur::incrementer() {
    valeur = valeur + pas;
}

void Compteur::decrementer() {
    valeur = valeur - pas;
}

void Compteur::reinitialiser() {
    valeur = 0;
}

int Compteur::getValeur() const {
    int res = valeur;
    return res;
}

void Compteur::setValeur(const int _newValeur) {
    valeur = _newValeur;
}

int Compteur::getPas() const {
    int res = pas;
    return res;
}

void Compteur::setPas(const int _newPas) {
    pas = _newPas;
}

Compteur Compteur::operator+(const Compteur &_autre) const {
    int nouvelleValeur = this->valeur + _autre.valeur;
    int nouveauPas = this->pas;
    return Compteur(nouvelleValeur, nouveauPas);
}

bool Compteur::operator==(const Compteur &_autre) const {
    bool estEgal = (this->valeur == _autre.valeur) && (this->pas == _autre.pas);
    return estEgal;
}

void Compteur::Afficher() const {
    cout << "Compteur (valeur=" << valeur << ", pas=" << pas << ")" << endl;
}

ostream& operator<<(ostream &_flux, const Compteur &_autre) {
    _flux << "Compteur (valeur=" << _autre.valeur << ", pas=" << _autre.pas << ")";
    return _flux;
}