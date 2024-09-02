#include<stdio.h>

main()
{
	char moji;

	printf("1•¶Žš“ü—ÍF");
	scanf("%c", &moji);

	if (moji >= 'A' && moji <= 'Z') {
		moji += 32;
		printf("%c", moji);
	}
	else if (moji >= 'a' && moji <= 'z') {
		moji -= 32;
		printf("%c", moji);
	}
	else {
		printf("%c", moji);
	}
}