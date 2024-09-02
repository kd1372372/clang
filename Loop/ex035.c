#include<stdio.h>
main()
{
	int num, g;
	g = 0;

	while(1){
		printf("”‚ğ“ü‚ê‚ÄF");
		scanf("%d", &num);

		if (num == -999) {
			break;
		}

		g = g + num;
	}

	printf("‡Œv%d", g);
}