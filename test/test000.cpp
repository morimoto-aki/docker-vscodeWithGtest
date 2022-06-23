#include <gtest/gtest.h>
#include "../include/func.h"

TEST(func1, BasicTest1) {
    EXPECT_EQ( func1(3, 4), 12); //GOOD
}
TEST(func1, BasicTest2) {
    EXPECT_EQ( func1(1, 1), 0);  //dummy
}