#include<stdio.h>
main()
{
	int s, i;

	printf("整数を入力：");
	scanf("%d",&s);

	for (i = 1; i <= 5; i++) {
		printf("%d ", s * i);
	}
}