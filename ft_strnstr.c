#include<stdio.h>
#include<string.h>



char *ft_strnstr(const char *s1, const char *s2 , size_t n){

	size_t i;
	size_t j;

	i=0;
	j=0;

	char *str;

	str=(char *)s1;

	if(str && s2)
	{
		if(!*s2)
			return str;

		while(str[i] && i < n)
		{
			j=0;
			while(s2[j]==str[i+j])
			{
				if(!(s2[j+1]))
					return(str+i);
				j++;
			}
			i++;
			n--;
		}
		    
	}
	return (NULL);
}



int main(){

	char a[]="MarinaDoci";
	char b[]="Doci";

	char *c;

	c=(char *)ft_strnstr(a,b,2);
	if(c!= NULL)
	printf("Subsirul este : %s \n" , c);
	else
		printf("Eroare \n");
	return (0);
}
		
