#include <gtest/gtest.h>
#include <square.h>

TEST(square, squareZero)
{
    EXPECT_EQ(square(0), 0);
}

TEST(square, squareOne)
{
    EXPECT_EQ(square(1), 1);
}

TEST(square, squareMinusOne)
{
    EXPECT_EQ(square(-1), 1);
}