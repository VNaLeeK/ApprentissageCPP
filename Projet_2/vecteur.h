
#ifndef VECTEUR_H
#define VECTEUR_H
class Vecteur
{
public:
    Vecteur(const int _x,const int _y);
    Vecteur();

    Vecteur operator+=(const Vecteur &_autre);
    Vecteur operator-(const Vecteur &_autre);
    Vecteur operator-=(const Vecteur &_autre);
    Vecteur operator*(const Vecteur &_autre);
    Vecteur operator*=(const Vecteur &_autre);

    int getX() const;
    void setX(const int _newX);
    int getY() const;
    void setY(const int _newY);

    Vecteur operator+ (const Vecteur &_autre);
    bool operator==(const Vecteur &_autre);
    void Afficher();
private:
    int x;
    int y;
};
#endif