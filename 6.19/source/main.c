#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void drop(unsigned int show_frequency[11]);
void display(unsigned int show_frequency[11]);

int main(void)
{
	unsigned int combination[11] = { 0 };
	srand(time(NULL));
	drop(combination);
	display(combination);
	system("pause");
	return 0;

}

void drop(unsigned int show_frequency[11])
{
    int count;
	int point1;
	int point2;
	int total_p;

	for (count = 1; count <= 36000; ++count)
	{
		point1 = (rand() % 6 )+ 1;
		point2 = (rand() % 6 )+ 1;
		total_p = (point1 + point2);
		++show_frequency[total_p - 2];
	}
}
void display(unsigned int show_frequency[11])
{
	int count_point;

	printf("%s%17s\n","Total point","frequency");

	for (count_point = 2; count_point <= 12; count_point++)
	{
		printf("%11d%17d\n",count_point,show_frequency[count_point-2]);
	}
}

