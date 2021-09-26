//
// Created by hugo- on 26/09/2021.
//

#ifndef MAZECHALLENGE_MAZE_H
#define MAZECHALLENGE_MAZE_H
#include <map>
#include "Mur.h"
#include "Chemin.h"
//#include "Joueur.h"

class Maze {
private:
    int taille;
    std::map<coordonnee, Mur> murs;
    std::map<coordonnee, Chemin> chemins;
    //Jouer joueur;
    void initialiserMaze(){

    }
};

#endif //MAZECHALLENGE_MAZE_H
