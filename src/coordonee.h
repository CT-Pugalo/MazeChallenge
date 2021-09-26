//
// Created by hugo- on 23/09/2021.
//

#ifndef MAZECHALLENGE_COORDONEE_H
#define MAZECHALLENGE_COORDONEE_H

#include <string>


class coordonnee {
private:
    int x;
    int y;
public:
    coordonnee(int x, int y){
        this->x=x;
        this->y=y;
    }
    void setX(int x){
        this->x=x;
    }
    void setY(int y){
        this->y=y;
    }

    int getX(){
        return this->x;
    }
    int getY(){
        return this->y;
    }

    void bouger(char direction){
        if(direction=='h'){
            this->y+=1;
        }else if(direction=='b'){
            this->y-=1;
        }else if(direction=='g'){
            this->x+=1;
        }else if(direction=='d'){
            this->x-=1;
        }
    }

    std::string toString(){
        return "("+ std::to_string(this->getX())+", "+ std::to_string(this->getY())+")";
    }
    void afficher(){
        toString();
    }
};


#endif //MAZECHALLENGE_COORDONEE_H
