#include<stdio.h>

main()
{
	float ia, ib;

	printf("2�̎�������́F");
	scanf("%f%f", &ia, &ib);

	if (ia > ib) {
		printf("�傫���ق���%f", ia);
	}
	else {
		printf("�傫���ق���%f", ib);
	}
}