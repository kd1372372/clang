#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	char s[30];
	int i, k[30], n;

	//乱数のシャッフル
	srand(time(0));

	printf("文字列を入力：");
	scanf("%s", &s);

	for (i = 0; s[i] != '\0'; i++) {
		k[i] = rand() % 6;
		s[i] = s[i] + k[i];
	}

	printf("暗号化文字列%s\n", s);
	printf("暗号化キーは、");

	for (n = 0; n < i; n++) {
		printf("%d ", k[n]);
	}
}