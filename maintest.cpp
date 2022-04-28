#include<iostream>
#include<gtest/gtest.h>
#include<gmock/gmock.h>
#include "mathfixt.h"
// EXPECT_EQ will get the value from the EXPECT_CALL.WILLONCE(Return (value)) value
//when the operation() function will be called and the test destroyed, gtest will 
//verify if the test cases were fulfilled
TEST_F(Mathtest,additiontest){
   EXPECT_CALL(*mockpointer, adition(_,_)).WillOnce(Return(3)); 
    int result=operation ("Atti",1,2);
   EXPECT_EQ(3,result);
};

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}
