//
// Created by hugo- on 26/09/2021.
//

#ifndef MAZECHALLENGE_CASE_H
#define MAZECHALLENGE_CASE_H
#include "coordonee.h"

class Case{
protected:
    coordonnee coord;
public:
    Case(int x, int y){
        coord = new coordonnee(x, y);
    }
};

#endif //MAZECHALLENGE_CASE_H
