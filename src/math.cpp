#include "math.h"
#include<iostream>
int operation(const std::string a,int c, int d){
    std::cout<<a<<" Iesirea este c: "<<c<<" si d: "<<d<<std::endl;
    return (adition(c,d));
};