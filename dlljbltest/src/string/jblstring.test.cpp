#include <gtest/gtest.h>
#include "string/jblstring.h"

TEST(JBLStringTest, StringLength){
    {
        const char* text = "Hello, World!";
        size_t length = JBL::StringLength(text);
        EXPECT_EQ(length, 13);
    }
    {
        const char* text = "";
        size_t length = JBL::StringLength(text);
        EXPECT_EQ(length, 0);
    }
    {
        const char* text = nullptr;
        size_t length = JBL::StringLength(text);
        EXPECT_EQ(length, 0);
    }
}


TEST(JBLStringTest, Trim){
    {
        const char* text = "   Hello, World!   ";
        size_t length = 0;
        char* trimmed = JBL::Trim(text, length);
        EXPECT_STREQ(trimmed, "Hello, World!");
        EXPECT_EQ(length, 13);
        free(trimmed);
    }
    {
        const char* text = "NoWhitespace";
        size_t length = 0;
        char* trimmed = JBL::Trim(text, length);
        EXPECT_STREQ(trimmed, "NoWhitespace");
        EXPECT_EQ(length, 12);
        free(trimmed);
    }
    {
        const char* text = "   ";
        size_t length = 0;
        char* trimmed = JBL::Trim(text, length);
        EXPECT_STREQ(trimmed, "");
        EXPECT_EQ(length, 0);
        free(trimmed);
    }
    {
        const char* text = nullptr;
        size_t length = 0;
        char* trimmed = JBL::Trim(text, length);
        EXPECT_EQ(trimmed, nullptr);
        EXPECT_EQ(length, 0);
    }
}