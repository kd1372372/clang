#include<stdio.h>

main()
{
	int i;
	char moji;

	printf("アルファベットの小文字を入力：");
	scanf("%c", &moji);

	for (i = moji; i <= 'z'; i++, moji++) {
		printf("%c ", moji);
	}
}