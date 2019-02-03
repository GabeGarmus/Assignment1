//
// Created by Gabe Garmus on 1/30/19.
//

#ifndef GAME_CROSSBOW_H
#define GAME_CROSSBOW_H

#include "Weapon.h"

/* the cross bow very powerful unless armor is high, thus damage is 75,
 * unless armor is above 20, in which case it becomes %10 of the original damage */

class CrossBow : public Weapon {
public:

    CrossBow() : Weapon("Cross Bow",75.0) //Calls Weapon(name, hitpoints) constructor
    {
    }

    virtual ~CrossBow() {};

    virtual double hit(double armor);

};

#endif //GAME_CROSSBOW_H
