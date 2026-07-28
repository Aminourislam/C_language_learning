#include <stdio.h>

int main(){
    int a,b,d;
    float c,e,f;

    a = 55;//a er b int abog c float hote hobe . Nahole erorr.
    b = 3;
    // remainder/ vagses
    c = a%b;
    d = a*b;
    e = 4.55;
    f = a+e;
    printf("the remainder is %f\n",c);
    printf("the power:%d\n",d);
    printf("int + float = %f\n", f);
    printf("float + float = %f\n", e+e);

    // jodi float value int diye likkhi tobe demosion hoi jabe
    int floater;
    floater = 4.33333;
    printf("float er result int asbe: %d\n", floater);


    return 0;

}