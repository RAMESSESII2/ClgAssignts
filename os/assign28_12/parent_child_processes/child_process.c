#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
    int p;
    p = fork();
    if(p == 0){
        printf("%d\n", getpid());
        printf("%d\n", getppid());

    }
    printf("\nafter if block \n");
    printf("%d\n", getpid());
    printf("%d\n", getppid());
    return 0;
}
