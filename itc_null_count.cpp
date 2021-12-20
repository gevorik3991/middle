#include "middle.h"

int itc_null_count(long long number){
    int a = 0;
    if (number == 0)
        return 1;
    else{
        if (number < 0)
            number *= -1;
        while(number > 0){
            if (number % 10 == 0)
                a ++;
            number /= 10;
        }
      return a;
    }
    return -1;
}
