#include "emballage.h"
#include <iostream>

using namespace std;

int main() {

   Emballage emballagePile("XS_Pile", 1, 270, 190);
   Emballage* emballageTas = new Emballage("XL_Tas", 7, 383, 250, 195, 10);

   emballagePile.Visualiser();
   emballageTas->Visualiser();

   delete emballageTas;

   return 0 ;
}
