/*
 *  C专家编程第十章：再论指针
 *  关于多维数组在引用时的问题
 *
 * */

#include "stdio.h"

void myfunction1(int fruit[2][3][5]){}
void myfunction2(int fruit[][3][5]){}
void myfunction3(int (*fruit)[3][5]){}

int main(){
    int apple[2][3][5];
    myfunction1(apple);
    myfunction2(apple);
    myfunction3(apple);

    int (*p)[3][5]=apple;
    myfunction1(p);
    myfunction2(p);
    myfunction3(p);

    int (*q)[2][3][5]=&apple;
    myfunction1(*q);
    myfunction2(*q);
    myfunction3(*q);

    return 0;
}

