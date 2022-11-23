#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	main(int argc, char **argv)
{
	void	var1;
	void	stack[40];
	int	istack;

	istack = atoi(argv[1]);
	if (istack < 10) {
		memcpy(stack, argv[2], istack * 4);
		if (istack == 0x574f4c46) {
            		execl("/bin/sh", 0x8048580, 0);
      		}
		var1 = 0;
	} else {
		var1 = 1;
	}
	return var1;
}
