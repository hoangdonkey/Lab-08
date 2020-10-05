#include <stdio.h>
int squarer(int x){
	int j;
	j = x * x;
	return(j);
}
int main(int argc, char const *argv[])
{
	int i;
	for(i = 1; i <= 10; i++){
		printf("\nSquare of %d is %d", i, squarer(i));
	}
	return 0;
}