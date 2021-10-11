#include "middle.h"


int itc_min_num(long long number){
    int a = 99999;
    if(number == 0)
    if(number < 0)
        number *= -1;
    while(number > 0){
        if(number % 10 == 0)
            return 0;
        if(number % 10 <= a)
            a = number % 10;
        number /= 10;
    }
    return a;
}


int itc_rev_num(long long number){
    if(number == 0)
        return 0;
    while(number % 10 == 0)
        number /= 10;
    return itc_len_num(number);
}


int itc_null_count(long long number){
    int a = 0;
    if(number == 0)
        return 1;
    if(number < 0)
        number *= -1;
    while(number > 0){
        if(number % 10 == 0)
            a++;
        number /= 10;
    }
    return a;
}


double itc_pow (int n, int i)
{
    if (i == 0){
        return 1;
    }
    else{
        for (int j = 1; j < itc_abs(i); j++){
            n = n * n;
        }
        if(i > 0)
            return n;
        return 1 / n;
    }
}


int itc_abs(int num) {
    if (num < 0) num = -num;
    return num;
}


bool itc_mirror_num(long long number){
    if(itc_len_num(number) == 1)
        return 1;
    if(number % 10 == 0)
        return 0;
    int a = 0, b = number;
    for(int i = itc_len_num(number) - 1; i >= 0; i--){
        a += number % 10 * itc_pow(10, i);
        number /= 10;
    }
    if(a == b)
        return true;
    return false;
}
