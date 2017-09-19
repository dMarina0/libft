#include<stdio.h>
#include<string.h>





int		ft_toupper(int c)
{
	if(c >=97 && c <=122)
		return (c-32);
	else
		return c;
}


int main(){
	
	printf("upper : %c \n" ,ft_toupper('A'));
	return(0);
}
