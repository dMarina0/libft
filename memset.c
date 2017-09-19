
#include<stdlib.h>
#include<stdio.h>

void *memset(void *str,int c,size_t n)
{
	unsigned char *p;

	if(n == 0)
		return(str);
	
	p = (unsigned char *)str;

	while(--n)
	{
	*p = (unsigned char)c;
	p++;	
	}

	return (str);
}


int  main()
{	char l[]="Hello";
	
	memset(l, 'a' , 4);
	printf("%s \n",l);
	return(0);
}
