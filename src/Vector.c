/**
    @Author Isaac GutÃƒÂ©rrez MÃƒÂ©ndez
    @Date 09 de Septiembre 2021
    @Name Vector.c
    @Copyright
*/
#include<stdio.h>
#include<stdlib.h>
#include "../libs/Vector.h"

Vector initVector(size_t size){
    Vector newVector = NULL;
    newVector = malloc(sizeof(Vector));
    newVector->elements = calloc(size, sizeof(float));
    newVector->n_elements = size;
    return newVector;
}

Vector newVector(void){
    Vector myVector=NULL;
    myVector=malloc(sizeof(struct _vector));
    myVector=initVector(myVector);
    return myVector;
}

Vector setVector(size_t n, float array[n]){
    for(int index=0; index<n; index++){
        printf("Memory %p, index: %zu element %d\n", &array[index], array[index]);
    }
}

Vector freeVector(Vector phasor){
      Vector myPhasor;
      myPhasor=phasor;
      free(myPhasor);
}