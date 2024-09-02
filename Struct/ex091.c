#include<stdio.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile data;
	struct profile* p = &data;

	printf("名前を入力：");
	scanf("%s", p->name);
	printf("生年月日を入力：");
	scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
	printf("血液型を入力：");
	scanf("%s", p->blood);

	printf("%s--%d年%d月%d日生まれ--%s型", data.name, data.birth[0], data.birth[1], data.birth[2], data.blood);
}