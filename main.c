#include "./common.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

void test00()
{
    printf("\ntest 00:\n");
    

}

void test01()
{
    printf("\ntest 01:\n");

}

void test02()
{
    printf("\ntest 02:\n");
    ft_putnbr(1234);
}

void test03()
{
    printf("\ntest 03:\n");
    int i;
    i = 0;
    i = ft_atoi("    ---+--+12034ab567");
    printf("-12034 : %d\n", i);

    i = ft_atoi(" --+++12034567ab000");
    printf("12034567 : %d\n", i); 

    i = ft_atoi("    -12034 ab567   ");
    printf("-12034 : %d\n", i);
}

void test04()
{
    printf("\ntest 04:\n");

}

void test05()
{
    printf("\ntest 05:\n");
}



int main(void)
{
	test00();
    test01();
    test02();
    test03();
    test04();
    test05();
    printf("\n");
	return(0);
}
