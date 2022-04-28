#ifndef MATHFIXT_H
#define MATHFIXT_H
#include "math.h"
#include "additionmock.h"
#include <iostream>
//defined the global pointer variable mockpointer to be available to all using classes 
Addmock *mockpointer=NULL;
//globtestvar definition with {}.if = used it is an asignation
int globtestvar{0};
//namespace definitions for availability without typing whole syntax
using ::testing::Mock;
using ::testing::AtLeast;
using ::testing::Return;
using ::testing::AtLeast;
using ::testing::_;
//Mathtest fixture class declaration responsible for the setup and teardown of the test cases
//needs to have virtual functions.initializes with a class that simulates the mock function it replaces(Addmock)
//has acces to the global functions of the math.cpp file it includes
class Mathtest :public ::testing::Test{
    public:
    virtual void SetUp() {
       mockpointer=new Addmock;
       std::cout<<"Mathtest fixture called"<<std::endl;

    }
    virtual void TearDown() {
        delete mockpointer;
        std::cout<<"Mathtest TearDown called"<<std::endl;
    }
    virtual ~Mathtest(){
        std::cout<<"Mathtest destructor called"<<std::endl;
     }

};
#endif