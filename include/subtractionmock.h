#ifndef SUBTRACTIONMOCK_H
#define SUBTRACTIONMOCK_H
#include "subtraction.h"
#include<gtest/gtest.h>
#include<gmock/gmock.h>
class Substrmock{
    public:
    MOCK_METHOD2(subtraction, int(int,int));
    virtual ~Substrmock(){}
};
extern Substrmock *substrmockpointer;
#endif
