#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int num,answer,k=1;
	printf("1〜1000の中であたりの数を予想してください\n");

	srand(time(0));
	rand();
	answer = rand() % 1000 + 1;

	while (1) {
		printf("あたりの数は？");
		scanf("%d", &num);

		if (num < answer) {
			printf("あたりの数より小さいです\n");
			k++;
		}
		else if (num > answer) {
			printf("あたりの数より大きいです\n");
			k++;
		}
		else {
			printf("正解！%d回目で当たりました", k);
			break;
		}
	}

}