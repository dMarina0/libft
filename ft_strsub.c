#include<stdio.h>
#include<stdlib.h>
#include<string.h>



char*	ft_strsub(char const *s ,unsigned int start , size_t len)
{
	char *new;
	
	unsigned int i;
	i=0;
	char *str;
	str=(char*)s;
	new =malloc(len);

	while(str && new && i<len)
	{
		new[i]=str[start];
		start++;
		i++;
		
	return(new);
	}
	return(NULL);
}



int main()
{
	char a[20]= "MarinaDoci";
       char *b;
	b=(char*)ft_strsub(a,3,2);
	if(b != NULL)
		printf("Subsirul este : %s \n",b);
	else
		printf("Roare");
	return(0);
}
	       
	
