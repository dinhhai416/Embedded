#include<stdio.h>
#include<stdint.h>
// type data
// uint8_t var; // 1 byte  // 2^8=256// Value from 0 to 255
// uint32_t var2;// 4 byte // 2^32 memmory// Value from 0 den 2^32-1
// int16_t var3;// 2 byte // 2^16 memory// Value from -(2^16)/2 to (2^16)/2 -1

// type data struct 
// typedef struct 
// {
//     float x;
//     float y;
// }ToaDo;

// typdedef
// typedef int typeint;

// typeint a=10;

// type data enum

typedef enum{
     Thu2,
     Thu3, 
     Thu4,
     Thu5, 
     Thu6,
}Thu;

int i,x,y;

// void test (){
//     printf("Gia tri ham so\n");
// }

// int tong(int a, int b){
//     return a +b;
// }

int main(){

    // ToaDo M ={.x=2,.y=5};
    // printf("Gia tri cua hai member : %lf and %lf\n ", M.x, M.y);
    // printf("Gia tri cua a: %d",a);
    // printf("Tong cua a va b: %d",tong(5,7));
    //  test ();
    
    // Loop

    for(uint8_t i=0; i<10;i++) // khoi tao bien, condition of i, change value
    {
        printf("Gia tri: %d\n", i); // gia tri man hinh
    }

    // break in loop
     for(uint8_t i=0; i<10;i++) 
    {
        if(i>6) break;// when meet break then exit loop
        printf("Gia tri: %d\n", i); 
    }

    // continious in loop
     for(uint8_t i=0; i<10;i++) 
    {
        if(i>6) continue;;// when meet continious cancel cau lenh ben duoi and quay lai vong lap
        printf("Gia tri: %d\n", i); 
    }


    // loop while

    while (i<10)
    {
        printf("Gia tri cua dieu khien: %d\n",i);
        i++;
    }
    // vong lap do while
   do
   {
    printf("Gia tri la : %d\n", x);
    x++;
   } while (x<10);
   //
   Thu thu;
   thu = 2;
   switch (thu)
   {
   case Thu2:
    printf("Thu 2\n");
    break;
   case Thu3:
    printf("Thu 3\n");
    break;
   case Thu4:
    printf("Thu 4\n");
    break;
   case Thu5:
    printf("Thu 5\n");
    break;
   case Thu6:
    printf("Thu 6\n");
    break;
   default:
   printf("Khong hop le\n");
    break;
   }
   // condition sentences: if elif else
 
    y=8;

   if (y>=8)
   {
    printf("Gioi ");
   }
   else if (y>=7)
   {
    printf("Kha ");
   }
   else
   {
     printf("Trung Binh ");
   }
   // condition sentences : if

   if (y>=8)
   {
    printf("Gioi ");
   }
   if (y>=7)
   {
    printf("Kha ");
   }
   if (y<=5)
   {
     printf("Trung Binh ");
   }
   

    return 0;
}
