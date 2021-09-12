
#ifndef Vector_h
#define Vector_h

#define SIZE 20

struct _vector{
    float *elements;
    size_t n_elements;
};


typedef struct _vector* Vector;


// Initialises Vector

Vector initVector(size_t size);

Vector newVector(void);

Vector setVector(size_t n, float array[n]);

Vector freeVector(Vector phasor);

#endif