#include "shell.h"

int main(void)
{
	pid_t process_id;
	process_id = getpid();

	printf("Process ID: %u\n", process_id);
	return (0);
}