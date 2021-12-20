#include "middle.h"

int itc_second_simple_max_num(long long number){
    if (itc_len_num(number) == 1)
        return -1;
    if (number < 0)
        number *= -1;
    int a = 0, b = 0;
     if (itc_len_num(number) == 1){
        a = number;
        b = number;
    }
    else{
        while(number > 0){
            int c = number % 10;
            if (c >= b){
                a = b;
                b = c;
            }
            if (c >= a && c < b)
                a = c;
            number /= 10;
        }
    }
    if (b == a)
        return -1;
    return a;
}
