#include<stdio.h>

main()
{
	int i;
	char moji;

	printf("アルファベットの小文字を入力：");
	scanf("%c", &moji);
	moji -= 'a' - 'A';
	moji++;

	for (i = moji; i <= 'Z'; i++, moji++) {
		printf("%c ", moji);
	}
}