//
// Created by Federico Cassano on 17/01/2020.
//

#include <iostream>
struct punto {float x,y;};
struct triangolo {punto vertici[3];};

int main(){
    triangolo t1; //creo un triangolo
    for (int i=0;i<3;i++) {
        printf("x,y del punto n. %3d ", i+1);
        scanf("%f %f",& (t1.vertici[i].x),& (t1.vertici[i].y));
    }

    for (int i=0;i<3;i++) {
        printf("x,y del punto n. %3d: %f %f\n ", i+1, t1.vertici[i].x, t1.vertici[i].y);
    }
}