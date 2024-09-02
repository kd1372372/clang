#include<stdio.h>
main()
{
	int su;
	printf("整数?：");
	scanf("%d", &su);

	su = su % 2;
	if (su == 0) {
		printf("その数は「偶数」です");
	}
	else {
		printf("その数は「奇数」です");
	}
}