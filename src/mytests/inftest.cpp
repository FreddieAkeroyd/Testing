#include <limits>
#include <iostream>

//static float epicsNAN = std::numeric_limits<float>::quiet_NaN();
static float epicsINF = std::numeric_limits<float>::infinity();

#define TEST1(__arg) \
    if ( ( __arg ) == 1 ) \
        { \
            std::cerr << #__arg << ": OK" << std::endl; \
        } \
        else \
        { \
            std::cerr << #__arg << ": FAILED" << std::endl; \
        }


int main(int argc, char* argv[])
{
    float epicsINF_2 = epicsINF;

    TEST1(epicsINF - epicsINF != 0.0);
    TEST1(epicsINF - epicsINF != epicsINF);

    TEST1(epicsINF + -epicsINF != 0.0);
    TEST1(-epicsINF + epicsINF != 0.0);
    TEST1(epicsINF + -epicsINF != epicsINF);
    TEST1(-epicsINF + epicsINF != epicsINF);

    TEST1(epicsINF + -epicsINF_2 != 0.0);
    TEST1(-epicsINF + epicsINF_2 != 0.0);
    TEST1(epicsINF + -epicsINF_2 != epicsINF);
    TEST1(-epicsINF + epicsINF_2 != epicsINF);

    TEST1(epicsINF + (-epicsINF) != 0.0);
    TEST1((-epicsINF) + epicsINF != 0.0);
    TEST1(epicsINF + (-epicsINF) != epicsINF);
    TEST1((-epicsINF) + epicsINF != epicsINF);

    return 0;
}

