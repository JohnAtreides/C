/*
Perso j'aurai voulu, faire plusieurs fonctions toutes séparées, puis les appeler avec des paramètres en entrée une par une dans le main..
Mais j'ai été contraint par ce que renvoyait choice, mode ou callgame. J'ai fini par la fonction difficulty.

Merci et bonne lecture
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// variables globales
int difficulte=0;
int MIN = 1, MAX = 100;
int r, m, a;

// prototypes
int callgame(int choice);
int difficulty();
int jeu(int);

int difficulty()
{
    printf("    MorOrLess\n");
    printf("\n  --== Difficulty ==--\n\n");
    printf("\n Choisissez un niveau de difficulte : ");
    printf("\n  ---> 1");
    printf("\n  ---> 2");
    printf("\n  ---> 3");
    printf("\n\n    --->");
    scanf("\n%d", &difficulte);
    printf("\n niveau %d\n", difficulte);

    switch (difficulte)
    {
    case 1:
        srand(time(NULL));
        MAX = 100;
        break;

    case 2:
        srand(time(NULL));
        MAX = 1000;
        break;

    case 3:
        srand(time(NULL));
        MAX = 10000;
        break;
    default:
        MAX = 10000000;
        printf("\n------  Ce sera hyyyyper long !! :o ------\n");
    }
    return MAX;
}

// ---- Appelle le jeu()  choix difficulté, ask mode 1 or 2 player ----
int callgame(int choice)
{
    int nbMys=-1;
    int r=-1;


    switch (choice)
    {

    case 1:
        srand(time(NULL));
        nbMys = (rand() % (MAX - MIN + 1)) + MIN; //gérération du nbMyst aléatoire
        //printf("%d\n", nbMys); // test phase : to be sure the Mystery number is between 1 and 100.
        r=jeu(nbMys);
        break;

    case 2:
        nbMys=48;
        printf("\n Player 1, enter a number between 1 and %d:", MAX);
        scanf("%d", &nbMys);
        printf("\ndon't look up =p \n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\ndon't look up =p ");// pour pas voir le chiffre rentre :)
        r=jeu(nbMys);
        break;

    default:
        printf("poueeeet\n");
        break;
    }
    return r;
}


// ---- Choix du mode 1 ou 2 joueurs ----
int mode()
{
    int choice, gamode;

    printf("    MorOrLess\n");
    printf("\n  --== Mode ==--\n\n");
    printf(" 1 player : Press 1\n");
    printf(" 2 players : Press 2\n");

    scanf("%d", &choice);
    printf("\n choice = %d \n", choice);

    gamode=(choice==1) ? printf("\n You choose 1 player mode\n"):printf("\n You will not play alone\n"); // Oui, si choice !=1, alors 2 players :D

    return choice;
}


// ---- Le jeu ----
int jeu(int nbMys)
{
    int ans=-17, att=1;
    int replay=0;

    do
    {

        printf(" Quelle est le nombre Mystere ?    (essai n%d)\n", att);
        scanf("%d", &ans);
        att++;
        if (nbMys>ans)
        {
            printf(" Plus haut \n\n");
        }
        else if (nbMys<ans)
        {
            printf(" Plus bas \n\n");
        }
        else
        {
            printf("\n\n ----####/\\###----");
            printf("\n Vous avez trouve le nombre Mystere ! \n");
        }
    }
    while (nbMys != ans);


    printf("\n Votre derniere reponse : %d \n", ans);
    printf("\n Le nbMys : %d \n", nbMys);
    printf("\n Vous avez essaye %d fois \n", att);

    printf("\n   Rejouez ?\n     --> 1:OUI  0:NON \n\n");
    scanf("%d", &ans);
    replay = (ans)? printf("\n Alleee !! :D \n\n\n"):printf("\n Ciao o/ \n\n");


    return replay;
}

int main()
{

    int m=-1;

    do
    {
        a=difficulty();
        m=mode();
    }
    while ((callgame(m)==1));



    return 0;
}
