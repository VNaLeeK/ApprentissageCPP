#include <iostream>
#include "vecteur.h"
using namespace std;

int main()
{
    Vecteur va(5, 4);
    Vecteur vb(4, 4);

    // +=


    // va += vb;
    // va += va ;
    // cout << "Nouveau vecteur va : ";
    // va.Afficher();

    // -

    Vecteur vc = va - vb ;
    vc += va ;
    vc.setX(10);
    cout << "Vecteur vc : ";
    vc.Afficher();
    cout << "Nouveau X de vc : " << vc.getX() << endl;

    // -=


    // va -= vb;
    // va += va ;
    // cout << "Nouveau vecteur va : ";
    // va.Afficher();

    // *


    // Vecteur vc = va * vb ;
    // cout << "Vecteur vc : ";
    // vc.Afficher();

    // *=


    // va *= vb ;
    // va += va ;
    // cout << "Nouveau vecteur va : ";
    // va.Afficher();


    // Mutateur Accesseur
    // vc.setX(10);
    // cout << "Nouveau X de vc : " << vc.getX() << endl;



    return 0;
}
