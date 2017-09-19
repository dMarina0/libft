#include<stdio.h>
#include<string.h>




char *ft_strstr(const char *s1,const char *s2){
	int i;
	int j;
	i=0;
	
	char *str;

	str = (char *)s1;
	if(str && s2)
	{
		if(!*s2)
			return str;

		while(str[i])
		{
			j=0;
			while(s2[j] == str[i+j])
			{
				if(!(s2[j+1]))
					return(str+i);
				j++;
			}
			i++;

		}

	}
	return(NULL);
}

int main()
{
	char a[]="TutorialPoint";
	char b[]="Point";

	char *c;

	c=(char*)ft_strstr(a,b);
	if(c!=NULL)
		printf("Subsirul gasit este : %s \n" , c);
	return(0);
}
