#include<stdio.h>
main()
{
	int s, i, g;

	printf("���́H");
	scanf("%d", &s);

	for (s,i = 0,g = 0; s != -999; s) {
		g = s + g;
		i++;
		
		printf("���́H");
		scanf("%d", &s);
	}

	printf("���v�F%d \n���ρF%.2f", g, (float)g/i);
}