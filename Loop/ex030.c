#include<stdio.h>
main()
{
	int su,i;
	i = 0;

	printf("�������āF");
	scanf("%d", &su);

	while (i <= 10) {
		printf("%d + %d = %d \n", su, i, su + i);
		i++;
	}
}