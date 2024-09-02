#include<stdio.h>
#include<string.h>
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day birth;
	char blood[5];
};

main()
{
	struct profile data[5] = { {"hanjisung",{2000,9,14},"B"},
							{"hyunjin",{2000,3,20},"B"},
							{"leeknow",{1998,10,25},"O"},
							{"felix",{2000,9,15},"AB"},
							{"seungmin",{2000,2,29},"A"}, };
	struct profile *p = data;
	int i;

	for (i = 0; i < 5; i++) {
		if (p->birth.tuki== 2) {
			printf("%s[[", p->name);
			printf("%d”N%02dŒŽ%02d“ú¶‚Ü‚ê", p->birth.nen, p->birth.tuki, p->birth.hi);
			printf("ŒŒ‰tŒ^F%sŒ^\n", p->blood);
		}
		p++;
	}
}