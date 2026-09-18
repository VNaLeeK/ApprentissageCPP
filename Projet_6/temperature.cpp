#include "temperatrure.h"
#include <iostream>
using namespace std;

// ── ErreurTemperature ───────────────────────────
ErreurTemperature::ErreurTemperature(int _codeErreur, string _message) :
      codeErreur(_codeErreur), message(_message) // liste d'initialisation
{
}
int ErreurTemperature::ObtenirCode() const
{
    return codeErreur ;
}
string ErreurTemperature::ObtenirMessage() const
{
    return message ;
}

// ── Temperature ─────────────────────────────────
Temperature::Temperature(double _valeur) : valeur(_valeur) // liste d'initialisation
{
    if(_valeur < ZERO_ABSOLU)
    {
        ErreurTemperature excep(ERR_VALEUR, "Valeur inférieure au zéro absolu");
        throw (excep);
    }
}
double Temperature::EnKelvin() const
{
    return valeur + 273.15 ;
}
double Temperature::EnFahrenheit() const
{
    return valeur * 9/5 + 32 ;
}
double Temperature::ObtenirValeur() const
{
    return valeur ;
}
void Temperature::Afficher() const
{
    cout << valeur << " °C" << endl;
}
