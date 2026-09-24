#include "barrerectangle.h"
#include "barre.h"
#include <iostream>

using namespace std;

barrerectangle::barrerectangle(const string _ref , const float _longueur , const float _densite , const string _nomdelalliage, const float _largeur , const float _hauteur) :
    barre(_ref, _longueur, _densite, _nomdelalliage), largeur(_largeur) , hauteur(_hauteur) {

    cout << "[Constructeur]"<< endl;
}

float barrerectangle::CalculerSection() const {

    return largeur * hauteur ;
}

float barrerectangle::CalculerMasse() const {

    return  longueur * CalculerSection () * densite;
}

void barrerectangle::AfficherCararectangle() {

    cout << "                                           " << endl;
    cout << "Voici la ref : " << ref << endl ;
    cout << "Voici la longueur : " << longueur << "m" << endl ;
    cout << "Voici la densite : " << densite << "kg/m3" << endl ;
    cout << "Voici le nom de l'alliage : " << nomdelalliage << endl ;
    cout << "Voici la largeur : " << largeur << "mm" << endl ;
    cout << "Voici la hauteur : " << hauteur << "mm" << endl ;
    cout << "Section : " << CalculerSection() << " mm²" << endl;
    cout << "                                           " << endl;
}

