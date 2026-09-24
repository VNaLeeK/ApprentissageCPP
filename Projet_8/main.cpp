#include "barre.h"
#include "barrecarre.h"
#include "barrerectangle.h"
#include "barreronde.h"
#include <iostream>

using namespace std;

int main () {

    barreronde ronde("1", 2.5, 7850.0, "Carbone", 20.0);
    ronde.AfficherCararond();

    barrerectangle rectangle("2", 4.0, 2700.0, "Aluminium", 50.0, 30.0);
    rectangle.AfficherCararectangle();

    barrecarre carree("3", 1.5, 8400.0, "Laiton", 15.0);
    carree.AfficherCaracarre();

    return 0;
}