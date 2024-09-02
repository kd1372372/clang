#include<stdio.h>
main()
{
	float x[3][3], gokei = 0;
	int i, j;

	for (i = 0; i < 3; i++) {
		for (gokei = 0,j = 0; j < 2; j++) {
			printf("a[%d][%d] = ", i, j);
			scanf("%f", &x[i][j]);
			gokei += x[i][j];
		}
		printf("%ds–Ú‚Ì•½‹Ï%.2f\n", i, gokei / 2.0);
	}
}