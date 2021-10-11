#include "middle.h"


 int itc_rev_bin_num(long long number){
     int a = 0;
    int b = 0;
    while(number > 0){
        a += number % 10 * itc_pow(2, b);
        number /= 10;
        b++;
    }
    return a;
 }


 int itc_rev_oct_num(long long number){
    int a = 0;
    int b = 0;
    while(number > 0){
        a += number % 10 * itc_pow(8, b);
        number /= 10;
        b++;
    }
    return a;
}


int itc_covert_num(long long number, int ss){
    if(ss == 10)
        return number;
    int a = 0, b = 0;
    while(number > 0){
        a += number % ss * itc_pow(10, b);
        number /= ss;
        b++;
    }
    return a;
}


int itc_rev_covert_num(long long number, int ss){
    int a = 0, b = 0;
    if(ss == 10)
        return number;
    while(number > 0){
        a += number % 10 * itc_pow(ss, b);
        number /= 10;
        b++;
    }
    return a;
}
