#include<stdio.h>

main()
{
	float ia, ib;

	printf("2つの実数を入力：");
	scanf("%f%f", &ia, &ib);

	if (ia > ib) {
		printf("大きいほうは%f", ia);
	}
	else {
		printf("大きいほうは%f", ib);
	}
}