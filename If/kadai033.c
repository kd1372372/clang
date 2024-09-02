#include<stdio.h>

main()
{
	char moji;

	printf("アルファベットを入力：");
	scanf("%c", &moji);

	if (moji >= 'A' && moji <= 'Z') {
		printf("大文字です\n");
	}
	else {
		printf("小文字です\n");
	}
}