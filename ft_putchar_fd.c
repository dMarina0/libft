#include<unistd.h>


void ft_putchar_fd(char c ,int fd)
{
	write(fd, &c , 1);
}


int main(){
	char a='a';

	ft_putchar_fd(a,2);
	return(0);
}
