#include<stdio.h>

main()
{
	int i, g = 0,h = 0;

	do {
		printf("���������(-999�ŏI��)�F");
		scanf("%d", &i);

		g += i;
		h++;
	} while (i != -999);

	printf("���v��%d\n", g+999);
	printf("���ρ�%f\n", (float)(g+999) / (h - 1));
}