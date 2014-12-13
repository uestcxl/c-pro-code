/*
 *  C专家编程：
 *      返回数组的函数
 *
 * */

#include "stdio.h"
#include "stdlib.h"

int (*paf())[20]{
    int (*pear)[20];
    pear=calloc(20,sizeof(int));
    return pear;
}

int main(){
    int (*result)[20];
    result=paf();
    (*result)[3]=12;
}

