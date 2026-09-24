#include "barre.h"
#include <iostream>

using namespace std;


barre::barre(const string _ref , const float _longueur , const float _densite , const string _nomdelalliage ) :
    ref(_ref), longueur(_longueur) , densite(_densite) , nomdelalliage(_nomdelalliage) {

    cout << "[Constructeur]" << endl;

}

void barre::AfficherCara() {

    cout << "                                           " << endl;
    cout << "Voici la ref : " << ref << endl ;
    cout << "Voici la longueur : " << longueur << "m" << endl ;
    cout << "Voici la densite : " << densite << "kg/m3" << endl ;
    cout << "Voici le nom de l'alliage : " << nomdelalliage << endl ;
}

