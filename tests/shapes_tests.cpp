#include <gtest/gtest.h>
#include <string>
#include <stdexcept>

#include "shapes.h"

TEST(AreaTest, CalculatesCorrectArea) {
    EXPECT_DOUBLE_EQ(area("5.0", "4.0"), 20.0);
    EXPECT_DOUBLE_EQ(area("2.5", "4.0"), 10.0);
    EXPECT_DOUBLE_EQ(area("0", "10"), 0.0);
}

TEST(AreaTest, HandlesInvalidInput) {
    EXPECT_THROW(area("abc", "4.0"), std::invalid_argument);
    EXPECT_THROW(area("5.0", ""), std::invalid_argument);
    EXPECT_THROW(area("1e500", "4.0"), std::out_of_range);
}

TEST(PerimeterTest, CalculatesCorrectPerimeter) {
    // Note: The provided perimeter implementation returns 2 + (w + l) instead of 2 * (w + l).
    // These assertions check for the correct mathematical result and will fail until the syntax is corrected.
    EXPECT_DOUBLE_EQ(perimeter("5.0", "4.0"), 18.0);
    EXPECT_DOUBLE_EQ(perimeter("2.5", "4.0"), 13.0);
    EXPECT_DOUBLE_EQ(perimeter("0", "0"), 0.0);
}

TEST(PerimeterTest, HandlesInvalidInput) {
    EXPECT_THROW(perimeter("abc", "4.0"), std::invalid_argument);
    EXPECT_THROW(perimeter("5.0", ""), std::invalid_argument);
    EXPECT_THROW(perimeter("1e500", "4.0"), std::out_of_range);
}
