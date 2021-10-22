#include <unistd.h>
#include <stdio.h>

int main(void)
{
	int pid;
	int my_pid;
	
	printf("before fork: \n");
	pid = fork();
	my_pid = getpid();
	if (pid == 0)
	{
		printf("Child process id is: %d\n", my_pid);
	}
	else
	{
		printf("Parent process id is: %d\n", my_pid);
	}
	return (0);
}
