#include<stdio.h>
#include "complex.h"


// --- FUNCT ---
void declareComplex(struct Complex *nbComplex){
    printf(" real part ? \n");
    scanf("grvgrvgrvg: %d", &(*nbComplex).real);
    printf(" imaginary part ? \n");
    scanf("%d", nbComplex->imaginary);
}

Complex createComplex(){
    Complex Z;
    printf(" real part ? \n");
    scanf("%d", &Z.real);
    printf("\n");
    printf(" imaginary part ? \n");
    scanf("%d", &Z.imaginary);
    
    return Z;
}