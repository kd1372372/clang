#include<stdio.h>
main() {
	char moji;
	printf("文字を入力：");
	scanf("%c", &moji);

	if (moji >= 'A') {
		if (moji <= 'Z') {
			printf("大文字です");
		}
		else {
			printf("それ以外");
		}
	}
	else {
		printf("それ以外");
	}
}