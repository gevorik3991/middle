#include "middle.h"

bool itc_mirror_num(long long number){
    if (number == 0)
        return true;
    else{
        if (number < 0)
            number *= -1;
        int a = number, b = 0;
        while(number > 0){
            int c = number % 10;
            b = b * 10 + c;
            number /= 10;
        }
        if (a == b)
            return true;
        return false;
    }
}
