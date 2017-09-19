#include<stdio.h>
#include<stdlib.h>



char	*ft_strmap(char const *s . char (*f)(char)){
	int i;

	i=0;

	char *new;


	new = ft_strnew(ft_strlen(s));
	while(s[i])
	{
		new[i]=(*f)(s[i]);
		i++;
	}
	return(new);
}
