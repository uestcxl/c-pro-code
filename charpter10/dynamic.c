/*
 *  C实现动态数组
 *      基本思想：使用malloc得到一大块内存的首地址，然后像引用数组一样去使用这块内存。（数组访问可以写为指针加偏移量）
 *
 */

#include "stdio.h"
#include "stdlib.h"

int main(){
    int size;
    char *dynamic;
    char input[10];
    size=atoi(fgets(input,7,stdin));
    dynamic=(char *)malloc(size);
    dynamic[0]='a';
    dynamic[size-1]='z';
}

