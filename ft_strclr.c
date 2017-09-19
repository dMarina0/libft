#include<stdio.h>





void	ft_strclr(char *s){
   	int i;
	i=0;
	while(s[i])
 	{
		s[i] = '\0';
		i++;
	}
}




int main(){
	char a[]="Marina";
	
		ft_strclr(a);
	printf("Sirul este : %s \n" ,a);
	return (0);
}
