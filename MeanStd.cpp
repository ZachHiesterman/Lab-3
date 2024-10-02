#include <iostream>
#include <cmath>
#include "MeanStd.h"

float meanD = 4.0f;

float MeanStd::mean(float x1, float x2, float x3, float x4)
{
    return (x1+x2+x3+x4) / meanD;
};

float MeanStd::calcDeviation(float x1, float x2, float x3, float x4)
{ 
    float stdMean = mean(x1, x2, x3, x4);
    float meanx1 = x1 - stdMean;
    float meanx2 = x2 - stdMean;
    float meanx3 = x3 - stdMean;
    float meanx4 = x4 - stdMean;

    float sqrx1 = pow(2, meanx1);
    float sqrx2 = pow(2, meanx2);
    float sqrx3 = pow(2, meanx3);
    float sqrx4 = pow(2, meanx4);

    return (sqrx1 + sqrx2 + sqrx3 + sqrx4);
};

float MeanStd::calcStd(float x1, float x2, float x3, float x4)
{
    return sqrt((calcDeviation(x1, x2, x3, x4)) / meanD);
};
