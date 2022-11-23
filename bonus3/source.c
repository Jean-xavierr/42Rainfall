#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	int	var1;
	int	var2;
	FILE	fd;
	void	ptr[16];
	void	ptr2[66];
	
	fd = fopen("/home/user/end/.pass", 0x80486f0);
	if (argc != 2) {
		var1 = -1
	} else {
		fread(ptr, 1, 66, fd);
        	var2 = atoi(argv[1]);
        	ptr[var2] = "\0";
        	fread(ptr2, 1, 65, fd);
        	fclose(fd);
        	iVar2 = strcmp(ptr, argv[1]);
        	if (iVar2 == 0) {
           		execl("/bin/sh", 0x8048707, 0);
        	} else {
            		puts(ptr2);
        	}
        	uVar1 = 0;	
	}
	return var1;
}
