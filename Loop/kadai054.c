#include<stdio.h>

main()
{
	int i, j;

	printf("整数を入力：");
	scanf("%d", &j);

	for (i = 0; i < j; i++) {
		printf("自分の名前\n");
	}
}