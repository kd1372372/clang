#include<stdio.h>

main()
{
	int d[] = {10,5,30,77,16,3,47,29,37,33};
	int s, i;

	printf("’Tõ’l‚ğ“ü—ÍF");
	scanf("%d", &s);

	i = 0;
	while (i < 10) {
		if (s == d[i])break;
		i++;
	}
	if (i >= 10) {
		printf("Œ©‚Â‚©‚ç‚È‚©‚Á‚½");
	}
	else {
		printf("”z—ñ‚Ì%d”Ô–Ú‚ÉŒ©‚Â‚©‚Á‚½", i);
	}
}