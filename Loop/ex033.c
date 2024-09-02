#include<stdio.h>
main()
{
	int s, i, g;

	printf("数は？");
	scanf("%d", &s);

	for (s,i = 0,g = 0; s != -999; s) {
		g = s + g;
		i++;
		
		printf("数は？");
		scanf("%d", &s);
	}

	printf("合計：%d \n平均：%.2f", g, (float)g/i);
}