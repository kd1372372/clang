#include<stdio.h>

main()
{
	int  su = 1,g = su;

	printf("%d", su);

	while (g <= 300) {
		su++;
		printf("+%d", su);
		g += su;

	}

	printf("=%d\n", g);
}