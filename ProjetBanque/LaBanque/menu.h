#ifndef MENU_H
#define MENU_H


#include <string>

using namespace std;

class Menu {
private:
    string nom;
    string* options;
    int nbOptions;
    int longueurMax;

public:
    Menu(const std::string& nomFichier);
    ~Menu();
    int Afficher();
    void Afficher() const;
    static void AttendreAppuiTouche();
};

#endif