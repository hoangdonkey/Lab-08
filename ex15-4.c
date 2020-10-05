#include <stdio.h>
int main(int argc, char const *argv[])
{
	register int i;
	int no, digit, sum;
	printf("\nThe numbers whose Sum of cubes of digits is equal to the number itself are:\n\n");
	for (int i = 1; i < 999; i++)
	{
		sum = 0;
		no = i;
		while(no)
		{
			digit = no % 10;
			no = no / 10;
			sum = sum + digit * digit * digit;
		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}