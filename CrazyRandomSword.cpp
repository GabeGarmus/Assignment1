//
// Created by Gabe Garmus on 1/30/19.
//

#include "CrazyRandomSword.h"
#include <cstdlib> //for rand num
#include <ctime> //need fo rand() function
#include <cmath> //for the floor function

#include <iostream>

double CrazyRandomSword::hit(double armor) {


    srand((unsigned) time(0)); //seeding the rand generator
    int maxArmour = ((int) armor/3) - 2; //subtracting two since thats the min we can ignore
    double ignoreArmour = (rand() % maxArmour) +2;  /* added the min which is 2 to get 2 thru 1/3(amror) */

    double damage = hitPoints - ignoreArmour;
    if (damage < 0) {
        return 0;
    }
    return damage;
}


