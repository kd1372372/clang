#include<stdio.h>
main()
{
	int su,i;
	i = 0;

	printf("数を入れて：");
	scanf("%d", &su);

	while (i < su) {
		printf("*");
		i += 1;
	}
}