#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#include "complex.h"
#define FUNCCOMPLEXE 1
#include "vect.h"
#define FUNCVECT 2
#define FUNCPLAY 3


int main()
{
    int mode=1;
    printf(" Choose a mode : \n 1:Complexe \n 2:Vector \n 3:Player \n");
    scanf("%d", &mode);

    switch (mode)
    {
    case FUNCCOMPLEXE:
        modeComplex();
        break;

    case FUNCVECT:
        printf("FUNVECT");
        struct Vect U, V;
        declareVec(&U, &V);
        break;

    default:
        printf("Choose smthg else :@ \n");
        break;

    }

    return 0;

}
