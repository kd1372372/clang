#include<stdio.h>

main()
{
	int su1, su2;

	printf("整数1を入力：");
	scanf("%d", &su1);

	printf("整数2を入力：");
	scanf("%d", &su2);

	if (su1 > su2) {
		printf("%dのほうが%dより%d大きい\n", su1, su2, su1 - su2);
	}
	else if (su1 < su2) {
		printf("%dのほうが%dより%d小さい\n", su1, su2, su2 - su1);
	}
	else {
		printf("%dと%dは等しい", su1, su2);
	}
}