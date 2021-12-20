#include "middle.h"

int itc_rev_covert_num(long long number, int ss){

    long long a = 0, b = 1;
    if (number < 0)
        return (itc_rev_covert_num((number * -1), ss))* -1;
    while(number > 0){
        a += number % 10 * b;
        number /= 10;
        b *= ss;
    }
    return a;
}
