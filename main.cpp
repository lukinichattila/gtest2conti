#include"math.h"
#include<iostream>

int main(void){
    int d=10;
    int g=20;
    int z=operation("Addition",d,g);
    std::cout<<"Result= "<<z<<std::endl;
    int k=minusoperation("Subtraction",g,d);
    std::cout<<"Result= "<<k<<std::endl;
}