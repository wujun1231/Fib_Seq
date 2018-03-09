/*******************************************************************
 > FileName   : FIbonacci_seq.c
 > Function   : 
 > Author     : Fang Tao <Tao.Fang@desay-svautomotive.com>
 > Version    : v1.0 - Fri 09 Mar 2018 10:06:45 AM HKT
 *******************************************************************/

#include "Fibonacci_seq.h"
#include <stdio.h>

void show(char *ch)
{
    //fprintf(stdout, "%s\n", ch);
    do
    {
        fprintf(stderr, "%c", *ch);
    } while(*ch++ != '\0' || *ch == ' ');
}

/* 
 * FUnc name: fibonacci
 * Function : 求num(含)以内的斐波纳契数列
 * Author   : Wu jun
 * Version  : v1.0
 * Date     : 2018/03/09
 * */
void fibonacci(int num)
{
    int a = 0;
    int b = 1;
    int c = 0;
    fprintf(stderr, "%d(含)以内的斐波纳契数列是：%d ", num, 1);
    while((a+b) < num)
    {
        c = a+b;
        fprintf(stderr, "%d ", c);
        a = b;
        b = c;
    }
    putchar('\n');
}

/* 
 * Func name: fibonacci_num
 * Function : 求第num个斐波纳契数列的值
 * Author   : Wu jun
 * Version  : v1.0
 * Date     : 2018/03/09
 * */
int fibonacci_num(int num)
{
    int i = 0;
    int a = 0;
    int b = 1;
    int c = 0;

    if(num == 0)
        return 0;
    
    while(i++ != num)
    {
        c = a+b;
        a = b;
        b = c;
    }
    return a;
}


