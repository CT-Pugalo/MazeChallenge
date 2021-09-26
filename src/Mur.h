//
// Created by hugo- on 26/09/2021.
//

#ifndef MAZECHALLENGE_MUR_H
#define MAZECHALLENGE_MUR_H
#include "coordonee.h"

class Mur{
private:
    coordonnee coord;
    bool traversable = false;
public:
    Mur(int x, int y){
        coord = new coordonnee(x, y);
    }
};

#endif //MAZECHALLENGE_MUR_H
