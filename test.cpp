#include <gtest/gtest.h>
#include "func.hpp"
#include <iostream>

TEST(tests, 1){
    EXPECT_EQ(amifeared("Понедельник",12),true);
}

TEST(tests, 2){
    EXPECT_EQ(amifeared("Понедельник",13),true);
}

TEST(tests, 3){
    EXPECT_EQ(amifeared("Вторник",96),true);
}
TEST(tests, 4){
    EXPECT_EQ(amifeared("Вторник",95),true);
}

TEST(tests, 5){
    EXPECT_EQ(amifeared("Вторник",94),true);
}
TEST(tests, 6){
    EXPECT_EQ(amifeared("Среда",34),true);
}

TEST(tests, 7){
    EXPECT_EQ(amifeared("Среда",35),true);
}

TEST(tests, 8){
    EXPECT_EQ(amifeared("Среда",33),true);
}
TEST(tests, 9){
    EXPECT_EQ(amifeared("Четверг",0),true);
}

TEST(tests, 10){
    EXPECT_EQ(amifeared("Четврег",1),true);
}

TEST(tests, 11){
    EXPECT_EQ(amifeared("Пятница",6),true);
}
TEST(tests, 12){
    EXPECT_EQ(amifeared("Пятница",7),true);
}
TEST(tests, 13){
    EXPECT_EQ(amifeared("Пятница",4),true);
}
TEST(tests, 14){
    EXPECT_EQ(amifeared("Суббота",56),true);
}

TEST(tests, 15){
    EXPECT_EQ(amifeared("Суббота",57),true);
}

TEST(tests, 16){
    EXPECT_EQ(amifeared("Воскресенье",666),true);

}

TEST(tests, 17){
    EXPECT_EQ(amifeared("Воскресенье",-666),true);

}
TEST(tests, 18){
    EXPECT_EQ(amifeared("Воскресенье",555),true);

}