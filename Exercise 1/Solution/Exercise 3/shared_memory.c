#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

extern int errno; 

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a=*b;
	*b=temp;
}

int main(int argc, char *argv[])
{
	int arg_num = argc-1;
	if(arg_num!=3)
	{
		printf("Error: The number of input integers now is %d. Please input 3 integers.\n",arg_num);
		return 0;
	}
	
	int op[3];
	op[0] = atoi(argv[1]);
	op[1] = atoi(argv[2]); 
	op[2] = atoi(argv[3]);
	
	if(fork()== 0) 
	{
		if (op[0] > op[2])
		   swap(&op[0],&op[2]);
		if (op[0] > op[1])
		   swap(&op[0],&op[1]);
		if (op[1] > op[2])
		   swap(&op[1], &op[2]);
		printf("Child process ID: %d; Sorting results: %d, %d, %d.\n\n", getpid(), op[0], op[1], op[2]);
		
		char *binaryPath = "./para_sum";
		char buffer1 [10];
		char buffer2 [10];
		
		sprintf(buffer1,"%d",op[0]);
		sprintf(buffer2,"%d",op[1]);
		
		
		char *args[] = {binaryPath,buffer1, buffer2, NULL};
		execv(binaryPath, args);
		
	}
	wait(NULL);
	return 0; 
}
