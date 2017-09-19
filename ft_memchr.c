#include<stdio.h>
#include<string.h>

void *memchr(const void *s, int c, size_t n){

	const unsigned char *src = s;
	 
	while (n)
	{
	    if (*src == (unsigned char)c){

		return (void*)(src);
	    }
	    else
	    {
		++src;
	    --n;
	    }
	}
	return (NULL);
}

int main(){
	char s[]="Marina";
	char *c;

	c=(char*)memchr(s,'i',strlen(s));
	if(c != NULL)
	printf("%d \n" , c-s+1);
	else
		printf("not found \n");
	return (0);
}



