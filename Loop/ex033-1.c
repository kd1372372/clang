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

		printf("数は？");
		scanf("%d", &s);

	} while (s != -999);

	printf("合計：%d \n平均：%.2f", g, (float)g/(i-1));
}