#include "emballage.h"
#include <iostream>
#include <iomanip>

using namespace std;

Emballage::Emballage(string format, int resistance, int longueur, int largeur, int hauteur, int stock)
    : _format(format), _resistance(resistance), _longueur(longueur), _largeur(largeur), _hauteur(hauteur), _stock(stock)
{
    cout << "Constructeur : Emballage / " << _format << endl;
}

Emballage::~Emballage()
{
    cout << "Destructeur : Emballage / " << _format << endl;
}

void Emballage::Visualiser() {

    cout << " | " << setw(8) << left << _format;
    cout << " | " << setw(2) << right << _resistance << " kg";
    cout << " | " << _longueur << " X " << _largeur;
    if (_hauteur > 0) {
        cout << " X " << _hauteur << " |";
    } else {
        cout << "      " << " |";
    }
    cout << " Stock : " << _stock << endl;
}



