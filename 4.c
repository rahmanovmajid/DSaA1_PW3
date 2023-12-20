#include<stdio.h>
#include<stdlib.h>
struct stack{
    int *array;
    int size;
};

struct stack ST_new();



int main(){

    int maxsize = 20;
    struct stack bebe = ST_new(maxsize);
    

    return 0;
}


struct stack ST_new(int maxsize){
    struct stack new;
    new.size = 0;
    new.array = (int*) calloc(maxsize,sizeof(int));
    return new; 
}
