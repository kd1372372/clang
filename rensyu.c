#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int playerHP[2] = { 100,100 };
	int playerCom[2] = {};

	srand(time(0));
	rand();

	while (1)
	{
		//printf("�v���C���[1�̗̑́F%d\n\n", playerHP[0]);
		printf("�v���C���[1�̃^�[���I�i1�F�ʏ�U���@2�F���U���@3�F�񕜁j��");
		scanf("%d", &playerCom[0]);

		switch (playerCom[0])
		{
			case 1:
				printf("�ʏ�U���I\n");
				playerHP[1] -= rand() % 30 + 1;//�G�ւ̃_���[�W
				break;
			case 2:
				printf("���U���I�I\n");
				playerHP[1] -= rand() % 21 + 40;//�G�ւ̃_���[�W
				playerHP[0] -= rand() % 20;//�����_���[�W
				break;
			case 3:
				printf("��\n");
				playerHP[0] += rand() % 20 + 1;//��
		}

		if (playerHP[0] <= 0) {
			printf("���ł���");
			break;
		}
		if (playerHP[1] <= 0) {
			printf("�v���C���[2��|����");
			break;
		}

		printf("�v���C���[1�̗̑́F%d\n\n", playerHP[0]);
		printf("�v���C���[2�̗̑́F%d\n\n", playerHP[1]);

		printf("========================================================\n\n");

		printf("�v���C���[2�̃^�[���I�i1�F�ʏ�U���@2�F���U���@3�F�񕜁j��");
		scanf("%d", &playerCom[1]);

		switch (playerCom[1])
		{
		case 1:
			printf("�ʏ�U���I\n");
			playerHP[0] -= rand() % 30 + 1;//�G�ւ̃_���[�W
			break;
		case 2:
			printf("���U���I�I\n");
			playerHP[0] -= rand() % 21 + 40;//�G�ւ̃_���[�W
			playerHP[1] -= rand() % 20;//�����_���[�W
			break;
		case 3:
			printf("��\n");
			playerHP[1] += rand() % 20 + 1;//��
		}
		if (playerHP[1] <= 0) {
			printf("���ł���");
			break;
		}
		if (playerHP[0] <= 0) {
			printf("�v���C���[1��|����");
			break;
		}

		printf("�v���C���[1�̗̑́F%d\n\n", playerHP[0]);
		printf("�v���C���[2�̗̑́F%d\n\n", playerHP[1]);

		printf("========================================================\n\n");

	}
}