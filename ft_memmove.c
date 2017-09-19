#include<stdio.h>
#include<string.h>


void *memmove(void *dest ,const void *src ,size_t n){

	unsigned char tmp[n];
	ft_memcpy(tmp,src,n);
	ft_memcpy(dest,tmp,n);
	return dest;
}

int main()
{
	char str[50] = "memmove can be very useful...";
	char m[50];
	memmove(m,str,11);
	printf("Sirul %s \n" ,m);
	return(0);
}
