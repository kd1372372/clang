#include<stdio.h>
main()
{
	int su,i;
	i = 0;

	printf("数を入れて：");
	scanf("%d", &su);

	while (i <= 10) {
		printf("%d + %d = %d \n", su, i, su + i);
		i++;
	}
}