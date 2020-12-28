#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    printf("Parent Process %d\n", getppid());
    int p;
    p = fork();
    if(p==0){
        printf("Child Process %d\n", getpid());
    }
    else if(p>0){
        sleep(5);
        printf("Parent Process %d\n", getppid());
        printf("Zombie Process %d\n", getpid());
        while(1){
        };
        return 1;
    }
}
//child is the zombie, because the child process has ended but it hasn't left the memory
