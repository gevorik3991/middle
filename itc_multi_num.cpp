#include "middle.h"

long long itc_multi_num(long long number){
    if (number == 0)
        return 0;
    else{
        int a = 1;
        if (number < 0)
            number *= -1;
        while(number > 0){
            a *= number % 10;
            number /= 10;
        }
        return a;
    }
    return -1;
}
