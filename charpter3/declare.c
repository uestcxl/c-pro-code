/*
 *  有关C语言的声明
 *      优先级规则
 *      A   声明从他名字开始读取，然后按照优先级顺序依次读取
 *      B   优先级从高到低依次是：
 *          B.1 声明中被括号括起来的部分
 *          B.2 后缀操作符：
 *              括号表示这是一个函数()
 *              方括号表示这是一个数组[]
 *          B.3 前缀操作符：星号*表示 指向...的指针
 *      C   如果const或者volatitle后跟着类型说明附，则它作用于类型说明符( int long等)。在其他情况下，作用于它左边紧邻的星号。即指针
 *
 *
 * */

#include "stdio.h"

int main(){
    char * const *(*next)(int **p);
    /*
     *  1   next是一个指向...的指针
     *  2   next是一个函数指针，指向一个返回....的函数
     *  3   char * const 表示指向字符常量的指针
     *
     *  总结：next是一个函数指针，这个函数的返回值是一个指向字符常量的指针,函数的参数是一个指向int类型指针的指针
     * */

    typedef struct TreeNode{
        int data;
        struct TreeNode * next;
    } TreeNode;

    union Vnode{
        int intData;
        char *charData;
    };
}
