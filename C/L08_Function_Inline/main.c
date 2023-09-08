#include<stdio.h>



// inline tong1(int a, int b){                  // 0xC1... 0XC9             //  abc anc and and     // ngon ngu assembly
    
//     printf("Tong cua a va b: %d\n", a+b);
// }


void tong(int a, int b){                  // 0xC1... 0XC9             // Stack Pointer      // Program Counter
    
    printf("Tong cua a va b: %d\n", a+b);
}

int main(int argc, char const *argv[])
{
   
//    A();    // 0x01

//    B();    // 0x02

//    C();    // 0x03

   tong(11,22);

   tong(21,41);

    return 0;
}
