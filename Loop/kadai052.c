#include<stdio.h>

main()
{
	int i;

	for (i = 0; i < 60; i++) {
		printf("%2d ", i + 1);
		if ((i + 1) % 20 == 0) {
			printf("\n");
		}
	}
}