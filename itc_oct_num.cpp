#include "middle.h"

long long itc_oct_num(long long number){

    long long a = 0, b = 1;
    if (number < 0)
        return (itc_oct_num(number * -1))* -1;
    while(number > 0){
        a += number % 8 * b;
        number /= 8;
        b *= 10;
    }
    return a;
}
