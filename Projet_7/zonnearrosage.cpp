#include "zonnearrosage.h"

ZoneArrosage::ZoneArrosage(const int _numZone, const int _commandeVanne, const int _senseAVanne, const int _senseBVanne, const int _brocheHumidite):
    laVanne(_commandeVanne,_senseAVanne,_senseBVanne),
    numZone(_numZone)
{

    cout << "Constructeur de ZonneArrosage " << endl ;

}

