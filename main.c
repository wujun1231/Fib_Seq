/*******************************************************************
 > FileName   : main.c
 > Function   : 
 > Author     : Fang Tao <Tao.Fang@desay-svautomotive.com>
 > Version    : v1.0 - Fri 09 Mar 2018 10:15:28 AM HKT
 *******************************************************************/

#include <stdio.h>
#include "Fibonacci_seq.h"


#define MAX_NUM 20


int main(int argc, char *argv[])
{
#if 0
    char str[MAX_NUM] = "hello world";
    printf("str初始化内容：%s\n", str);
    fprintf(stdout, "请输入一串字符串：");
    scanf("%s", str);
    show(str);
#endif
    int num = 0;
    
    fprintf(stderr, "请输入一个整数，得出其以内的斐波纳契数列：");
    scanf("%d", &num);

    fibonacci(num);

    fprintf(stderr, "请输入要求第几个斐波纳契？：");
    scanf("%d", &num);
    printf("\n第%d个斐波纳契数列的值是：%d\n", num, fibonacci_num(num));

    return 0;
}


