#include<stdio.h>

main()
{
	int ia;

	printf("10進数の整数を入力：");
	scanf("%d", &ia);

	printf("8進数=%o\t16進数=%x", ia, ia);
}