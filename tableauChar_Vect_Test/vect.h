#ifndef VECT
#define VECT

#define TAILLE_VECT 3

// --- STRUCT ---
struct Vect
{
    int x;
    int y;
    int z;
};


// --- PROTO ---
void declareVec(struct Vect *, struct Vect *);
char displayVec();

#endif // VECT

