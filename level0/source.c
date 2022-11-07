#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	char	*s;
	char	*command;

	if (atoi(argv[1]) != 423)
		printf("No !\n");
	else {
		s = strdup("/bin/sh");
		// setresgid(getegid(), getegid(), getegid());
		// setresuid(geteuid(), geteuid(), geteuid());
		// execv(s, command);
		system(s);
	}
	return 0;
};
