#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int su,com;
	printf("何を出しますか？\n(1:グー　2:チョキ 3:パー)＞");
	scanf("%d", &su);

	com = rand() % 3;
	switch (su) {
		case 1:
			printf("プレイヤーはグーです\n");
			break;
		case 2:
			printf("プレイヤーはチョキです\n");
			break;
		case 3:
			printf("プレイヤーはパーです\n");
			break;
	}

	switch (com) {
		case 0:
			printf("コンピュータはグーです\n");
			break;
		case 1:
			printf("コンピュータはチョキです\n");
			break;
		case 2:
			printf("コンピュータはパーです\n");
			break;
	}

	switch (((su - 1) - com + 3) % 3) {
		case 0:
			printf("\nあいこです。\n");
			break;
		case 1:
			printf("\nコンピュータの勝ちです。\n");
			break;
		case 2:
			printf("\nプレイヤーの勝ちです。\n");
			break;
	}
}