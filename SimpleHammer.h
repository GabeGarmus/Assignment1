//
// Created by Gabe Garmus on 1/29/19.
//

#include "Weapon.h"

/* defining a simple hammer */

#ifndef ASSIGNMENT1_DEVELOPMENT_SIMPLEHAMMER_H
#define ASSIGNMENT1_DEVELOPMENT_SIMPLEHAMMER_H

class SimpleHammer :  public Weapon{

public:

    SimpleHammer() : Weapon("Simple Hammer", 25){};

    virtual ~SimpleHammer() {};

    virtual double hit(double armour);




private:

};



#endif //ASSIGNMENT1_DEVELOPMENT_SIMPLEHAMMER_H
