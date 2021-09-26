//
// Created by hugo- on 26/09/2021.
//

#ifndef MAZECHALLENGE_CHEMIN_H
#define MAZECHALLENGE_CHEMIN_H
#include "coordonee.h"

class Chemin: protected Case {
private:
    bool traversable = true;
public:
    Mur(int x, int y){
        coord = new coordonnee(x, y);
    }
};

#endif //MAZECHALLENGE_CHEMIN_H
