#include<stdio.h>
void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo);

main()
{
	int a, b, c, d, e, f;

	printf("���l1�H");
	scanf("%d", &a);

	printf("���l2�H");
	scanf("%d", &b);

	shisoku(a, b, &c, &d, &e, &f);
	puts("���l1�Ɛ��l2�̎l�����Z"); //puts�E�E�E1�s�o�́i����ɍŌ���s�����j
	printf("wa = %d sa = %d seki = %d syo = %d\n", c, d, e, f);
}

void shisoku(int x, int y, int* wa, int* sa, int* sk, int* syo)
{
	*wa = x + y;
	*sa = x - y;
	*sk = x * y;
	*syo = x / y;
}