#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
// const int b =20;// Khai bao constant duoc phan vung o TEXT
// int a=9;// Biến global o phan vung Bss
// static int d=8;// Bien global static o phan vung Bss

// int *ptr(){
//     static int a=20;// Bien local static o phan vung Bss
//     return &a;
// }
// void test(){
//     static int c;// Bien local static o phan vung Bss
// }

//// Example

// void Tong(int a, int b){   // hai bien input parameter a va b duoc phan vung o Stack
//     int c;// bien local o phan vung o Stack
//     c=a+b;// thuc hien phep tong a + b o ALU(bo xu ly trung tam)
//     printf("Tong cua a va b: %d\n", c);

//     printf("Dia chi cua a: %p\n", &a);
//     printf("Dia chi cua b: %p\n", &b);
//     printf("Dia chi cua c: %p\n", &c);
// }

void test1(){
    uint8_t arr[5];
    printf("Dia chi: %p\n",arr);
}
void test2(){
    uint8_t *ptr1=(uint8_t*)malloc(sizeof(uint8_t)*5);
    printf("Dia chi: %p\n",ptr1);
}

int main(){
    //  int a=20// Bien local phan cung o Stack
    // printf("a= %d\n", a);
    
    // // Example 
    // Tong(5,7);  // int a // 0x01
    //             // int b // 0xc0
    //             // int c // 0xd0
    //  printf("-------\n"); // sau khi thoat khoi function thi no se thu hoi bo nho

    // Tong(8,4);

    // uint32_t arr[]={1,7,3,5,9};
    // for (uint32_t i = 0; i < 5; i++)
    // {
    //     printf("dia chi %d: %p\n",i+1,arr + i);
    // }
    
     uint16_t *ptr= (uint16_t*)malloc(sizeof(uint16_t)*5);// 0x01 0x02 0x03 0x04 0x05// no se cap phat vung nho dong o vung nho Heap

    for (uint8_t i = 0; i < 5; i++)// bien i duoc phan vung Stack
    {
        ptr[i]=2*i;
    }
    for (uint8_t i = 0; i < 5; i++)//  bien i duoc phan vung Stack
    {
      printf("Gia tri i = %d\n", ptr[i]);
    }
    printf("Dia chi: %d\n",sizeof(ptr[4]));

    // Thay doi kich thuoc vung nho
    ptr=(uint16_t*)realloc(ptr,sizeof(uint16_t)*7);// thay doi kich thuoc cua vung nho
    
    
    for (uint8_t i = 0; i < 7; i++)
    {
        ptr[i]=2*i;
    }
    for (uint8_t i = 0; i < 7; i++)
    {
      printf("Gia tri i = %d\n", ptr[i]);
    }
    // Cac malloc, calloc, realloc thi bo nho thi duoc luu phan vung nho Heap

    free(ptr);// Sau khi cap phat bo nho dong thi can giai phong/thu hoi bo nho 


    /// Example check
     test1();
     test1();

     test2();
     test2();
     // khi khong dung free thi se khong thu hoi vung nho doi voi dung mallo

    return 0;
    calloc()
}