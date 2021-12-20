#include "middle.h"

int itc_min_num(long long number){
    if (number == 0)
        return 0;
    else{
        int a = 10, b;
        if (number < 0)
            number *= -1;
        while(number > 0){
            b = number % 10;
            if (a > b)
                a = b;
            number /= 10;
        }
    return a;
    }
}
