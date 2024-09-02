#include<stdio.h>
main()
{
	int s, g;

	for (g = 0, s = 1; s <= 10; s++) {
		g = s + g;
		printf("1‚©‚ç%d‚Ü‚Å‚Ì˜a%d \n", s, g);
	}
}