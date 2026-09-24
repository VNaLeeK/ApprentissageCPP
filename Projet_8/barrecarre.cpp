#include "barrecarre.h"
#include "barre.h"
#include <iostream>

using namespace std;

barrecarre::barrecarre(const string _ref , const float _longueur , const float _densite , const string _nomdelalliage , const float _cote) :
    barre(_ref, _longueur, _densite, _nomdelalliage) , cote(_cote) {

    cout << "[Constructeur]" << endl;
}

float barrecarre::CalculerSection() const {

    return   cote * cote ;
}

float barrecarre::CalculerMasse() const {

    return  longueur * CalculerSection () * densite;
}


void barrecarre::AfficherCaracarre() {

    cout << "                                           " << endl;
    cout << "Voici la ref : " << ref << endl ;
    cout << "Voici la longueur : " << longueur << "m" << endl ;
    cout << "Voici la densite : " << densite << "kg/m3" << endl ;
    cout << "Voici le nom de l'alliage : " << nomdelalliage << endl ;
    cout << "Voici le coté : " << cote << "mm" << endl ;
    cout << "Section : " << CalculerSection() << " mm²" << endl;
    cout << "                                           " << endl;
}