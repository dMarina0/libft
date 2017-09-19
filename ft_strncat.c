#include<stdio.h>
#include<string.h>




char *ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i+j] = src[j];
		j++;
		n--;
	}
	return (dest);
}

int main(){
	char a[20]="Marina";
	char b[20]="doci";

	ft_strncat(a,b,3);
	printf("Sirul este : %s \n" ,a);
	return(0);
}
