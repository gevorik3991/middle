#include "middle.h"

int itc_mirror_count(long long number){
    int a = 0;
    if (number > 0){
        for (long long i = 1; i <= number; i++){
        if (itc_mirror_num(i))
            a++;
        }
    }
    else{
        for (long long i = number ; i <= 1; i++){
            if (itc_mirror_num(i))
                a++;
        }
    }
    return a;
}
