#ifndef _FUNCTIONS_CPP
#define _FUNCTIONS_CPP

#include "functions.h"

double ps(const Eigen::VectorXd &r, const Eigen::VectorXd &z)
{
    const int size = r.size();
    double sum = 0;
    for (int i(0); i < size; ++i)
        sum += r(i) * z(i);
    return sum;
}

double norm2(const Eigen::VectorXd &r)
{
    const int size = r.size();
    double sum(0);
    for (int i(0); i < size; ++i)
        sum += r(i) * r(i);
    return sqrt(sum);
}

Eigen::VectorXd MatVec(const Eigen::MatrixXd &A, const Eigen::VectorXd &X)
{
    const int size = X.size();

    Eigen::VectorXd Ax(size);
    Eigen::VectorXd temp(size);
    for (int i(0); i < size; ++i)
    {
        temp = A.row(i);
        Ax(i) = ps(temp, X);
    }
    return Ax;
}

#endif