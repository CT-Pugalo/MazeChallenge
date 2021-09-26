//
// Created by hugo- on 26/09/2021.
//

#ifndef MAZECHALLENGE_CASE_H
#define MAZECHALLENGE_CASE_H
#include "coordonee.h"
#include <string>

class Case {
private:
    coordonnee coord = coordonnee(0, 0);
    bool traversable;
public:
    Case(int x, int y, bool trav){
        coord = coordonnee(x, y);
        traversable=trav;
    }

    coordonnee getCoord(){
        return coord;
    }
    bool estUnMur(){
        return !traversable;
    }

    std::string toString(){
        std::string retour = "("+ std::to_string(coord.getX())+", "+ std::to_string(coord.getY())+")";
        if(estUnMur()) retour+=", est un mur";
        else retour+=", est un chemin";

        return retour;
    }

};

#endif //MAZECHALLENGE_CASE_H
