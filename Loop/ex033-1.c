#include<stdio.h>
main()
{
	int s, i, g;

	i = 0;
	g = 0;
	s = 0;

	do {
		g += s;
		i++;

		printf("���́H");
		scanf("%d", &s);

	} while (s != -999);

	printf("���v�F%d \n���ρF%.2f", g, (float)g/(i-1));
}