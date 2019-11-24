#ifndef COMPLEX_H
#define COMPLEX_H

// --- STRUCT ---
typedef struct Complex Complex;
struct Complex {
    int real;
    int imaginary;
};

// --- PROTO ---
void declareComplex(struct Complex *);
Complex createComplex();



#endif // COMPLEX