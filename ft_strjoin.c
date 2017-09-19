#include<stdio.h>
#include<stdlib.h>
#include<string.h>





char*	ft_strjoin(char const *s1,char const *s2)
{

	char *new;

	int a = strlen(s1)+strlen(s2);

	new = malloc(a);
	while(*s1 && *s2)
	{
		new=ft_strcpy(new,s1);
		new=ft_strcat(new,s2);
		
		
		return new;
	}
	return(NULL);
}

int main(){
	char a[]="Doci";
	char b[]="Marina";

	char *c;

	c=(char*)ft_strjoin(a,b);
	if(c!=NULL)
		printf("Sirul este: %s \n " ,c);
	else
		printf("Eroare");
	return(0);
}
