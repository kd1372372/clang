#include<stdio.h>
main()
{
	float g = 0.0,box[3];
	int i;

	for (i = 0; i < 3; i++) {
		printf("��������́F");
		scanf("%f", &box[i]);
	}

	for (i = 0; i < 3; i++) {
		g += box[i];
	}

	printf("���v��%.2f�ł�\n", g);
	printf("���ς�%.2f�ł�", g / 3.0);
}