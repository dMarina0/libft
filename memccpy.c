#include<stdio.h>



void *ft_memccpy(void *dst, const void *src, int c, size_t n){

	 char *unu = (char*)dst;
	char *doi = (char*)src;
	size_t i;
	i = 0;
	if (!dst || !src)
		return (NULL);

	
	while (i < n)
	{
		unu[i] = doi[i];
		
		if (unu[i] == (char)c)
			return ((void*)&unu[i + 1]);

		i++;
	}
	return(NULL);

}

int main(){
	char s[20]="Hello World";
	char p[20];
	char *c;

	c=(char*)ft_memccpy(p,s,'o',2);
	
	printf("Sirul :%s \n" , c);
	return(0);
}
