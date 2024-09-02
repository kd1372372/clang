#include<stdio.h>

main()
{
	int su1 = 100, su2 = 10;
	int* p_su1, * p_su2;
	
	printf("%d + %d = %d\n", su1, su2, p_su1 + p_su2);
}