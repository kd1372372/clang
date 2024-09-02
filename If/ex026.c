#include<stdio.h>
main()
{
	int tuki;
	printf("Œ‚ğ“ü—Í");
	scanf("%d",&tuki);

	if (tuki == 2) {
		printf("ÅI“ú‚Í28“ú‚Å‚·");
	}
	else if(tuki == 4 || tuki == 6 || tuki == 9 || tuki == 11){
		printf("ÅI“ú‚Í30“ú‚Å‚·");
	}
	else {
		printf("ÅI“ú‚Í31‚É‚¿‚Å‚·");
	}
}