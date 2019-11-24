#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>

#include "main.h"
#include "vector.h"
#include "complex.h"
#include "player.h"
#define COMPLEXE 1
#define PLAY 2
#define VECT 3

int main()
{
    int mode=1;
    printf(" Choose a mode : \n 1:Complexe \n 2:Player \n 3:Vector \n");
    scanf("Salut: %d", &mode);

    switch(mode){
    case COMPLEXE:

        printf(" --- COMPLEXE ---\n");
        /*
        Complex Y = createComplex();
        printf("Z = %d + %di \n", Y.real, Y.imaginary);
        */
        Complex Z;
        declareComplex(&Z);
        printf("Z = %d + %di \n", Z.real, Z.imaginary);
        
        break;

    case PLAY:
        printf(" --- PLAYER ---\n");
        Player P;
        new_Player(&P);
        break;

    case VECT:
        printf(" --- VECT ---\n");
        struct Vect U, V;
        declareVec(&U, &V);
        printf("%d", V.x);
        break;

    default:
        printf("Choose smthg else :@ \n");
        break;
    }
    
    
    return 0;
}

