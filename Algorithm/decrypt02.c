#include<stdio.h>

main()
{
	char s[30];
	int k[30];
	int i;

	printf("���������́F");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]�̕������L�[�F", i);
		scanf("%d", &k[i]);

		s[i] = s[i] - k[i];
	}

	printf("������������F%s", s);
}