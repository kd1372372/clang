#include<stdio.h>

main()
{
	int data, sum, cnt,ret;
	sum = 0;
	cnt = 0;

	printf("®”F");
	ret = scanf("%d", &data);//“ü—Í

	while (ret != EOF) {
		sum += data;
		cnt += 1;

		printf("®”F");
		ret = scanf("%d", &data);//“ü—Í
	}

	printf("‡Œv%d", sum);
	printf("•½‹Ï%.2f", (float)sum / cnt);
}