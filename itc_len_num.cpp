#include "middle.h"


int itc_len_num(long long number){
    if (number < 0)
        number *= -1;
    int a = 0;
    if (number == 0)
        return 1;
    else{
        while (number > 0){
            number /= 10;
            a += 1;
        }
    return a;
    }
}
