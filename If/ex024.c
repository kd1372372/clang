#include<stdio.h>
main() {
	char moji;
	printf("•¶Žš‚ð“ü—ÍF");
	scanf("%c", &moji);

	if (moji >= 'A') {
		if (moji <= 'Z') {
			printf("‘å•¶Žš‚Å‚·");
		}
		else {
			printf("‚»‚êˆÈŠO");
		}
	}
	else {
		printf("‚»‚êˆÈŠO");
	}
}