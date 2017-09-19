#include<stdio.h>
#include<string.h>


char *ft_strcpy(char *dst, const char *src){

	int i;

	i = 0;

	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}



int main(){
	char a[]="Marinaaaa";
	char b[100];


	ft_strcpy(b,a);

	printf("Sirul copiat este : %s \n",b);
	printf("Lungimea: %d \n", strlen(b));
	return (0);

}
