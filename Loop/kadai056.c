#include<stdio.h>

main()
{
	int i;
	char moji;

	printf("�A���t�@�x�b�g�̏���������́F");
	scanf("%c", &moji);

	for (i = moji; i <= 'z'; i++, moji++) {
		printf("%c ", moji);
	}
}