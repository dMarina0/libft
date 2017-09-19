
void ft_putchar_fd(char c,int fd);



void ft_putnbr_fd(int nb , int fd)
{
	if(nb == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		nb = 147483648;
	}

	if(nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = nb * (-1);
	}
	if(nb > 9)
	{
		ft_putnbr_fd(nb / 10);
		ft_putnbr_fd(nb % 10);
	}
	else
		ft_putchar_fd(nb + '0');
}
