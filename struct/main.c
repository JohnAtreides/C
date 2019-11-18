#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>



void declareVec(struct Vector U1, struct Vector V2)
{
    printf(" -U1-\n");
    printf(" X1 ?\n");
    scanf("%d", &U1->x);
    printf(" Y1 ?\n");
    scanf("%d", &U1->y);
    printf(" Z1 ?\n");
    scanf("%d", &U1->z);

    printf(" -V2-\n");
    printf(" X2 ?\n");
    scanf("%d", &V2->x);
    printf(" Y2 ?\n");
    scanf("%d", &V2->y);
    printf(" Z2 ?\n");
    scanf("%d", &V2->y);
}

void vecxvec(struct Vector, struct Vector)
{
    Vector.x = 10;
}

int main()
{

    printf("Hello world!\n");

    return 0;
}
