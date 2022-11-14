
int	n(void)
{
	char s[512];

    	fgets(s, 512, stdin);
	printf(s);
	return exit(1);
}

void	o(void)
{
	system("/bin/sh");
	return exit(1);
}

int	main(void)
{
	n();
	return ;
}
