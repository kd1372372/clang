#include<stdio.h>

main() {
	int su, g = 0;
	float h = 0;

	printf("��������́i-999�ŏI���j�F");
	scanf("%d", &su);

	while (su != -999) {
		g += su;
		h++;
		printf("��������́i-999�ŏI���j�F");
		scanf("%d", &su);
	}

	printf("���v�F%d\n", g);
	printf("���ρF%.2f\n", (float)g / h);
}