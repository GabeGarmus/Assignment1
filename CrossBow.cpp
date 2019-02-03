//
// Created by Gabe Garmus on 1/30/19.
//

#include "CrossBow.h"

double CrossBow::hit(double armor) {
   double damage;

   /*if armor is above 20 then the damage is only %10 of the original hit points */
    if(armor > 20)
    {
        damage = (hitPoints * .1) - armor;
    } else {
        damage = hitPoints - armor ;
    }
    if (damage < 0) {
        return 0;
    }
    return damage;
}
