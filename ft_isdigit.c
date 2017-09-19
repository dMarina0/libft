#include<stdio.h>




int ft_isdigit(int c)
{
	if(c>= 48 && c <=57)
		return (1);
	else
		return(0);
}


int main(){
	int a;

	a=ft_isdigit('2');
	if(a==1)
		printf("Numeric");
	else
		printf("neNumeric");
}
