#include "middle.h"

int itc_sum_num(long long number){
    int a = 0;
    if (number < 0)
        number *= -1;
    while(number > 0){
        a += number % 10;
        number /= 10;
    }
    return a;
}
