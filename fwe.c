#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
	int id, id2;
	int n = 4;
	int status;
	char *argv[] = {"/bin/ls", "-l", NULL};

	id = fork();
	if (id == 0)
	{
		execve(argv[0], argv, NULL);
	}
	while (n != 0)
	{
		wait(&status);
		id2 = fork();
		if (id2 == 0)
		{
			execve(argv[0], argv, NULL);
		}
		n--;
	}
	return (0);
}

