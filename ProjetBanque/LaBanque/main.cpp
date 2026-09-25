#include <iostream>
#include "CompteBancaire.h"
#include "CompteEpargne.h"
#include "menu.h"

using namespace std;

//Consulter le solde = 1
//Montant à déposer = 2
//Montant à retirer = 3
//Sortie = 4

int main() {

// float soldeInitial ;
// cout << "Entrez le solde initial : " ;
// cin >> soldeInitial ;

// CompteBancaire monCompte(soldeInitial) ;
// Menu menuBancaire("compteBancaire.txt");


// int choix = 0 ;
// float montant ;


// while (choix != 4) {

// choix = menuBancaire.Afficher();

// //Consulter le solde = 1
// if (choix == 1) {

//     cout << "Solde : " << monCompte.ConsulterSolde() << " EUR" << endl;
//     Menu::AttendreAppuiTouche();

// }
// //Montant à déposer = 2
// else if (choix == 2) {

//     cout << "Montant a deposer : ";
//     cin >> montant;

//     if ( monCompte.Deposer(montant)) {
//         cout << "Depot effectuer ";
//     }
//     else {
//         cout << "Depot échec ";
//     }

//     monCompte.Deposer(montant);
//     Menu::AttendreAppuiTouche();

// }
// //Montant à retirer = 3
// else if (choix == 3) {

//     cout << "Montant a retirer : ";
//     cin >> montant;

//     if ( monCompte.Retirer(montant)) {
//         cout << "Retrait effectuer ";
//     }
//     else {
//         cout << "Retrait échec ";
//     }

//     monCompte.Retirer(montant);
//     Menu::AttendreAppuiTouche();

// }

// //Sortie = 4
// else if (choix == 4) {
// cout << "Au revoir !" << endl;
// return 0;
//      }
//   }


//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////


//Consulter le solde = 1
//Montant à déposer = 2
//Montant à retirer = 3
//Taux à calculer = 4
//Sortie = 5

float soldeInitial ;
int choix = 0 ;
float montant ;
float taux ;

cout << "Entrez le solde initial : " ;
cin >> soldeInitial ;

CompteEpargne monCompte(soldeInitial,taux) ;
Menu menuEpargne("compteEpargne.txt");

while (choix != 5) {

choix = menuEpargne.Afficher();

//Consulter le solde = 1
if (choix == 1) {

cout << "Solde : " << monCompte.ConsulterSolde() << " EUR" << endl;
Menu::AttendreAppuiTouche();

 }
//Montant à déposer = 2
else if (choix == 2) {

    cout << "Montant a deposer : ";
    cin >> montant;

if ( monCompte.Deposer(montant)) {

    cout << "Depot effectuer ";
  }
else {
        cout << "Depot échec ";
    }

    monCompte.Deposer(montant);
    Menu::AttendreAppuiTouche();

}
 //Montant à retirer = 3
else if (choix == 3) {

    cout << "Montant a retirer : ";
    cin >> montant;

     if ( monCompte.Retirer(montant)) {
         cout << "Retrait effectuer ";
     }
    else {
        cout << "Retrait échec ";
    }

     monCompte.Retirer(montant);
    Menu::AttendreAppuiTouche();

 }

//Taux à calculer = 4
else if (choix == 4) {
    cout << "Taux d'interet à effectuer: ";
    cin >> taux ;

    if ( monCompte.CalculerInterets(monCompte.ConsulterSolde(), taux)) {
        cout << "Taux effectuer " << monCompte.ConsulterSolde() << " EUR" << endl;
    }
    else {
        cout << "Taux échec ";
    }

    monCompte.CalculerInterets(montant,taux);
    Menu::AttendreAppuiTouche();

}

//Sortie = 5
else if (choix == 5) {
cout << "Au revoir !" << endl;
return 0;
      }
  }

























}