#include <stdio.h>
int main(int argc, char const *argv[])
{
	int x, y;
	x = 15; y = 20;
	printf("x = %d, y = %d", x, y);
	swap(x,y);
	printf("\nAfter interchanging x = %d, y = %d\n", x, y);
	return 0;
}
int swap(int u, int v)
{
	int temp;
	temp = u;
	u = v;
	v = temp;
	return;
}