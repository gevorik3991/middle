#include "middle.h"


int itc_mirror_count(long long num)
{
    long long i = 1;
    int r = 0;
    while(i <= num){
        if(itc_mirror_num(i) == 1){
            r ++;
        }
        i ++;
    }
    return r;
}


int itc_second_max_num(long long number){
    if(number <= 9 && number >= 0)
        return -1;
    if(itc_min_num(number) == itc_max_num(number))
        return itc_max_num(number);
    int a = 0;
    int b = number;
    if(number < 0)
        number *= -1;
    while(number > 0){
        if(number % 10 > a && number % 10 < itc_max_num(b))
            a = number % 10;
        number = (number - number % 10) / 10;
    }
    return a;
}


 int itc_second_simple_max_num(long long number){
      if(itc_min_num(number) == itc_max_num(number)) return -1;
    int a = 0;
    int b = number;
    if(number < 0)
        number *= -1;
    while(number > 0){
        if(number % 10 > a && number % 10 < itc_max_num(b))
            a = number % 10;
        number = (number - number % 10) / 10;
    }
    return a;
 }


 long long itc_bin_num(long long number){
    int a = 0;
    int b = 0;
    while(number > 0){
        a += number % 2 * itc_pow(10, b);
        number /= 2;
        b++;
    }
    return a;
 }


 long long itc_oct_num(long long number){
    int a = 0;
    int b = 0;
    while(number > 0){
        a += number % 8  * itc_pow(10, b);
        number /= 8;
        b++;
    }
    return a;
}
