#include<stdio.h>
#include "player.h"

// --- FUNCT ---
void new_Player(struct Player *P){
    printf(" --- Welcome to the Game --- \n");
    printf(" --- New Player --- \n");
    
    printf(" Pseudo ? \n");
    scanf("%s", (*P).pseudo);

    printf(" Class ? \n");
    scanf("%s", (*P).classs);

    printf(" Gender ? \n 1:Male | 2:Female \n");
    scanf("%d", &(*P).gender);

    printf(" lvl ? \n");
    scanf("%d", &(*P).lvl);

    printf("Pseudo : %s \n", (*P).pseudo);
    printf("Class : %s \n", (*P).classs);
    printf("Gender : %d \n", (*P).gender);
    printf("lvl : %d \n", (*P).lvl);

}