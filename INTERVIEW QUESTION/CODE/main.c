#include<stdio.h>

typedef struct 
{
    int x;
    int y;
}Point;

void test(){
    const int a=10; // phan vung Stack 
                   // thoat hoi ham thi thu hoi vung nho
}

int arr[]={1,3,5};

void string(const int arr[]){

}

void test1(const int a)// 0xa2 k de thay gia tri 20 khi co "const"
{

}
int main(int argc, char const *argv[])
{
    int i=10;
    const int *ptr=&i;     // con tro hang
   

    int b=20;// 0xc1
    test1(b);// gan gia tri 20
    return 0;
}
