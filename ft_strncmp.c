#include<stdio.h>
#include<string.h>



int ft_strncmp(const char *s1, const char *s2 , size_t n)
{
	size_t i;

	i=0;

	while(s1[i]==s2[i] && i <n && s1[i]!= '\0' && s2[i]!= '\0')
		i++;

	return((unsigned char )s1[i] - (unsigned char)s2[i]);
}

int main(){
	char a[]="ina";
	char b[]="mar";

	int c;
	c=ft_strncmp(a,b,2);
	printf("sirul este : %d \n" ,c);
	return(0);
}
