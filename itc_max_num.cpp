#include "middle.h"

int itc_max_num(long long number){
    int a = 0, b;
    if (number < 0)
        number *= -1;
    while(number > 0){
        b = number % 10;
        if (a < b){
            a = b;
        }
        number /= 10;
    }
    return a;
}
