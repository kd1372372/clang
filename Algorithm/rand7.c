#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int num,answer,k=1;
	printf("1�`1000�̒��ł�����̐���\�z���Ă�������\n");

	srand(time(0));
	rand();
	answer = rand() % 1000 + 1;

	while (1) {
		printf("������̐��́H");
		scanf("%d", &num);

		if (num < answer) {
			printf("������̐���菬�����ł�\n");
			k++;
		}
		else if (num > answer) {
			printf("������̐����傫���ł�\n");
			k++;
		}
		else {
			printf("�����I%d��ڂœ�����܂���", k);
			break;
		}
	}

}