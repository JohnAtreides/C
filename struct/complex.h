#ifndef COMPLEX_H
#define COMPLEX_H

// --- STRUCT ---
typedef struct Complex Complex;
struct Complex
{
    int real;
    int imaginary;
};

// --- PROTO ---
void noPointerComplex(struct Complex *);
Complex pointerComplex();

void modeComplex();


#endif // COMPLEX
