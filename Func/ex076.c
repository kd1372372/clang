#include<stdio.h>
void get_sumavg(int x, int y, int* sum, float* avg);

main()
{
	int su1, su2, sum;
	float avg;

	printf("®”‚ğ2‚Â“ü—ÍF");
	scanf("%d%d", &su1, &su2);

	get_sumavg(su1, su2,&sum,&avg);

	printf("‡Œv%d •½‹Ï%.2f", sum, avg);
}

void get_sumavg(int x, int y, int* sum, float* avg)
{
	*sum = x + y;
	*avg = (float)(x + y) / 2;
}