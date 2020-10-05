#include <stdio.h>
int incre(){
	char var = 65;
	printf("\nThe character stored in var is %c", var++);
}
int main(int argc, char const *argv[])
{
	incre();
	incre();
	incre();
}