#include<stdio.h>
main()
{
	float g = 0.0,box[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("ŽÀ”‚ð“ü—ÍF");
		scanf("%f", &box[i]);
	}

	for (i = 0; i < 3; i++) {
		g += box[i];
	}

	printf("‡Œv‚Í%.2f‚Å‚·\n", g);
	printf("•½‹Ï‚Í%.2f‚Å‚·", g / 3.0);
}