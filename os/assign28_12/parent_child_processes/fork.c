#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
    fork();
    printf( "first\n" );
    fork();
    printf( "second\n" );
    fork();
    printf( "ends\n" );
    return 0;
}
