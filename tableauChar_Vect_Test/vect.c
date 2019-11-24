#include<stdio.h>
#include <string.h>
#include "vect.h"

// --- FUNCT ---

void declareVec(struct Vect *U1, struct Vect *V2)
{
    printf(" -- U1 --\n");
    printf(" X1 ?\n");
    scanf("%d", &U1->x);
    printf(" Y1 ?\n");
    scanf("%d", &U1->y);
    printf(" Z1 ?\n");
    scanf("%d", &(*U1).z);

    printf(" -- V2 --\n");
    printf(" X2 ?\n");
    scanf("%d", &V2->x);
    printf(" Y2 ?\n");
    scanf("%d", &V2->y);
    printf(" Z2 ?\n");
    scanf("%d", &V2->y);
}

displayVec()
{

    char tabV[32];



    return strcpy(tabV, "In my tabV");



    int tabV[3];
}


void vecxvec(struct Vect *V2)
{
    V2->x = 10;

}
