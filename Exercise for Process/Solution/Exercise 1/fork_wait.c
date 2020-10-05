#include <stdio.h> 
#include <unistd.h> 
#include <sys/wait.h> 
  

int main() 
{ 
	printf("This is the beginning of the program!\n\n");
    if (fork()== 0) 
    {
        
        if(fork()==0)
        {
			printf("The exited child process ID now is %d, whose parent process ID is %d.\n",getpid(),getppid());
		}
		else
		{
			wait(NULL);
			printf("The exited child process ID now is %d, whose parent process ID is %d.\n",getpid(),getppid());
		}
	}
    else
    {
		wait(NULL);
		if(fork()==0)
		{
			wait(NULL);
			printf("The exited child process ID now is %d, whose parent process ID is %d.\n",getpid(),getppid());
		}
		else
		{
			wait(NULL);
			printf("The final exited process ID now is %d.\n",getpid());
			printf("\nThis is the END of the program!");
		}
    } 
  
    return 0; 
} 
