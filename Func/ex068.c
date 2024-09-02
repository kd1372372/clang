#include<stdio.h>

main()
{
	int c;
	char dumy[256];

	c = getchar(); //“ü—Í

	while (c != EOF) { //Ctrl + Z‚ÅI—¹

		putchar(c);
		putchar('\n');
		gets(dumy);
		c = getchar(); // “ü—Í
	}
}