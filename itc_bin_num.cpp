#include "middle.h"

long long itc_bin_num(long long number){

    long long a = 0, b = 1;
    if (number < 0)
        if (number < 0)
        return (itc_bin_num(number * -1))* -1;
    while(number > 0){
        a += number % 2 * b;
        number /= 2;
        b *= 10;
    }
    return a;
}
