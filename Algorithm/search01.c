#include<stdio.h>

main()
{
	int d[] = {10,5,30,77,16,3,47,29,37,33};
	int s, i;

	printf("�T���l����́F");
	scanf("%d", &s);

	i = 0;
	while (i < 10) {
		if (s == d[i])break;
		i++;
	}
	if (i >= 10) {
		printf("������Ȃ�����");
	}
	else {
		printf("�z���%d�ԖڂɌ�������", i);
	}
}