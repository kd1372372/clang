#include<stdio.h>
main()
{
	int su;
	printf("����?�F");
	scanf("%d", &su);

	su = su % 2;
	if (su == 0) {
		printf("���̐��́u�����v�ł�");
	}
	else {
		printf("���̐��́u��v�ł�");
	}
}