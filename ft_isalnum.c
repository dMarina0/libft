#include<stdio.h>
#include<string.h>




int		ft_isalnum(int c)
{
	if(c >=48 && c<=57)
		return(1);
	if(c>=65 && c <=90)
		return(1);
	if(c>=87 && c<=122)
		return (1);
	else
		return(0);
}
