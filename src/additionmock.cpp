#include"additionmock.h"
//replaces the definition of the function from math.cpp(not included in the gtest build.)
//returns the MOCKMETHOD(adition) definition from the Addmock class through the global pointer
//when it is called
int adition(int a,int b){
   return mockpointer->adition(a,b);
}