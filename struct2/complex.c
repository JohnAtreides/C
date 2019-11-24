#include<stdio.h>
#include "complex.h"

#define COMPLEXMODE_POINTER 1
#define COMPLEXMODE_NOPOINTER 2


// --- FUNCT ---
void noPointerComplex(struct Complex *nbComplex)
{
    printf(" real part ? \n");
    scanf("%d", &(*nbComplex).real);
    printf(" imaginary part ? \n");
    scanf("%d", &nbComplex->imaginary);
}

//======================================================

Complex pointerComplex()
{
    Complex Z;
    printf(" real part ? \n");
    scanf("%d", &Z.real);
    printf("\n");
    printf(" imaginary part ? \n");
    scanf("%d", &Z.imaginary);

    return Z;
}

//======================================================

void modeComplex()
{
    int modeComplex=0; //there are 2 function, one using pointer, one without.
    while ( (modeComplex!=1) && (modeComplex!=2) )
    {

        printf(" - COMPLEXE -\n");
        printf(" Choose a Complexe Mode : \n 1:Pointer \n 2:No Pointer \n");
        scanf("%d", &modeComplex);

        switch(modeComplex)
        {
        case COMPLEXMODE_NOPOINTER:
            printf("\n----------------------- \n");
            printf(" -- Without Pointeur -- \n");
            Complex C;
            noPointerComplex(&C);
            printf("Z = %d + %di \n", C.real, C.imaginary);
            break;

        case COMPLEXMODE_POINTER:
            printf("\n----------------------- \n");
            printf(" -- With Pointeur -- \n");
            Complex Y = pointerComplex();
            printf("Z = %d + %di \n", Y.real, Y.imaginary);
            break;

        default:
            printf(" Choose smthg else :@ \n\n\n");
            break;

        }
    }
}

//======================================================
