#include<stdio.h>

main()
{
	int i;
	char moji;

	printf("�A���t�@�x�b�g�̏���������́F");
	scanf("%c", &moji);
	moji -= 'a' - 'A';
	moji++;

	for (i = moji; i <= 'Z'; i++, moji++) {
		printf("%c ", moji);
	}
}