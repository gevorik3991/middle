#include "middle.h"


int itc_min_num(long long number){
    int a = 10;
    if(number == 0)
        return 0;
    number = itc_abs(number);
    while(number > 0){
        if(number % 10 < a){
            a = number % 10;
        }
        number = number / 10;
    }
    return a;
}


int itc_rev_num(long long number){
    int a = 0;
    number = itc_abs(number);
    number = my_rev(number);
    a = itc_len_num(number);
    return a;
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


int itc_abs(int number) {
    if (number < 0) number = -number;
    return number;
}


bool itc_mirror_num(long long number)
{
    long long num2;
    number = itc_abs(number);
    num2 = my_rev(number);
    if(num2 == number)
    {
        return 1;
    }
    return 0;
}


long long my_rev(long long number)
{
    long long r = 0;
    while (number > 0)
    {
        r = r * 10 + (number % 10);
        num = number / 10;
    }
    return r;
}
