#include<stdio.h>

main()
{
	float ia, ib;

	printf("2�̎�������́F");
	scanf("%f%f", &ia, &ib);

	printf("* * * %.1f��%.1f�̎l�����Z * * *\n", ia, ib);

	printf("�a��%f\t", ia + ib);
	printf("����%f\t", ia - ib);
	printf("�ρ�%f\t", ia * ib);
	printf("����%f\t", ia / ib);
}