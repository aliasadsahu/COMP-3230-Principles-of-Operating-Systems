#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	int op1,op2;
	op1 = atoi(argv[1]);
	op2 = atoi(argv[2]); 
	printf("Parent process ID: %d; Calculate the sum of the two smallest arguments: %d, %d.\n", getppid(), op1, op2);
	printf("Replacing the program by this one!\n");
	printf("Para 1 is :%d\n",op1);
	printf("Para 2 is :%d\n",op2);
	printf("The sum of totoal paras now is %d.\n",op1 + op2);
	return op1 + op2; 
}
