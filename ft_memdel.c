#include<stdio.h>
#include<stdlib.h>



void	ft_memdel(void **ap)
{
	if(ap && *ap)
	{
		free(*ap);
		*ap = NULL;
	}
}
