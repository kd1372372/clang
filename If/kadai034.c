#include<stdio.h>

main()
{
	char moji;

	printf("�A���t�@�x�b�g����́F");
	scanf("%c", &moji);

	if (moji >= 'A' && moji <= 'Z') {
		printf("�啶���ł�\n");
	}
	else if (moji >= 'a' && moji <= 'z') {
		printf("�������ł�\n");
	}
	else {
		printf("ERROR");
	}
}