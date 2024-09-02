#include<stdio.h>

main()
{
	int i, g = 0;

	for (i = 32; i <= 126; i++) {
		printf("%x %c", i, i);
		g++;

		if (g % 10 == 0) {
			printf("\n");
		}
	}
}