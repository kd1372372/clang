#include<stdio.h>

main()
{
	int c;
	char dumy[256];
	char data,data2; //入力用

	c = scanf("%c%c",&data,&data2);//入力

	while (c != EOF) {//Ctrl + Zで終了
		printf("%d",c);
		putchar('\n');
		gets(dumy);
		c = scanf("%c%c", &data, &data2);//入力
	}
}