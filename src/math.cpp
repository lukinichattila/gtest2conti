#include "math.h"
#include<iostream>
int operation(const std::string a,int c, int d){
    std::cout<<a<<" Iesirea este c: "<<c<<" si d: "<<d<<std::endl;
    return (adition(c,d));
};
int minusoperation(std::string a, int b,int c){
    std::cout<<a<<" Iesirea este c: "<<b<<" si d: "<<c<<std::endl;
    return (subtraction(b,c));
};
