#include<stdio.h>

main()
{
	int su;

	printf("整数を入力：");
	scanf("%d", &su);

	if (su > 0) {
		printf("プラス\n");
	}
	else if (su < 0) {
		printf("マイナス\n");
	}
	else {
		printf("0\n");
	}
}