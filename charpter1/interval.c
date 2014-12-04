//关于在进行算数操作符时整型的转化。《C专家编程》22页
//ANSI C 标准的大致意思：当执行算术运算时，操作数的类型如果不同，就会发生转换。数据类型一般朝着浮点精度更高，长度更长的类型转换
//整数如果转化为signed不会丢失信息，就转换为signed，否则都转换为unsigned
#include "stdio.h"

int array[]={1,2,3,4,5,6};
//sizeof的结果为unsigned int 类型
#define TOTAL_ELE (sizeof(array)/sizeof(array[0]))

int main(){
    int d= -1;
    //此处执行算术运算符比较时，d为int类型，TOTAL_ELE为unsigned int类型，此处发生整型升级，int升级为unsigned int类型，
    //即-1转换为unsigned int的值为无限大，因此在对TOTAL_ELE进行强制转换之前，始终不会进入if条件的判断
    if(d<=(int)TOTAL_ELE-2){
    //if(d<=TOTAL_ELE-2){
        printf("if is called\n");
    }
    return 0;
}
