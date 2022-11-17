#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *c;

void m(void)
{
    time_t uVar1;
    
    uVar1 = time(0);
    printf("%s - %d\n", c, uVar1);
    return;
}


int     main(int argc, char **argv)
{
    char    *var_one;
    char    var_two;
    char    *var_three;

    var_one = (char *)malloc(8);
    *var_one = 1;
    var_two = malloc(8);
    var_one[1] = var_two;
    var_three = (char *)malloc(8);
    *var_three = 2;
    var_three[1] = var_two;
    
    strcpy(var_one[1], argv[1]);
    strcpy(var_three[1], argv[2]);
    
    var_two = fopen("/home/user/level8/.pass", 0x80486e9);
    fgets(c, 68, var_two);
    puts(0x8048703);
    
    return 0;
}
