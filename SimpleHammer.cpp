//
// Created by Gabe Garmus on 1/30/19.
//

#include "SimpleHammer.h"


double SimpleHammer::hit(double armor){

    double damage = 0;

   // damage including armor if armor level is 30 and above
    if(armor >= 30)
     damage = hitPoints - armor;
// ignoring armor protection if its below 30
    else
        damage = hitPoints;

    if(damage < 0){
        return 0;
    }
    return damage;
}