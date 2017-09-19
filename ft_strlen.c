#include<stdio.h>
#include<string.h>



size_t ft_strlen(const char *str)
{

	size_t i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}


int main(){
	char str[]="Ana are mere";
	size_t l;

	l=strlen(str);
	printf("Lungimea sirului este : %d \n",l);
	return(0);
}
