#include<stdio.h>

main()
{
	float ia, ib;

	printf("2‚Â‚ÌÀ”‚ğ“ü—ÍF");
	scanf("%f%f", &ia, &ib);

	printf("* * * %.1f‚Æ%.1f‚Ìl‘¥‰‰Z * * *\n", ia, ib);

	printf("˜a%f\t", ia + ib);
	printf("·%f\t", ia - ib);
	printf("Ï%f\t", ia * ib);
	printf("¤%f\t", ia / ib);
}