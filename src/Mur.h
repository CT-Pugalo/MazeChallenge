//
// Created by hugo- on 26/09/2021.
//

#ifndef MAZECHALLENGE_MUR_H
#define MAZECHALLENGE_MUR_H
#include "coordonee.h"

class Mur: protected Case{
private:
    bool traversable = false;
public:
    Mur(int x, int y){
        Case(x, y);
    }
};

#endif //MAZECHALLENGE_MUR_H
