#include<stdio.h>

main()
{
	int data, sum, cnt,ret;
	sum = 0;
	cnt = 0;

	printf("�����F");
	ret = scanf("%d", &data);//����

	while (ret != EOF) {
		sum += data;
		cnt += 1;

		printf("�����F");
		ret = scanf("%d", &data);//����
	}

	printf("���v��%d", sum);
	printf("���ρ�%.2f", (float)sum / cnt);
}