#ifndef VANNE_H
#define VANNE_H
#define gpio_num_t int
#include <iostream>
using namespace std ;
/**
 * @file vanne.h
 * @author Keelan VERCHAIN
 * @date 22/09/26
 * @version 1.0
 * @brief Implémentation de la classe Vanne
 */
class Vanne
{
public:
    Vanne(const gpio_num_t _brocheImpulsion,const gpio_num_t _sensA,const gpio_num_t _sensB);
    void Ouvrir();
    void Fermer();
private:
    gpio_num_t impulsion;
    gpio_num_t sensA;
    gpio_num_t sensB;
};
#endif // VANNE_H