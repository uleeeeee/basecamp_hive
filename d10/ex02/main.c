#include <unistd.h>

int *ft_map(int *tab, int length, int (*f)(int));
int    ft_putnbr(int nb);
int main()
{
    int tab[4] = {1, 2, 3, 4};
    ft_map(tab, 4, &ft_putnbr);
    return (0);
}

int    ft_putchar(int ch);

int    ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483648;
    }
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= (-1);
    }
    if (nb < 10)
    {
        ft_putchar(nb + '0');
    }
	return (0);
}


int   ft_putchar(int a)
{
    write(1, &a, 1);
    return (0);
}
