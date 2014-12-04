/*
 *  C语言中关键字的重载
 *
 *  static:     在函数内部，表示该变量在各个调用之间保持延续性
 *              为函数限定符时，表示该函数只对该文本可见
 *  extern:     用于函数定义，表示全局可见（默认全局可见）
 *              用户变量，表示引用在其他地方定义的此变量
 *  void:       作为函数的返回类型，表示不返回值
 *              在指针声明中，表示通用指针的类型
 *              位于参数列表时，表示无参数
 *  *:          乘法
 *              用于指针，表示通用指针类型
 *              在声明中，表示指针
 *  &:          与操作符
 *              取地址操作符
 *  ............................................................
 */

/*
 *  关于部分运算符的优先级
 *  《C专家编程》P38
 * */

#include "stdio.h"

void first(char * string);

int main(){
    //关于字符串自动连接
    char * array[]={
        "one",
        "two",
        "three"
        "four",
        "fi" \
            "ve",
    };
    printf("index 3 is %s\n",array[2]);

    char a[]="aaaaaa";
    first(a);
    first(a);
}

//关于第一次执行函数时

void first(char * string){
    static int first=1;
    if(first==1){
        printf("first called\n");
        first=0;
    }
    else{
        printf("the string is %s\n",string) ;
    }
}
