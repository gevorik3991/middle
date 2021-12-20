#include "middle.h"

int itc_rev_num(long long number){
    long long a = 0;
    if (number < 0)
        number *= -1;
    while(number > 0){
        a = a * 10 + number % 10;
        number /= 10;
    }
    return itc_len_num(a);
}

