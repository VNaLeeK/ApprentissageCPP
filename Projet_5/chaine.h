#ifndef CHAINE_H
#define CHAINE_H

class Chaine
{
private:
    char *contenu;
    int    longueur;
public:
    Chaine();
    Chaine( const char * _texte );
    Chaine( const Chaine & _src );
    ~Chaine();
    Chaine & operator=( const Chaine & _src );
    void afficher() const;
};

#endif
