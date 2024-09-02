#include<stdio.h>
main()
{
	int seireki;
	printf("¼—ï‚ğ“ü—ÍF");
	scanf("%d", &seireki);
	
	if (seireki % 4 == 0 && seireki % 100 != 0 || seireki % 400 == 0) {
		printf("‚¤‚é‚¤”N‚Å‚·");
	}
	else {
		printf("‚¤‚é‚¤”N‚Å‚Í‚ ‚è‚Ü‚¹‚ñ");
	}
}