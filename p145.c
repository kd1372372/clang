#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int data[20], i, work, target,j;
	work = 0;
	srand(time(0));

	i = 0;
	while(i<20){
		data[i] = i + 1;
		i++;
	}

	i = 0;
	while(i<20){
		target = rand() % 20;

		work = data[i];
		data[i] = data[target];
		data[target] = work;

		i++;
	}

	for (i = 0; i < 20; i++) {
		printf("%d\n", data[i]);
	}
}