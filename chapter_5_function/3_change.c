#include<stdio.h>
int change(int a);
int change(int a){
    a = 33; // misnomer
    return 0;
}

int main(){
    int b= 12;
    change(b); // THE VALUE OF B IS REMAIN 12.
    // 12

    printf( "b is %d \n", b);
}