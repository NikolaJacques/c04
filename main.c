#include "./common.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

void test00()
{
    printf("\ntest 00:\n");
    char *str = "0123456789";
	printf("%d", ft_strlen(str));
    printf("\n");
}

void test01()
{
    printf("\ntest 01:\n");
    char *str = "Some string";
	ft_putstr(str);
    printf("\n");
}

void test02()
{
    printf("\ntest 02:\n");
    ft_putnbr(1234);
    printf("\n");
    ft_putnbr(-2147483648);
    printf("\n");
}

void test03()
{
    printf("\ntest atoi:\n");
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
    printf("\ntest putnbr_base:\n");
    ft_putnbr_base(42, "01");
    printf("\n");
	ft_putnbr_base(42, "0123456789ABCDEF");
    printf("\n");
	ft_putnbr_base(42, "poneyvif");
    printf("\n");
}

   void test50()
    {
	    printf("test 00\n");
	    printf("0 : %d\n", ft_is_num('z', "0123456789ABCDEF"));
	    printf("1 : %d\n", ft_is_num('6', "0123456789ABCDEF"));
	    printf("1 : %d\n", ft_is_num('F', "0123456789ABCDEF"));
	    printf("0 : %d\n", ft_is_num(':', "0123456789ABCDEF"));
	    printf("0 : %d\n", ft_is_num(' ', "0123456789ABCDEF"));
    }

    void test51()
    {
	    printf("test 01\n");
	    printf("%d : 0\n", ft_convert('p', "poneyvif", 8));
	    printf("%d : 1\n", ft_convert('1', "01", 2));
	    printf("%d : 10\n", ft_convert('A', "0123456789ABCDEF", 16));
	    printf("%d : 15\n", ft_convert('F', "0123456789ABCDEF", 15));
	    printf("%d : 5\n", ft_convert('v', "poneyvif", 8));
    }

    void test52()
    {
	    printf("test 02\n");
	    printf("11 : %d\n", ft_get_len_str("06594A1D54F  +-plogh===", "0123456789ABCDEF"));
    }

    void test53()
    {
    	printf("test 03\n");
	    printf("42 : %d\n", ft_process_num("2A  +-plogh===", "0123456789ABCDEF"));
    }

void test05()
{
    printf("42 : %d\n", ft_atoi_base(" -++-101010ab", "01"));
	printf("-42 : %d\n", ft_atoi_base("   +-2Axy", "0123456789ABCDEF"));
	printf("-42 : %d\n", ft_atoi_base(" ---vnax8", "poneyvif"));
	printf("-42 : %d\n", ft_atoi_base(" ---vnax8", "poneyvif"));
	printf("0 : %d\n", ft_atoi_base(" ---", "poneyvif"));
}

int main(void)
{
	test00();
    test01();
    test02();
    test03();
    test04();
    printf("\ntest atoi_base:\n");
    test50();
	test51();
	test52();
	test53();
    test05();
    printf("\n");
	return(0);
}
