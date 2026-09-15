#ifndef COMPTEUR_H
#define COMPTEUR_H

#include <iostream>

class Compteur
{
public:
    Compteur(const int _valeurInit = 0, const int _pas = 1);
    ~Compteur();

    void incrementer();
    void decrementer();
    void reinitialiser();

    int getValeur() const;
    void setValeur(const int _newValeur);

    int getPas() const;
    void setPas(const int _newPas);

    Compteur operator+(const Compteur &_autre) const;
    bool operator==(const Compteur &_autre) const;

    void Afficher() const;

    // Fonction amie pour l'affichage avec cout <<
    friend std::ostream& operator<<(std::ostream &_flux, const Compteur &_autre);

private:
    int valeur;
    int pas;
};

#endif // COMPTEUR_H