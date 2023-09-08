#include<stdio.h>
#include<stdint.h>

static int count=50;// static global chi dung trong file test.c

static void test(){
    printf("Gia tri: %d\n", count);
    count ++;
}

void test2(){
    
    test();
}