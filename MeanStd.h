#ifndef MeanStd_h
#define MeanStd_h
#include <cmath>

class MeanStd
{
public:
    MeanStd() {};
    ~MeanStd() {};

    float mean(float x1, float x2, float x3, float x4); 

    float calcDeviation(float x1, float x2, float x3, float x4);
    
    float calcStd(float x1, float x2, float x3, float x4);

private:

};

#endif // !MeanStd_h