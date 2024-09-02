#include<stdio.h>

main()
{
	int i, g = 0,h = 0;

	do {
		printf("®”‚ğ“ü—Í(-999‚ÅI—¹)F");
		scanf("%d", &i);

		g += i;
		h++;
	} while (i != -999);

	printf("‡Œv%d\n", g+999);
	printf("•½‹Ï%f\n", (float)(g+999) / (h - 1));
}