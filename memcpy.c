#include<stdio.h>
#include<string.h>


void *ft_memcpy(void *dst, const void *src, size_t n)

{

	 char *unu = (char*)dst;
	 char *doi = (char*)src;
	size_t i;
	i = 0;
	if (!dst || !src)
		return (NULL);

	while (i < n)
	{
		unu[i] = doi[i];
		i++;
		
	}
    return ((void*)dst);


}

int main()
{
	char s1[11]= "Hello world";
	char s2[11];
	
	char *b;	

	b=(char*)ft_memcpy(s2,s1,strlen(s1));
	printf("Sirul : %s \n" ,b);
	
}

