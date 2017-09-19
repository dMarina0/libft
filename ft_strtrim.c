#include<stdio.h>
#include<stdlib.h>
#include<string.h>





char		*ft_strtrim(char const *s)

{	
	char *new;
	char *str;

	str = (char*)s;
	size_t i;
	i = 0;
	size_t len;
	new = (char*)malloc(42 *sizeof(strlen(s)));
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	len = strlen(str)-1;
	
	while (str[len] == ' ' || str[len] == '\t' || str[len] == '\n')
		len--;

	while (i <= len)
	{
		new[i] = str[i];
		i++;
		return (new);
	}
	return (NULL);
}


int main(){
	char a[]=" ma r i	na";

	char *b;

	b=(char*)ft_strtrim(a);
	if(b!= NULL)
		printf("Sirul: %s \n " ,b);
	else
		printf("Erooare");
	return(0);
}
