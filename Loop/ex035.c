#include<stdio.h>
main()
{
	int num, g;
	g = 0;

	while(1){
		printf("数を入れて：");
		scanf("%d", &num);

		if (num == -999) {
			break;
		}

		g = g + num;
	}

	printf("合計＝%d", g);
}