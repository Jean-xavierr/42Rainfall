#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void	run()
{
	printf("Good... Wait what?");
	system("/bin/sh");
}


int	main(void)
{
	char	*s;
	gets(s);
	return 0;
}
