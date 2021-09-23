#include <iostream>
#include "coordonee.h"


using namespace std;
int main(){
    int x, y;
    cout<<"etrer x et y\n";
    cin>>x>>y;
    coordonnee coord {x, y};
    coord.afficher();
    coord.bouger('h');
    coord.afficher();
}