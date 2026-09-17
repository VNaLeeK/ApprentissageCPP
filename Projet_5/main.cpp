#include "chaine.h"
#include <iostream>

int main()
{
    Chaine c1( "Bonjour" );
    Chaine c2( c1 );
    Chaine c3;
    c3 = c1;
    c1.afficher();
    c2.afficher();
    c3.afficher();

    return 0;
}