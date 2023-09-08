#include<stdio.h>

// #define SUM(a,b) a+b
// #define TEST abcxy

// #ifndef STM32 

// int a=10;

// #endif
//// example
// #define SIZE 10

// #if SIZE >20 
// int a =30;

// #elif SIZE == 20
// int a= 10;

// #else
// int a=5;
// #endif

///// 
// #define STM32    0
// #define PIC16F   1
// #define ATMGE    2

// typedef enum{
//       LOW,
//       HIGH
// }Status;

// typedef enum{
//     PIN0 << 0,
//     PIN1 << 1
// }Pin;

// #if   MCU == STM32
// void digitalWrite(Pin pin, Status status){
//     DAC| pin ~status;
// }
// #elif MCU == PIC16F
// void digitalWrite(Pin pin, Status status){
//     CTP| pin ~status;
// }
// #elif MCU==ATMGE
// void digitalWrite(Pin pin, Status status){
//     MBC | pin-ASC ~status;
// }
// #endif


// #define MCU STM32  // option use for different of MCU: STM32, PIC16FC, ATMEGA

// #include"config.h"


// #define CREATE_FUNC(funname, cmd)        \
// void funname(){                         \
//     printf(#cmd);                        \
// }

// CREATE_FUNC(funA,This is funname A\n);

// CREATE_FUNC(funB,"This is funname B");

#define FUNC(type, name)      \
type var1##_name;             \
type var2_name;             \
type var3##_name;

int main(int argc, char const *argv[])
{


        FUNC(int,test);

    //  funA();

    //  funB();

    //  while (1)
    //  {
    //     digitalWrite(PIN0,HIGH);
    //  }
     

    // printf("Tong cua a va b : %d\n ", SUM(5,6));

    // printf("Tong cua a va b : %d\n ", SUM(9,6));
    // /* code */

    return 0;
}
