#include "testFunc.hpp"

using ::testing::Return;

//nothing really necessary to do here
FuncTest::FuncTest()  {};
FuncTest::~FuncTest() {};
void FuncTest::SetUp()     {};
void FuncTest::TearDown()  {};


TEST_F(FuncTest, threeCubed){
    EXPECT_EQ(power(3,3),27);
}

TEST_F(FuncTest, fourSquared){
    EXPECT_EQ(power(4,2),16);
}

TEST_F(FuncTest, fiveSquared){
    EXPECT_EQ(power(5,2),25);
}
