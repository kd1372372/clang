#include<stdio.h>
main()
{
	char moji;

	printf("‰‰Zq‚ğ“ü‚ê‚ÄF");
	scanf("%c", &moji);

	switch (moji) {
		case '+':
			printf("‰ÁZ");
			break;

		case '-':
			printf("Œ¸Z");
			break;

		case '*':
			printf("æZ");
			break;

		case '/':
			printf("œZ");
			break;

		case '%':
			printf("è—]");
			break;

		default:
			printf("‚»‚Ì‘¼");

	}
}