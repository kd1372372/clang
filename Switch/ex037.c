#include<stdio.h>
main()
{
	char moji;

	printf("���Z�q�����āF");
	scanf("%c", &moji);

	switch (moji) {
		case '+':
			printf("���Z");
			break;

		case '-':
			printf("���Z");
			break;

		case '*':
			printf("��Z");
			break;

		case '/':
			printf("���Z");
			break;

		case '%':
			printf("��]");
			break;

		default:
			printf("���̑�");

	}
}