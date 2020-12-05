#ifndef _FUNCTIONS_H
#define _FUNCTIONS_H

#include <cmath>
#include "Dense"
#include "Sparse"

double ps(const Eigen::VectorXd& r,const  Eigen::VectorXd& z);
double norm2(const Eigen::VectorXd& r);
Eigen::VectorXd MatVec(const Eigen::MatrixXd& A, const Eigen::VectorXd& X );


#endif