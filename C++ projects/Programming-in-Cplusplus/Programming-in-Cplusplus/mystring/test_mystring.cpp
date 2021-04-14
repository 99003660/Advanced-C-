#include "mystring.h"
#include <gtest/gtest.h>
#include <iostream>
TEST(Mystring, EmptyConstructor) { 
    mystring S1;
    EXPECT_EQ(0, S1.str_len());
    EXPECT_STREQ(NULL, S1.get_str());
}
TEST(Mystring, ParamConstructor) { 
    mystring S2("Hi");
    EXPECT_EQ(2, S2.str_len());
    EXPECT_STREQ("Hi", S2.get_str());
}
TEST(Mystring, CopyConstructor) { 
    mystring S1("Hello");
    mystring S2(S1);
    EXPECT_EQ(5, S2.str_len());
    EXPECT_STREQ("Hello", S2.get_str());
}

TEST(Mystring, Get_string) { 
    mystring S1("Hello");
    EXPECT_STREQ("Hello", S1.get_str());
}
#if 0
TEST(Mystring, Operator_Equal) { 
    mystring S1("Hello");
    S1 = "Welcome";
    EXPECT_EQ(7, S1.str_len());
    EXPECT_STREQ("Welcome", S1.get_str());
}
TEST(Mystring, Operator_plus_str_mystring) { 
    mystring S1("Hello");
    mystring S2;
    S2 = "Hi" + S1;
    EXPECT_EQ(7, S2.str_len());
    EXPECT_STREQ("HiHello", S1.get_str());
}
TEST(Mystring, Operator_plus_mystring_str) { 
    mystring S1("Hello");
    mystring S2;
    S2 =  S1 + "Hi";
    EXPECT_EQ(7, S2.str_len());
    EXPECT_STREQ("HiHello", S1.get_str());
}
TEST(Mystring, Operator_graterthan) { 
    mystring S1("Hello");
    mystring S2;
    S2 = "Hi";
    EXPECT_EQ(false, S2 > S1);
}
TEST(Mystring, Operator_lessthan) { 
    mystring S1("Hello");
    mystring S2;
    S2 = "Hi";
    EXPECT_EQ(false, S2 > S1);
}
TEST(Mystring, Operator_equalto) { 
    mystring S1("Hello");
    mystring S2;
    S2 = "Hi";
    EXPECT_EQ(false, S2 == S1);
}

TEST(Mystring, Operator_plusequalto) { 
    mystring S1("Hello");
    S1 += "Hi";
    EXPECT_EQ(7, S1.str_len());
    EXPECT_STREQ("HelloHi", S1.get_str());
}
TEST(Mystring, Operator_cout) { 
    mystring S1("Hello");
    mystring S2("Welcome");
    std::cout <<"S1 = " << S1;
    std::cout <<"S1 = "<< S1 << std::endl<<"S2 = " S2;

    EXPECT_EQ(7, S1.str_len());
    EXPECT_STREQ("HelloHi", S1.get_str());
}
TEST(Mystring, Operator_cin) { 
    mystring S1;
    mystring S2;
    std::cin >> S1;
    /* Printing to Verify */
    std::cout <<"S1 = "<< S1;


    std::cin >> S1 >> S2;
    /* Printing to Verify */
    std::cout <<"S1 = "<< S1<< std::endl<<"S2 = " S2;
}
#endif
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}