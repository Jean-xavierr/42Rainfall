#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	p(char *dest. char *s)
{
	void *var1;
	char *var2;

	puts(s);
	read(0, var2, 4096);
	var1 = (void *)strchr(var2, 10);
	*var1 = 0;
	strncpy(dest, &var2, 20);
	return ;
}


void	pp(char *dest)
{
	char	*var3;
	int 	var1;
	int 	var4;
	int 	var30;
	

	var4 = 0;
	p((char *)&var30, " - ");
	p((char *)&var1, " - ");
	var2 = 0xffffffff;
    	var3 = dest;
    	strcat(dest, &var1);
    	return;
}


int	main(void)
{
	char stack[54];

	pp(stack);
	puts(stack);
	return 0;
}
