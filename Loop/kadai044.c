#include<stdio.h>

main()
{
	int su;

	printf("��������́F");
	scanf("%d", &su);

	while (su != -999) {
		printf("8�i����%o\t16�i����%X\n", su, su);

		printf("��������́F");
		scanf("%d", &su);
	}
}