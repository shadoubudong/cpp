/**
*代码的完整性
**/

#include <iostream>
#include <math.h>

using namespace std;

double fun(double base, int e)
{
    if(fabs(base - 0.0) < 0.0000001)
        return 0.0;
    unsigned int E = (unsigned int)e;
    if(e < 0)
        E = (unsigned int)(-e);

    int res = 1.0;
    for(int i=0; i<E; i++)
        res *= base;
    if(e < 0)
        res /= 1.0;
    return res;
}
