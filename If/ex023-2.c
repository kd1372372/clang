#include<stdio.h>
main()
{
	int seireki;
	printf("�������́F");
	scanf("%d", &seireki);
	
	if (seireki % 4 == 0 && seireki % 100 != 0 || seireki % 400 == 0) {
		printf("���邤�N�ł�");
	}
	else {
		printf("���邤�N�ł͂���܂���");
	}
}