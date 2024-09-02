#include<stdio.h>
main()
{
	char data[6] = "Apple";
	int i;

	printf("一文字ずつ表示\n");

	for (i = 0; data[i] != '\0'; i++) {
		printf("%c\n", data[i]);
	}

	printf("\n文字列で表示\n");
	//printf("%s\n", &data[0]); //%sの時はアドレスを指定
	printf("%s\n", data); //配列名だけ書くと先頭アドレスを表す
}