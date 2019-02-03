//
// Created by Gabe Garmus on 1/30/19.
//

#ifndef ASSIGNMENT1_DEVELOPMENT_CRAZYRANDOMSWORD_H
#define ASSIGNMENT1_DEVELOPMENT_CRAZYRANDOMSWORD_H


#include "Weapon.h"
#include <cstdlib> //for rand num
#include <ctime> //need fo rand() function
#include <cmath> //for the floor function

class CrazyRandomSword : public Weapon {

public:

    /* getting the random hit points here */
    CrazyRandomSword() : Weapon("Crazy Random Sword", 7){
        //getting a random number between 7 and 100
        srand((unsigned) time(0));
        double random = (rand() % 93) + 7;
        hitPoints = floor(random);
    };


    virtual ~CrazyRandomSword(){};

    virtual double hit(double armor);

};


#endif //ASSIGNMENT1_DEVELOPMENT_CRAZYRANDOMSWORD_H
