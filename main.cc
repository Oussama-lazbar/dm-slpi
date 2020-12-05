#include <iostream>
#include <cmath>
#include "functions.h"
#include "Dense"

int main(){
    Eigen::VectorXd I(3);
    I(0)=0;
    I(1)=0;
    I(2)=0;
    std::cout<<I<<std::endl;
    double a=sqrt(ps(I,I));
    double b = norm2(I);
    std::cout<<a<<'\n'<<b<<std::endl;
    Eigen::MatrixXd A(3,3);
    A <<1,0,0,
        0,1,0,
        0,0,1;
    std::cout<<A<<std::endl;
    Eigen::VectorXd B(2);
    B = MatVec(A,I);
    std::cout<<B<<std::endl;
}