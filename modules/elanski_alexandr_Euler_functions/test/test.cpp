  // Copyright 2022 Elanskiy Alexandr

#include <gtest/gtest.h>
#include "include/Euler_functions.h"

TEST(Function_Euler, test_with_2) {
    СlassForFunctions f;
    EXPECT_EQ(1, f.Function_Euler(2));
}

TEST(Function_Euler, test_with_1) {
    СlassForFunctions f;
    EXPECT_EQ(1, f.Function_Euler(1));
}

TEST(Function_Euler, test_with_3) {
    СlassForFunctions f;
    EXPECT_EQ(2, f.Function_Euler(3));
}

TEST(Function_Euler, test_with_4) {
    СlassForFunctions f;
    EXPECT_EQ(2, f.Function_Euler(4));
}

TEST(Function_Euler, test_with_5) {
    СlassForFunctions f;
    EXPECT_EQ(4, f.Function_Euler(5));
}

TEST(Function_Euler, test_with_5_plus_5) {
    СlassForFunctions f;
    EXPECT_EQ(4, f.Function_Euler(5 + 5));
}

TEST(Function_Euler, test_with_46_minus_9) {
    СlassForFunctions f;
    EXPECT_EQ(36, f.Function_Euler(46 - 9));
}

TEST(Function_Euler, test_with_5x5) {
    СlassForFunctions f;
    EXPECT_EQ(20, f.Function_Euler(5*5));
}

TEST(Function_Euler, test_with_90_share_3) {
    СlassForFunctions f;
    EXPECT_EQ(8, f.Function_Euler(90/3));
}
