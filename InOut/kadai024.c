#include<stdio.h>

main()
{
	int ia, ib;

	printf("2つの整数を入力：");
	scanf("%d%d", &ia, &ib);

	printf("* * * %dと%dの四則演算 * * *\n",ia,ib);

	printf("%d + %d = %d\n", ia, ib, ia + ib);
	printf("%d - %d = %d\n", ia, ib, ia - ib);
	printf("%d * %d = %d\n", ia, ib, ia * ib);
	printf("%d / %d = %dあまり%d\n", ia, ib, ia / ib,ia % ib);
}