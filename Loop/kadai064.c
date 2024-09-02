#include<stdio.h>

main()
{
	int i = 20;

	while(i >= 1) {
		printf("%3d", i);
		if (i == 11) {
			printf("\n");
		}
		i--;
	}
}