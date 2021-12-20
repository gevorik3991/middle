#include "middle.h"

int itc_rev_bin_num(long long number){

    long long a = 0, b = 1;
    if (number < 0)
        if (number < 0)
        return (itc_rev_bin_num(number * -1))* -1;
    while(number > 0){
        a += number % 10 * b;
        number /= 10;
        b *= 2;
    }
    return a;
}
