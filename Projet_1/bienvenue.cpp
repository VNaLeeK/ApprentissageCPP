#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
int main() {

    //TABLEAU

    // string nomDuFichier;
    // cout << "Entrer le nom du fichier à lire : ";
    // cin >> nomDuFichier;
    // ifstream leFichier(nomDuFichier.c_str());
    // if (!leFichier.is_open())
    //     cerr << "Erreur lors de l'ouverture du fichier" << endl;
    // else
    // {
    //     string pays;
    //     int nbOr;
    //     int nbArgent;
    //     int nbBronze;
    //     cout << "+" << setfill('-') << setw(20) << "+" << setw(8) << "+" << setw(8) << "+" << setw(8) << "+" << endl;
    //     cout << setfill(' ');
    //     do
    //     {
    //         leFichier >> pays >> nbOr >> nbArgent >> nbBronze;
    //         if (leFichier.good())
    //         {
    //             cout << "| " << left << setw(17) << pays << " | " << right << setw(5) << nbOr << " | " << setw(5) << nbArgent << " | " << setw(5) << nbBronze << " |" << endl;
    //         }
    //     } while (!leFichier.eof());
    //     cout << "+" << setfill('-') << setw(20) << "+" << setw(8) << "+" << setw(8) << "+" << setw(8) << "+" << endl;
    // }


    //FICHIER TEXTE


        string nomFichierEntree;
        string nomFichierSortie;

        cout << "Entrer le nom du fichier a lire : ";
        cin >> nomFichierEntree;
        cout << "Entrer le nom du fichier de sortie (ex: resultat.txt) : ";
        cin >> nomFichierSortie;


        ifstream leFichier(nomFichierEntree.c_str());
        ofstream fichierSortie(nomFichierSortie.c_str());


        if (!leFichier.is_open()) {
            cerr << "Erreur lors de l'ouverture du fichier d'entree" << endl;
            return 1;
        }
        if (!fichierSortie.is_open()) {
            cerr << "Erreur lors de l'ouverture du fichier de sortie" << endl;
            return 1;
        }

        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;


        fichierSortie << "+" << setfill('-') << setw(20) << "+" << setw(8) << "+" << setw(8) << "+" << setw(8) << "+" << endl;
        fichierSortie << setfill(' ');


        while (leFichier >> pays >> nbOr >> nbArgent >> nbBronze) {
            fichierSortie << "| " << left << setw(17) << pays
                          << " | " << right << setw(5) << nbOr
                          << " | " << setw(5) << nbArgent
                          << " | " << setw(5) << nbBronze << " |" << endl;
        }


        fichierSortie << "+" << setfill('-') << setw(20) << "+" << setw(8) << "+" << setw(8) << "+" << setw(8) << "+" << endl;


        leFichier.close();
        fichierSortie.close();

        cout << "Le tableau a ete genere avec succes dans le fichier : " << nomFichierSortie << endl;

        return 0;
    }


