#include<stdio.h>

main()
{
	char s[30];
	int k[30];
	int i;

	printf("文字列を入力：");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]の復号化キー：", i);
		scanf("%d", &k[i]);

		s[i] = s[i] - k[i];
	}

	printf("復号化文字列：%s", s);
}