#include<stdio.h>
#include<string.h>



char *ft_strchr(const char *str , int c)
{
	int i;

	i=0;

	while(str[i] != '\0')
	{
		if(str[i] == (char )c)
		{
			return (void*)str;
		
		}
		else
		{
			i++;}
	}
			return (NULL);

	
}


int main(){
	char a[]="Marina";
	char *p;

	p=(char*)ft_strchr(a, 'a');
	if(p != NULL)
	printf("Caracterul a fost gasit la : %d \n" , p-a+1);
	return(0);
}
