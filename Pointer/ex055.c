#include<stdio.h>
#define B_SIZE 4 //z๑bฬTCY

main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1,22.2,33.3,44.4 };
	int a_sum, *p_a;
	float b_sum, * p_b;
	int i;

	//dizeofฬ๛K
	for (a_sum = 0, p_a = a, i = 0;i < sizeof a / sizeof(int);i++,p_a++ ){
		a_sum += *p_a;
	}
	printf("z๑a v%7d@ฝฯ%6.3f", a_sum, (float)a_sum / (sizeof a / sizeof(int)));

	

	for (b_sum = 0,p_b = b,i = 0; i < B_SIZE; i++, p_b++) {
		b_sum += *p_b;
	}
	printf("z๑b@v%7.3f@ฝฯ%6.3f", b_sum, b_sum / B_SIZE);
}