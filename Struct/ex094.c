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
		printf("%dl–Ú",i+1);
		printf("–¼‘OF");
		scanf("%s", p->name);
		printf("¶”NŒŽ“úF");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("ŒŒ‰tŒ^F");
		scanf("%s", p->blood);
		p++;
	}

	p = data;
	for (i = 0; i < 5; i++) {
		if (strcmp(p->blood, "A") == 0) {
			printf("%s[[", p->name);
			printf("%d”N%02dŒŽ%02d“ú¶‚Ü‚ê", p->birth[0], p->birth[1], p->birth[2]);
			printf("ŒŒ‰tŒ^F%sŒ^\n", p->blood);
		}
		p++;
	}
}