#include<stdio.h>

int divide(float a,float b,float *q);

int main(){

    float x = 365;
    float y = 5;
    float adr;

    printf("%p\n",&adr);

    divide(x,y,&adr);

    printf("%f\n",adr);


    return 0;
}

int divide(float a,float b,float *q){
    if ( b == 0 )   return 0;
    *q = a/b;
    return 1;
}