#include<stdio.h>
main()
{
	int num, g;
	g = 0;

	while(1){
		printf("�������āF");
		scanf("%d", &num);

		if (num == -999) {
			break;
		}

		g = g + num;
	}

	printf("���v��%d", g);
}