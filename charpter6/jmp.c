/*
 *  C语言中setjmp和longjmp的使用：
 *      setjmp(jmp_buf j)必须先被调用，表示使用变量j记录现在的位置，函数返回0
 *      longjmp(jmp_buf j , int i)可以接着被调用，它表示回到变量j所在的位置，并且返回i
 *  原理是，setjmp保存了一份程序的计数器和当前的栈顶指针，longjmp恢复这些值，有效地转移控制并把状态重置回保存状态的时候
 *  和goto的区别：1.能跳到其他文件中。2.longjmp只能跳到曾经到过的地方，更像是从哪里来。
 *
 * */

#include "setjmp.h"
jmp_buf buf;

#include "stdio.h"

int banana(){
    printf("in banana()\n");
    longjmp(buf,1);
    //nerver called follow
    printf("help!!\n");
    return 0;
}

int main(){
    if(setjmp(buf)){
        printf("back to main!\n");
    }
    else{
        printf("hello world!\n");
        banana();
    }
    return 0;
}
