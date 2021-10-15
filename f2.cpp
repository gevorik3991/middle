#include "middle.h"


int itc_min_num(long long number){
    int a = 10;
    if(number == 0)
        return 0;
    number=itc_abs(number);
    while(number > 0){
        if(number % 10 < a)
            a = number % 10;
        number /= 10;
    }
    return a;
}


int itc_rev_num(long long number){
    long long a=0;
    int b=0;
    number=itc_abs(number);
    while (number>0){
        a=a*10+number%10;
        number/=10;
    }
    return itc_len_num(a);
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


bool itc_mirror_num(long long num)
{
    long long num2;
    num = itc_abs(num);
    num2 = my_rev(num);
    if(num2 == num)
    {
        return 1;
    }
    return 0;
}


long long my_rev(long long num)
{
    long long r = 0;
    while (num > 0)
    {
        r = r * 10 + (num % 10);
        num = num / 10;
    }
    return r;
}
