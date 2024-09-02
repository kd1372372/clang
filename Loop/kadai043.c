#include<stdio.h>

main()
{
	int d;

	printf("文字コードを入力（-1で終了）：");
	scanf("%d", &d);

	while (d != -1) {
		printf("%c\n", d);
		
		printf("文字コードを入力（-1で終了）：");
		scanf("%d", &d);
	}
}