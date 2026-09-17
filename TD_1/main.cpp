#include "emballage.h"
#include <iostream>

using namespace std;

int main() {
   // PILE ET TAS
   // Emballage emballagePile("XS_Pile", 1, 270, 190);
   // Emballage* emballageTas = new Emballage("XL_Tas", 7, 383, 250, 195, 10);

   // emballagePile.Visualiser();
   // emballageTas->Visualiser();

   // delete emballageTas;



   // TABLEAU POINTEURS
   // Emballage* catalogue[5];

   // string formats[5] = {"XS" , "S" , "M" , "L" , "XL"} ;
   // int resistance[5] = {1 , 2 , 3 , 4 , 5} ;
   // int longueur[5] = {270 , 300 , 320 , 340 , 350} ;
   // int largeur[5] = {190 , 210 , 230 , 245 , 260} ;
   // int hauteur[5] = {0 , 0 , 40 , 90 , 195} ;
   // int i ;

   // for (i = 0; i < 5 ; i++) {
   //     catalogue[i] = new Emballage(formats[i], resistance[i], longueur[i], largeur[i], hauteur[i]);
   // }

   // for (int i = 0; i < 5 ; i++) {
   //     catalogue[i]->Visualiser();
   // }

   // for (i = 0; i < 5 ; i++) {
   //     delete catalogue[i];

   // }



   //SURCHARGE OPÉRATEURS
   Emballage colis1("M", 3, 320, 230, 0);
   Emballage colis2("L", 4, 340, 245, 900);
   Emballage colis3("M", 3, 320, 230, 0);

   // <
   // if (colis1 < colis2) {
   //     cout << "Le colis1 a un plus petit volume que le colis2." << endl;
   // } else {
   //     cout << "Le colis2 a un plus petit volume que le colis1." << endl;
   // }


   // ==
   if (colis3 == colis1) {
       cout << "colis3 est Identique a colis1." << endl;
   } else {
       cout << "colis3 est Different de colis1." << endl;
   }

   if (colis3 == colis2) {
       cout << "colis3 est Identique a colis2." << endl;
   } else {
       cout << "colis3 est Different de colis2." << endl;
   }

   return 0 ;
}




