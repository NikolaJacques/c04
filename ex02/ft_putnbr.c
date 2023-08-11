#include <unistd.h>
#include <stdio.h>

void ft_putchar(char ch)
{
	write(1, &ch, 1);
}

void ft_recursive(long nb)
{
	if (nb / 10 == 0)
	{
		ft_putchar((char)nb);
	}
	else
	{
		ft_recursive((int)nb / 10);
		ft_putchar((int)nb % 10);
	}
}

void ft_putnbr(int nb)
{
	long temp;
	
	temp = nb;
	if (temp < 0)
	{
		ft_putchar('-');
		temp *= -1;
	}
	if (temp / 10 == 0)
	{
		ft_putchar((char)temp);
	}
	else
	{
		ft_recursive(temp / 10);
		ft_putchar((char)(temp % 10));
	}
}

int main(void)
{
	ft_putnbr(-12345);
}