//
// Created by hugo- on 23/09/2021.
//

#ifndef MAZECHALLENGE_JOUEUR_H
#define MAZECHALLENGE_JOUEUR_H
#include "coordonee.h"

class Joueur {
private:
    coordonnee coord;
    int nbTour;

public:
    Joueur(coordonnee startPos){
        coord=new coordonnee(startPos.getX(), startPos.getY());
        nbTour=0;
    }
};


#endif //MAZECHALLENGE_JOUEUR_H
