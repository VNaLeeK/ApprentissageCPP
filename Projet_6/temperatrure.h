#ifndef TEMPERATURE_H
#define TEMPERATURE_H
#include <string>
using namespace std;

const double ZERO_ABSOLU = -273.15 ;

enum ErrTemp
{
    ERR_VALEUR,
    ERR_CONVERSION
};

class ErreurTemperature
{
private:
         int codeErreur ;
         string message ;
public:
    ErreurTemperature(int _codeErreur, string _message) ;
    int ObtenirCode() const;
    string ObtenirMessage() const;
};

class Temperature
{
private:
    double valeur ;
public:
    Temperature(double _valeur);
    double EnKelvin() const;
    double EnFahrenheit() const;
    double ObtenirValeur() const;
    void Afficher() const;
};

#endif // TEMPERATURE_H