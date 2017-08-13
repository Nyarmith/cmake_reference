#include "power.hpp"
#include "ProjectConfig.hpp"

#ifdef LIB_MATH_USAGE
    #include <math.h>

int power(int base, int exp){
    return (pow(base,exp));
}
#else
int power(int base, int exp){
    int starter = base;
    int myterms = 1;
    while (myterms*2 <= exp){
        starter *= starter;
        myterms *=2;
    }

    while (myterms < exp){
        starter *= base;
        myterms++;
    }

    return starter;
}
#endif
    

