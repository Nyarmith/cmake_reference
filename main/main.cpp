#include "power.hpp"
#include "ProjectConfig.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#ifndef USE_MYMATH
#include "math.h"
#endif

void print_usage(){
    std::cout << "Usage: exponentiator  number   exponent" << std::endl;
}

int main(int argc, char** argv){

    if (argc != 3){
        print_usage();
        return 0;
    }

    int result;
#ifdef USE_MYMATH

    result = power(atoi(argv[2]), atoi(argv[3]));
#else
    result = pow(atoi(argv[2]), atoi(argv[3]));

#endif

    std::cout << result << std::endl;
    return 0;
}

