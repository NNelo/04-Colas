#include "gtest/gtest.h"
#include "../Ej-03/ColaPrioridad.h"


TEST(test_Ej03, test) {
    EXPECT_EQ(true, true);
}
/*
using std::string;

ColaPrioridad<string> *lacola;

TEST(test_Ej03, esvacia) {
    lacola = new ColaPrioridad<string>;
    ASSERT_TRUE(lacola->esVacia());
}

TEST(test_Ej03, encolar) {
    for (int i = 0; i < 5; ++i)
        lacola->encolar("cliente", 3);
    lacola->encolar("anciano", 1);
    lacola->encolar("empresarioUno", 2);
    lacola->encolar("empresarioDos", 2);
    lacola->encolar("embarazada", 0);
    lacola->encolar("moroso", 7);
//    for (int i = 0; i < 5; ++i)
//        lacola->encolar(3.0, 3);
//    lacola->encolar(1.0, 1);
//    lacola->encolar(2.1, 2);
//    lacola->encolar(2.2, 2);
//    lacola->encolar(0, 0);
//    lacola->encolar(7, 7);
    ASSERT_FALSE(lacola->esVacia());
}*/