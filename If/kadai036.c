#include<stdio.h>

main()
{
	int su1, su2;

	printf("����1����́F");
	scanf("%d", &su1);

	printf("����2����́F");
	scanf("%d", &su2);

	if (su1 > su2) {
		printf("%d�̂ق���%d���%d�傫��\n", su1, su2, su1 - su2);
	}
	else if (su1 < su2) {
		printf("%d�̂ق���%d���%d������\n", su1, su2, su2 - su1);
	}
	else {
		printf("%d��%d�͓�����", su1, su2);
	}
}