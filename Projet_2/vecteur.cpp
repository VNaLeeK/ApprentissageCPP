#include <iostream>
#include "vecteur.h"
using namespace std;

int Vecteur::getX() const
{
    return x;
}

void Vecteur::setX(const int _newX)
{
    x = _newX;
}

int Vecteur::getY() const
{
    return y;
}

void Vecteur::setY(const int _newY)
{
    y = _newY;
}

Vecteur::Vecteur(const int _x, const int _y) {
    x = _x;
    y = _y;
}

Vecteur Vecteur::operator+=(const Vecteur &_autre) {
    x = x + _autre.x;
    y = y + _autre.y;
    return Vecteur(x, y);
}

Vecteur Vecteur::operator-(const Vecteur &_autre) {
    x = x - _autre.x;
    y = y - _autre.y;
    return Vecteur(x, y);
}

Vecteur Vecteur::operator-=(const Vecteur &_autre) {
    x = x - _autre.x;
    y = y - _autre.y;
    return Vecteur(x, y);
}


Vecteur Vecteur::operator*(const Vecteur &_autre) {
    x = x * _autre.x;
    y = y * _autre.y;
    return Vecteur(x, y);
}

Vecteur Vecteur::operator*=(const Vecteur &_autre) {
    x = x * _autre.x;
    y = y * _autre.y;
    return Vecteur(x, y);
}

void Vecteur::Afficher() {
    cout << "(" << x << ", " << y << ")" << endl;
}
