#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i=10;
	printf("Before function call i=%d\n", i);
	inc(i);
	printf("After function call i=%d\n", i);
	
	system("PAUSE");
	return 0;
}
	
	
int inc(int counter)
{
	counter++;
	return counter;
}
