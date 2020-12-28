#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
    int p, i = 5;
    p = fork();
    if(p == 0){
        printf("CHild process %d\n", ++i);
        printf("p = %d", p);
        printf("%d\n", getpid());
    }
    else if(p > 0){
        printf("CHild process %d\n", i);
        printf("p = %d", p);
        printf("%d\n", getpid());
    }
    else{
        printf("p = %d", p);
        printf("ERROR\n");
    }
    return 0;
}
