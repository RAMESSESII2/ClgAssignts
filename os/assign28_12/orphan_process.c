#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    /* printf("Parent Process %d\n", getppid()); */
    int p;
    p = fork();
    if(p==0){
        printf("Child Process %d\n", getpid());
        sleep(5);
        printf("Orphan Process %d\n", getpid());
    }
    else if(p>0){
        printf("Parent Process %d\n", getppid());
    }
    /* printf("Parent Process %d\n", getppid()); */
    return 1;
}
