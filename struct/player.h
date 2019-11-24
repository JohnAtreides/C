#ifndef PLAYER
#define PLAYER

#define TAILLE_TABLEAU 5

// --- STRUCT ---
typedef struct Player{
    char pseudo[42];
    char classs[42];

    int gender;
    int lvl;
}Player;


// --- PROTO ---
void new_Player();

Player users[TAILLE_TABLEAU];





#endif // PLAYER