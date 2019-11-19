#ifndef MAIN.H
#define MAIN.H


// --- STRUCT ---
typedef Vector vector;
struct Vector
{
    int x;
    int y;
    int z;
};


// --- PROTO ---
void declareVec(struct Vector, struct Vector );
void vecxvec(struct Vector, struct Vector);


#endif // MAIN
