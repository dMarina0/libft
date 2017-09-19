#include<stdio.h>
#include<stdlib.h>

 


char	*ft_strmapi(char const *s,char (*f)(unsigned int , char)){
	unsigned int i;

	i=0;

	char	*new;

	new = ft_strnew(ft_strlen(s));

	while(s[i])
	{
		new[i]=(*f)(i,s[i]);
		i++l
	}
	return (new);
}
