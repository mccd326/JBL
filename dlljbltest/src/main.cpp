#include <iostream>
#include "gtest/gtest.h"
#include "lib.h"

int main(int argc, char** args){
    GetSystemInformation();

    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}


TEST(SomeTest, MyTest)
{
    std::string myString = "Hello";
    EXPECT_EQ(myString, "World!");
}