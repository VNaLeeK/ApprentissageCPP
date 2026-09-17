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

bool Emballage::operator<(const Emballage& autre) {

    float volume1 ;
    float volume2 ;

    if( _hauteur > 0 ) {

        volume1 = _longueur * _largeur * _hauteur;
        volume1 = volume1 / 1000.0 ;
    }

    else {

        volume1 = _longueur * _largeur ;
        volume1 = volume1 / 100.0 ;

    }


    if( _hauteur > 0 ) {

        volume2 = autre._longueur * autre._largeur * autre._hauteur;
        volume2 = volume2 / 100.0 ;
    }

    else {

        volume2 = autre._longueur * autre._largeur ;
        volume2 = volume2 / 1000.0 ;

    }

    return volume1 < volume2 ;

}

bool Emballage::operator==(const Emballage& autre) {

    if (_format == autre._format &&
        _longueur == autre._longueur &&
        _largeur == autre._largeur &&
        _hauteur == autre._hauteur &&
        _resistance == autre._resistance ) {

        return 1 ;
    }

    else {
        return 0 ;
    }

}


