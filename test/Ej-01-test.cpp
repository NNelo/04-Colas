#include "gtest/gtest.h"
#include "../Cola/Cola.h"
#include "../Ej-01/sonIguales.h"

TEST(test_Ej01, test) {
    EXPECT_EQ(true, true);
}

Cola<char> *A, *B;

TEST(test_Ej01, Iguales){
    A = new Cola<char>;
    B = new Cola<char>;
    for (char i = 'a'; i < 'k'; ++i) {
        A->encolar(i);
        B->encolar(i);
    }
    ASSERT_TRUE(sonIguales(A,B));
}

TEST(test_Ej01, Vacias){
    ASSERT_TRUE(sonIguales(A,B));
}

TEST(test_Ej01, Distintas){
    for (char i = 'a'; i < 'k'; ++i)
        A->encolar(i);
    for(char j = 'l'; j< 'o'; ++j)
        B->encolar(j);
    ASSERT_FALSE(sonIguales(A,B));
}