#include "gtest/gtest.h"
#include "../Ej-02/esPalidromo.h"


TEST(test_Ej02, test) {
    EXPECT_EQ(true, true);
}

TEST(test_Ej02, adan){
    ASSERT_TRUE(esPalidromo("adan no calla con nada"));
}

TEST(test_Ej02, nadaquever){
    ASSERT_FALSE(esPalidromo("hoy hay sol"));
}

TEST(test_Ej02, aleman){
    ASSERT_TRUE(esPalidromo("Ein Neger mit Gazelle zagt im Regen nie"));
}

TEST(test_Ej02, signos){
    ASSERT_TRUE(esPalidromo("¿So.;$5n m.u.l.as o..civicos alumnos?"));
}