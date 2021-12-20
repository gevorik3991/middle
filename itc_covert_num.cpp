#include "middle.h"

long long itc_covert_num(long long number, int ss){

    long long a = 0, b = 1;
    if (number < 0)
        return (itc_covert_num((number * -1), ss))* -1;
    while(number > 0){
        a += number % ss * b;
        number /= ss;
        b *= 10;
    }
    return a;
}
