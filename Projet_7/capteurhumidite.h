#ifndef CAPTEURHUMIDITE_H
#define CAPTEURHUMIDITE_H
#define gpio_num_t int
#include <iostream>
using namespace std ;

class CapteurHumidite {
private:
    gpio_num_t brocheCapteur;

public:
    CapteurHumidite(gpio_num_t in_brocheCapteur);
    int MesurerHumiditeDuSol();
};
#endif // CAPTEURHUMIDITE_H
