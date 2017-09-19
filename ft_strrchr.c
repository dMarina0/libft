#include<stdio.h>
#include<string.h>



char *ft_strrchr(const char *str ,int c){

/*	int i;

	i=strlen(str);
	//int j=0;

	//while(str[i] != '\0')
	//{
	//	i++;

	//}
	while(str[i]!= '\0'){
		if(str[i] == (unsigned char) c)
			return(void *)(str);
		else
			i--;
	}
	return(NULL);
*/

	const	char *r = (char *)0;
	while(*str){
		if(*str== (unsigned char )c)
			r=str;
		str++;
	}
	return (void*) r;
}

int main(){
       char a[]="Marxaxa";
       char *p;

	p= (char*)ft_strrchr(a,'x');
 if(p !=NULL)
 	printf("Caracterul a fost gasit la  : %d \n" ,p-a+1);
return(0);
}
	
