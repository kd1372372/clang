#include<stdio.h>

main()
{
	int su, i;

	printf("整数を入力：");
	scanf("%d", &su);
	printf("%d ", su);

	for (i = 0; i < 10; i++) {
		su++;
		printf("%d ", su);
	}
}