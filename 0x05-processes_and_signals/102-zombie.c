#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * infinite_while - Creates an infinite loop.
 *
 * Return: Always 0.
 */
int infinite_while(void)
{
    while (1)
    {
        sleep(1);
    }
    return (0);
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t child_pid;
    int i;

    for (i = 0; i < 5; i++)
    {
        child_pid = fork();

        if (child_pid == 0)
        {
            // Child process
            printf("Zombie process created, PID: %d\n", getpid());
            exit(0);
        }
        else if (child_pid < 0)
        {
            // Error handling
            perror("Fork failed");
            return (1);
        }
    }

    infinite_while(); // To keep the process running and allow observation of zombies

    return (0);
}

