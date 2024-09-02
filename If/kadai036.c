#include<stdio.h>

main()
{
	int su1, su2;

	printf("®”1‚ð“ü—ÍF");
	scanf("%d", &su1);

	printf("®”2‚ð“ü—ÍF");
	scanf("%d", &su2);

	if (su1 > su2) {
		printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d‘å‚«‚¢\n", su1, su2, su1 - su2);
	}
	else if (su1 < su2) {
		printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢\n", su1, su2, su2 - su1);
	}
	else {
		printf("%d‚Æ%d‚Í“™‚µ‚¢", su1, su2);
	}
}