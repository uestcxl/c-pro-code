/*
    关于const以及赋值问题的解释
    《C专家编程》P19
    在函数赋值时，每个实参都应该具有自己的类型，这样它的值就可以赋值给与它对呀的形参(该对象的类型不能包含限定符)
    常量赋值时：
    两个操作数都是指向有限定符或无限定符的相容类型的指针，左边的指针所指向的类型必须具有右边指针指向类型的全部限定符
    const:READ-ONLY->指这个符号所限定的值不能被修改，在函数传参数的时候可限定函数内部对此变量只读
*/

/*
 *  值在使用位段和二进制掩码时，才使用无符号数，其他地方最好都使用有符号数
 *
 */

/*
 *  foo(const char **p){}   //const都是修饰char类型
 *  bar(const char *p){}
 *  main(int argc,char **argv){
 *      foo(argv);      //警告：参数与原形不匹配（指针类型不相容）
 *      bar(&argv);     //通过
 *  }
 *
 *
 */
#include "stdio.h"

int main(){
    //const read-only
    const int limit=10;
    printf("limit is %d\n",limit);

    const int *plimit=&limit;

    printf("plimit is %d\n",*plimit);

    int i=27;
    plimit=&i;
    printf("plimit is %d\n",*plimit);
}
