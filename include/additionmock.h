#ifndef ADDITIONMOCK_H
#define ADDITIONMOCK_H
#include"addition.h"
#include<gtest/gtest.h>
#include<gmock/gmock.h>
//defines the Addmock class which is used as a class to mock the method "adition" used by math.cpp
//declares that the mockpointer is defined somewhere else(global variable so that Addmock can see it)
class Addmock{
    public:
    MOCK_METHOD2(adition, int(int,int));
    virtual ~Addmock(){}     
};
extern Addmock *mockpointer;

#endif