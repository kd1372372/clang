#include<stdio.h>
main()
{
	int seireki;
	printf("西暦を入力：");
	scanf("%d", &seireki);
	
	if (seireki % 4 == 0 && seireki % 100 != 0 || seireki % 400 == 0) {
		printf("うるう年です");
	}
	else {
		printf("うるう年ではありません");
	}
}