#include<stdio.h>

main() {
	int su, g = 0;
	float h = 0;

	printf("整数を入力（-999で終了）：");
	scanf("%d", &su);

	while (su != -999) {
		g += su;
		h++;
		printf("整数を入力（-999で終了）：");
		scanf("%d", &su);
	}

	printf("合計：%d\n", g);
	printf("平均：%.2f\n", (float)g / h);
}