#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char		*strdup(const char *s){

	char *d = malloc(strlen(s)+1);
	if(d !=	NULL)
		ft_strcpy (d,s);
	return (d);
}


int main(){
	char a[]="Marinaa";
	char *b;

	b=strdup(a);
	printf("Sirul este : %s \n" ,b);

	return(0);
}
