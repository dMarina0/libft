#include<stdio.h>






int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	i = 0;
	char *unu = (char*)s1;
	char *doi = (char*)s2;

	while (unu[i] == doi[i] &&i < n&& unu[i] && doi [i])
	{
		i++;
	}
	return (unu[i] - doi[i]);
}


int main()
{
	char a[10]="abcdef";
	char b[10]="ABCDEF";

	int c;
	c=ft_memcmp(a,b,5);
	printf("nr : %d \n" , c);
	return(0);
}
	
