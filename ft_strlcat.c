#include<stdio.h>
#include<string.h>


size_t	ft_strlcat(char *dst, const char *src, size_t size)
{

	char *d = (char *)dst;
	char *s = (char *)src;
	size_t n = size;
	size_t dlen;

	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d- dst;
	n = size - dlen;

	if (n == 0)
		return (dlen + strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';

	return (dlen + (s - src));
}

int main(){
	char a[20]="DMarina";
	char b[20];
	size_t c;
	c=ft_strlcat(b,a,5);
	printf("nr : %d \n" ,c);
	return (0);
}
