#include "vanne.h"

Vanne::Vanne(const gpio_num_t _brocheImpulsion, const gpio_num_t _sensA, const gpio_num_t _sensB)
    : impulsion(_brocheImpulsion), sensA(_sensA), sensB(_sensB){

cout << "Constructeur de vanne "   << endl ;

}

void Vanne :: Ouvrir () {
cout << "Ouverture de la vanne "<< impulsion << endl ;
}

void Vanne :: Fermer () {
cout << "Fermeture de la vanne "<< impulsion << endl ;
}


