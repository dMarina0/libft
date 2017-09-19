#include<stdio.h>
#include<string.h>



char *ft_strncpy(char *dst,const char *src, size_t n){

	size_t i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dst[i] = src[i];
			i++;
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}

	return (dst);
}

int main(){
	char a[]="Ana are mere";
	char b[50];

	ft_strncpy(b,a,5);
	printf("Sirul este : %s \n" , b);
	printf("lungimea : %d \n" ,strlen(b));
	return (0);
}
