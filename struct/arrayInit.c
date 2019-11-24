#include<stdio.h>
#include "arrayInit.h"
   
   
    int array[5]={0};
    int i;
void initArray(){

    for (i=0; i<5; i++)
        array[i]=1+i; 

    for(i=0; i<5; i++)
        printf("[%d] ", array[i]);
}