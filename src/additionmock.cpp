#include"additionmock.h"
//replaces the definition of the function from math.cpp(not included in the build.)
//returns the MOCKMETHOD(adition) definition from the Addmock class through the global pointer
//when it is called
extern int globtestvar;
int adition(int a,int b){
   globtestvar=1;
   return mockpointer->adition(a,b);
}