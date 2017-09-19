#include<stdio.h>
#include<string.h>



char *ft_strcat(char *dst, const char *src)
{
	size_t	i;
	i = 0;

	size_t j;
	j = 0;
	
	while (dst[i] != '\0')
	{
		
		i++;
	}
	
	while (src[j] != '\0')
	{
		dst[i+j] = src[j];
		j++;
		
	}	

	return (dst);
}


int main(){
	char a[20]="Marina";
	char b[20]="Doci";

	ft_strcat(a,b);
	printf("Sirul concatenat este : %s \n" ,a);
	printf("Lungimea : %d \n" ,strlen(a));
	return(0);
}

