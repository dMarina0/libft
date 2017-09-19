#include<stdio.h>
#include<string.h>




int ft_isalpha(int c)
{
	

	if((c >= 97 && c<= 122) ||(c >= 65 && c <= 90))
	       return (1);
	else
	return (0);
}

int main(){
	int a;

	a=ft_isalpha('0');
	if(a==1)
		printf("Alfabetic");
	else
		printf("nu e alfabetic");
}

