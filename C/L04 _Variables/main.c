#include<stdio.h>
#include<stdint.h>
// Bien volatile

// Bien register

extern void test2();// su dung extern khi dung 1 ham  lay 1 ham va 1 bien tu 1 file

// extern int count;

// void test(){
//     static int a=10;// bien static local o phan vung nho Data
//                     // doi voi bien static sau khi ket thuc chtr thi khong bi thu hoi bo nho
//    printf("Gia tri : %d\n", a);
//    a++;
// }

// int *ptr(){
//     static int a=94;// phai dung bien static vi sau khi ket thuc chtr no khong bi thu hoi vung nho
//     return &a;
// }
// extern void test();
// extern int count;

int main(){

   register int x=10;// a se duoc lu tren thanh ghi register cho nen toc do xu ly nhanh hon so voi luu tren RAM
    //  test();
    //  test();
    //  test();
    // printf("Gia tri : %d", *ptr());

    // Dung bien extern
    // test2();

    // test2();

    // test2();
    // volatile

    volatile int test;// thong bao cho complier khong duoc phep toi uu

     while (1)
     {
        test =readDataUART(); // doc tin hieu tu phan cung

        A();
        B();
        C();
     }
     
     
    return 0;
}