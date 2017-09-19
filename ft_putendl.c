#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}


void ft_putendl(char const *s)
{
	int i;
	i=0;

	while(s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
	ft_putchar('\n');
}



int main()
{
	char a[10]="Marina";

	ft_putendl(a);
	return(0);
}
