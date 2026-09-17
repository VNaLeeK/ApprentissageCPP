#ifndef EMBALLAGE_H
#define EMBALLAGE_H
#include <string>
#include <iostream>

using namespace std;

class Emballage {

public :

Emballage (string format, int resistance, int longueur, int largeur, int hauteur = 0, int stock = 0);

~Emballage();

void Visualiser() ;

private :
    int _resistance ;
    string _format ;
    int _longueur ;
    int _largeur ;
    int _hauteur ;
    int _stock ;
};


#endif // EMBALLAGE_H
