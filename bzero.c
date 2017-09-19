#include <unistd.h>
#include<string.h>
#include<stdio.h>


void bzero(void *s , size_t n)
{
	unsigned char *p;
	p =s;
	while(n>0)
	{
		*p= '0';
		n--;
		p++;	
	}

}


int main()
{
	
         char s[] = "Hello";
	bzero(s , 3);
	printf("%s \n" ,s);

	return(0);
}
