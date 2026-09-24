#include "barreronde.h"
#include "barre.h"
#include <iostream>

using namespace std;


barreronde::barreronde(const string _ref , const float _longueur , const float _densite , const string _nomdelalliage, const float _rayon) :
    barre(_ref, _longueur, _densite, _nomdelalliage), rayon(_rayon) {

    cout << "[Constructeur]" << endl;
}


float barreronde::CalculerSection() const {

    return 3.141592653589793f * rayon * rayon;
}


float barreronde::CalculerMasse() const {

    return longueur * CalculerSection() * densite;
}


void barreronde::AfficherCararond() {

    cout << "                                           " << endl;
    cout << "Voici la ref : " << ref << endl ;
    cout << "Voici la longueur : " << longueur << "m" << endl ;
    cout << "Voici la densite : " << densite << "kg/m3" << endl ;
    cout << "Voici le nom de l'alliage : " << nomdelalliage << endl ;
    cout << "Voici le rayon : " << rayon << "mm" << endl ;
    cout << "Section : " << CalculerSection() << " mm²" << endl;
    cout << "                                           " << endl;
}