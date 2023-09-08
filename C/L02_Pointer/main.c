#include<stdio.h>
#include<stdint.h>

// int a=10;

// void test(){
//     printf("This is a test\n");
// }

// con tro ham
void Tong(int a, int b){
    printf("Tong cua %d va %d: %d\n",a,b,a+b);
}

void Hieu(int a, int b){
    printf("Hieu cua %d va %d: %d\n",a,b,a-b);
}

void Tich1(int a, int b){
    printf("Multiple cua %d va %d: %d\n",a,b,a*b);
}

int Tich2(int a, int b){
    return a*b;
}

void Divide(int a, int b){
    printf("Divide cua %d va %d: %lf\n",a,b, (double) a/b);
}

// Function voi input paramater la con tro ham

void Tinhtoan(void(*func)(int,int),int a, int b){
      printf("Tinh Toan\n");
     func(a,b);
}


int main(int argc, char const *argv[])
{
    // int *ptr= &a;

    // printf("Dia chi cua a : %p\n", &a);

    // printf("Dia chi cua a : %p\n", ptr);

    // printf("Dia chi cua a : %p\n", *(&a));

    // printf("Dia chi cua a : %p\n", *ptr);
    // /* code */

    // con tro void

    //  int i=10;

    //  double d=10.3;
     
    //  char c='A';

    //  void *ptr= NULL ; // phai dung con tro den Null voi gia tri 0 de no khong tro  luu dia chi rac (lam loi chuong trinh)
      // &d, &c con tro void co the tro den cac doi tuong voi kieu data khac nhau: int, double, char va can ep kieu du lieu moi lay gia tri
     
    //   ptr=&d;
    //   printf("Gia tri tai dia chi: %lf ",*((double*)ptr));

    //   ptr=&c;
    //   printf("Gia tri tai dia chi: %c ",*((char*)ptr));

    //   ptr=&test;
    //   printf("Gia tri tai dia chi: %d ",*((int*)ptr));

    //   ptr=&i;
    //   printf("Dia chi ma ptr luu : %p\n ", ptr);
     
     // ep kieu ptr sang char de lay gia tri

     //// con tro ham 

    //   void(*ptr1)(int,int);

    //   ptr1=&Tong;
    //   ptr1(4,5);

    //   ptr1=&Hieu;
    //   ptr1(8,2);

    //   ptr1=&Tich1;
    //   ptr1(2,4);

    //   ptr1=&Divide;
    //   ptr1(6,2);

    //   int(*ptr2)(int,int)=&Tich2;
    //   ptr2(5,6);
     
    //  // ep kieu con tro thanh con tro ham

    //  void *ptr3=NULL;
    
    // ptr3=&Tich1;

    // ((void(*)(int,int))ptr3)(8,4);
    // // Ham co con tro ham

    // Tinhtoan(&Tong,9,9);

    // Tinhtoan(&Divide,9,4);

    // Mang con tro: cac phan tu la con tro va se tro den luu dia chi cua cac ham

    void *arr[]={&Tong,&Hieu,&Tich1,&Divide};

    ((void(*)(int,int))arr[2])(6,7);// ep con tro object thanh con tro mang

    ((void(*)(int,int))arr[0])(8,6);// ep con tro object thanh con tro mang
    ///
    void *ptr=&Hieu;
    
    printf("size: %p byte\n",sizeof(ptr));
    // size of poinetr se phu thuoc vao architect of microprocessoer
    // 64/8= 8 byte
    // 32/8= 4 byte
    // 16/8= 2 byte

    return 0;
}
