#include<stdio.h>
#include<stdlib.h>
#include<string.h>



void *ft_memalloc(size_t size)
{
	void *p;

	p=(void*)malloc(size);

	if(p)
	{
		bzero(p,size);
		return p;
	}
	return(NULL);
	
}



int main()
{
//	char a[]="Marina";

	char *b;

	b=(void*)ft_memalloc(3);
	if(b!= NULL)
	printf("Rez : %s \n" ,b);
	else
		printf("Eroare");
	return(0);
}
