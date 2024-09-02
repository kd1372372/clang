#include<stdio.h>

main()
{
	int c;
	char dumy[256];
	char data,data2; //“ü—Í—p

	c = scanf("%c%c",&data,&data2);//“ü—Í

	while (c != EOF) {//Ctrl + Z‚ÅI—¹
		printf("%d",c);
		putchar('\n');
		gets(dumy);
		c = scanf("%c%c", &data, &data2);//“ü—Í
	}
}