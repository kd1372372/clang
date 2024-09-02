#include<stdio.h>
int gokei(int su1, int su2, int su3);
float heikin(int su1, int su2, int su3);

main()
{
	int su1, su2, su3,g;
	float h;

	printf("®”‚ğ3‚Â“ü—ÍF");
	scanf("%d%d%d", &su1, &su2, &su3);

	g = gokei(su1, su2, su3);
	h = heikin(su1, su2, su3);

	printf("‡Œv‚Í%d\n•½‹Ï‚Í%.2f", g, h);
}

int gokei(int su1, int su2, int su3)
{
	int gokei;
	gokei = su1 + su2 + su3;
	return gokei;
}
float heikin(int su1, int su2, int su3)
{
	float heikin;
	heikin = (su1 + su2 + su3) / 3.0;
	return heikin;
}