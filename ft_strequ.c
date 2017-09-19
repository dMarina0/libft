#include<stdio.h>
#include<string.h>





int		ft_strequ(char const *s1 , char const *s2){
	
	return(!ft_strcmp(s1,s2));

}




int main(){
	char a[]="msna";
	char b[]="mina";

	int c;

	c=ft_strequ(a,b);
	printf("nr : %d \n" ,c);
	return(0);
}
