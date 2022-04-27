#include<iostream>
#include<gtest/gtest.h>
#include<gmock/gmock.h>
#include "mathfixt.h"
extern int globtestvar;
TEST_F(Mathtest,additiontest){
 
    int result=operation ("Atti",1,2);
    EXPECT_EQ(1,globtestvar);
   
};
TEST_F(Mathtest,additiontest1){

   EXPECT_CALL(*mockpointer, adition(_,_)).Times(1); 
    int result=operation ("Atti",1,2);
//   EXPECT_EQ(1,globtestvar);
};

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}
