#include<stdio.h>
#include<string.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};

main()
{
	struct profile data[5];
	struct profile *p = data;
	int i;

	for (i = 0; i < 5; i++) {
		printf("%d人目",i+1);
		printf("名前：");
		scanf("%s", p->name);
		printf("生年月日：");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("血液型：");
		scanf("%s", p->blood);
		p++;
	}

	p = data;
	for (i = 0; i < 5; i++) {
		if (strcmp(p->blood, "A") == 0) {
			printf("%sーー", p->name);
			printf("%d年%02d月%02d日生まれ", p->birth[0], p->birth[1], p->birth[2]);
			printf("血液型：%s型\n", p->blood);
		}
		p++;
	}
}