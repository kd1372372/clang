#include<stdio.h>
main()
{
	int su;

	printf("数を入れて：");
	scanf("%d", &su);
	
	while (0 < su) {
		printf("*");
		su--;
	}
}