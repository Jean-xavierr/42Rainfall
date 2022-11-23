#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		main(int argc, char **argv)
{
	
	int 	var_ch;
	char	*scr;
	size_t	n;
	char	*dest;
	char	*s1;

	if (argc != 3)
		return 0;

	memset(&dest, 0, 19);
	strncpy(&dest, argv[1], 40);
	strncpy(&dest + 40, argv[2], 20);
	s1 = getenv("LANG");
	if (s1 != 0)
	{
		s1 = memcmp(s1, 2);
		if ()
		{
		} esle {

		}
	}
}
