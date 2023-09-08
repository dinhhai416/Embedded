#include<stdio.h>
#include<stdint.h>
#include"test.c"

#define SIZE 30

#define SUM(a,b) a+b

int var =20;

int main(){
    test();
    int arr[SIZE];
    printf("Tong a va b: %d\n",SUM(2,3));
    return 0;
}