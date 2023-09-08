#include<stdio.h>
#include<stdint.h>
// typedef struct
// {
//     uint8_t x;// 1 byte      1 byte + 7 bytes bo nho dem
//     uint16_t z;// 2 bytes    8 bytes
//     uint32_t y;// 4 bytes    2 byte + 4 bytes + 2 bo nho dem 
//     uint32_t t;// 4 bytes    4 bytes 
//     uint32_t m;// 4 bytes
//     uint32_t i;
// }toado;

// typedef union
// {
//     uint8_t var1[5];  // 1 byte
//     uint8_t var2[3]; // 20 byte
//     uint8_t var3[6];// 4byte
// }typeunion;

 typedef union 
 {
   struct 
    {
        uint8_t id[2];// 1 byte
        uint8_t data[3];// 1 byte
        uint8_t checkSum[1];// 1 byte     3 cai khong co buyte pending
    }object;

    uint8_t arr[6];
    /* data */
 }dataFrame;
 

int main(){
    // data package tranmission: 1 byte ID
    //                           3 byte Data
    //                           1 byte checkSum
    //                           0x01 0xC2 0xF8 0xF2 0x0A7

    dataFrame test;

    test.object.id[0]=0x01;
    test.object.id[1]=0x03;
    test.object.data[0]=0x89;
    test.object.data[1]=0x08;
    test.object.data[2]=0xE4;
    test.object.checkSum[0]=0xE9;

    // typeunion var;
    // printf("Dia chi var: %d \n", &var);

    // printf("Dia chi var1: %d \n", &(var.var1));

    // printf("Dia chi var2: %d \n", &(var.var2));

    // printf("Dia chi var3: %d \n", &(var.var3));
    // //
    // printf("Value of members: %d ", sizeof(typeunion));

    // for (int i = 0; i < 5; i++)
    // {
    //     /* code */
    //     var.var1[i]=i; // 0 1 2 3 4
    // }
    
    //  for (int i = 0; i < 3; i++)
    // {
    //     /* code */
    //     var.var2[i]=i*2; // 0 2 4
    // }

    //  for (int i = 0; i < 6; i++)
    // {
    //     /* code */
    //     var.var3[i]=i*3; // 0 3 6 9 12 15
    // }

    //  for (int i = 0; i < 5; i++)
    // {
    //   printf("%d ", var.var1[i]);
    // }
return 0;
}