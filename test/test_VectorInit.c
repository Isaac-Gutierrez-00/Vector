#include <stdio.h>
#include <stdlib.h>


#include "../libs/Vector.h"
#include "../libs/unity.h"

void setUp(void){
    
}

void tearDown(void){
    
}


void test_VectorInit(void){
    puts("Testing Vector Init function");
    Vector test_vector = NULL;
    test_vector = newVector();
    TEST_ASSERT_NOT_NULL(test_vector);
    freeVector(test_vector);
    
}


void test_VectorSet(void){
    puts("Testing Vector Set Function");
    Vector test_vector = NULL;
    
    test_vector = initVector(SIZE);
    
    
    setVector(test_vector->n_elements, test_vector->elements);
}


void test_VectorFree(void){
    puts("Testing Vector Free Function");
    Vector test_vector = NULL;
    test_vector = newVector();
    
    test_vector = freeVector(test_vector);
    
    TEST_ASSERT_NULL(test_vector);
}

int main(void){
    UNITY_BEGIN();
    
    RUN_TEST(test_VectorInit, __LINE__);
    RUN_TEST(test_VectorSet, __LINE__);
    RUN_TEST(test_VectorFree, __LINE__);
    return UNITY_END();
}