#include<stdio.h>

main()
{
	int su;

	printf("0から100までの整数を入力：");
	scanf("%d", &su);

	if (su >= 90) {
		printf("その数値の判定結果は「5」です\n");
	}
	else if (su >= 80) {
		printf("その数値の判定結果は「4」です\n");
	}
	else if (su >= 50) {
		printf("その数値の判定結果は「3」です\n");
	}
	else if (su >= 30) {
		printf("その数値の判定結果は「2」です\n");
	}
	else {
		printf("その数値の判定結果は「1」です\n");
	}
}