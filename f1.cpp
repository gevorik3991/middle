#include "middle.h"


void itc_num_print(int number) {
    cout <<  number;
}


int itc_len_num(long long number){
    int a = 0;
    if(number == 0)
        return 1;
    if(number < 0)
        number *= -1;
    while(number > 0){
        a++;
        number = (number - number % 10) / 10;
    }
    return a;
}


int itc_sum_num(long long number){
    int a = 0;
    if(number < 0)
        number *= -1;
    while(number > 0){
        a += number % 10;
        number = (number - number % 10) / 10;
    }
    return a;
}


long long itc_multi_num(long long number){
    int a = 1;
    if(number == 0)
        return 0;
    if(number < 0)
        number *= -1;
    while(number > 0){
        a *= number % 10;
        number = (number - number % 10) / 10;
    }
    return a;
}


int itc_max_num(long long number){
    int a = 0;
    if(number < 0)
        number *= -1;
    while(number > 0){
        if(number % 10 == 9)
            return 9;
        if(number % 10 >= a)
            a = number % 10;
        number = (number - number % 10) / 10;
    }
    return a;
}
