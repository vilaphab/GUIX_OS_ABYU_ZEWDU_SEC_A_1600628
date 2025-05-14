#define _GNU_SOURCE
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int childFunc(void *arg) {
    printf("Hello from child process\n");
    return 0;
}

int main() {
    const int STACK_SIZE = 1024 * 1024;
    char *stack = malloc(STACK_SIZE);
    if (!stack) {
        perror("malloc");
        exit(EXIT_FAILURE);
    }

    int pid = clone(childFunc, stack + STACK_SIZE, SIGCHLD, NULL);
    if (pid == -1) {
        perror("clone");
        free(stack);
        exit(EXIT_FAILURE);
    }

    printf("Hello from parent process\n");
    wait(NULL);
    free(stack);
    return 0;
}
