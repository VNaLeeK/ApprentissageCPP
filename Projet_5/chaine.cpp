#include "chaine.h"
#include <cstring>
#include <iostream>

Chaine::Chaine( const char * _texte )
    : longueur( strlen(_texte) ),
    contenu ( new char[longueur + 1] )
{
    for (int i = 0; i < longueur; i++) {
        contenu[i] = _texte[i];
    }
    contenu[longueur] = '\0';
}

Chaine::Chaine( const Chaine & _src )
    : longueur( _src.longueur ),
    contenu ( new char[longueur + 1] )
{
    for (int i = 0; i < longueur; i++) {
        contenu[i] = _src.contenu[i];
    }
    contenu[longueur] = '\0';
}

Chaine::~Chaine()
{
    delete[] contenu ;
}

Chaine & Chaine::operator=( const Chaine & _src )
{
    if ( this != &_src )
    {
        delete[] contenu ;
        longueur = _src.longueur ;
        contenu  = new char[longueur + 1] ;
        for (int i = 0; i < longueur; i++) {
            contenu[i] = _src.contenu[i];
        }
        contenu[longueur] = '\0';
    }
    return *this ;
}

Chaine::Chaine()
    : longueur(0),
    contenu(new char[1])
{
    contenu[0] = '\0';
}


void Chaine::afficher() const
{
    std::cout << contenu << std::endl;
}
