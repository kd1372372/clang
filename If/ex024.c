#include<stdio.h>
main() {
	char moji;
	printf("��������́F");
	scanf("%c", &moji);

	if (moji >= 'A') {
		if (moji <= 'Z') {
			printf("�啶���ł�");
		}
		else {
			printf("����ȊO");
		}
	}
	else {
		printf("����ȊO");
	}
}