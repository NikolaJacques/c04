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
		ft_putchar((char)nb + 48);
	}
	else
	{
		ft_recursive(nb / 10);
		ft_recursive(nb % 10);
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
	ft_recursive(temp);
}

int main(void)
{
	ft_putnbr(-2147483648);
}