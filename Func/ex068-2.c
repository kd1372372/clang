#include<stdio.h>

main()
{
	int c;
	char dumy[256];
	char *p;

	p = gets(dumy); //入力

	while (p != NULL) { //Ctrl + Zで終了

		printf("%s\n", dumy);
		p = gets(dumy); //入力
	}
}