#include<stdio.h>






void	ft_striter(char *s , void (*f)(char *s)){
	int		i;
	i=0;

	while(s[i])
	{
		f(s[i]);
		i++;
	}
}
