#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "power.hpp"

//fixture for testing class Foo

class FuncTest : public ::testing::Test {
    protected:

        //you can set-up work for each test here
        FuncTest();

        //for clean up work that doesn't throw exceptions
        virtual ~FuncTest();

        //Code here will be called immediately after the constructor (right before each test)
        virtual void SetUp();

        //Code here will be called immediately after each test
        virtual void TearDown();
};
