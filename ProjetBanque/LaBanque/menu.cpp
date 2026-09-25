#include "menu.h"
#include <fstream>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <cstdlib>
#include <limits>
#include <iomanip>

using namespace std;

Menu::Menu(const string &_nom) : nom(_nom), longueurMax(0)
{
    ifstream fichierMenu(nom.c_str());

    if (!fichierMenu.is_open())
    {
        cerr << "Erreur de lecture du fichier : " << nom << endl;
        nbOptions = 0;
        options = nullptr;
    }
    else
    {
        nbOptions = static_cast<int>(count(istreambuf_iterator<char>(fichierMenu), istreambuf_iterator<char>(), '\n'));

        options = new string[nbOptions];

        fichierMenu.seekg(0, ios::beg);

        for (int i = 0; i < nbOptions; ++i)
        {
            string uneOption;
            if (getline(fichierMenu, uneOption))
            {

                if (!uneOption.empty() && uneOption.back() == '\r')
                {
                    uneOption.pop_back();
                }

                options[i] = uneOption;

                if (static_cast<int>(options[i].length()) > longueurMax)
                {
                    longueurMax = static_cast<int>(options[i].length());
                }
            }
        }

        fichierMenu.close();
    }
}

Menu::~Menu()
{
    if (options != nullptr)
    {
        delete[] options;
        options = nullptr;
    }
}

int Menu::Afficher()
{
    int choix = -1;

#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif


    int largeurCadre = longueurMax + 6;


    cout << "+" << string(largeurCadre, '-') << "+" << endl;


    for (int i = 0; i < nbOptions; ++i)
    {
        cout << "| " << setw(1) << right << (i + 1) <<  " | "
             << left << setw(longueurMax) << options[i] << " |" << endl;
    }


    cout << "+" << string(largeurCadre, '-') << "+" << endl;
    cout << "Votre choix : ";


    if (!(cin >> choix))
    {
        cin.clear();
        choix = -1;
    }


    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return choix;
}

void Menu::AttendreAppuiTouche()
{
    string uneChaine;
    cout << endl << "appuyer sur la touche Entrée pour continuer...";
    getline(cin, uneChaine);
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    system("clear");
}