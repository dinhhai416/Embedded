 <details><summary><h2>CHAPTER 1: C PROGRAMMING LANGUAGE</h2></summary>
 
<!-- ----------------------------------C Bassic-------------------------------------------- -->
##

<details>
  <summary> L01: C BASIC </summary>

### 1. Type Data and Libraries:

Trong ngôn ngữ C, thì sẽ có các thư viện chẩn có sẵn như:
```C
 #include<stdio.h>
 #include<stdlib.h>
 #include<stdint.h> a
```
   Các loại kiểu dữ liệu được dùng trong C và tuỳ thuộc vào kiến trúc của vi xử lý mà các kiểu dữ liệu có kích thước khác nhau:

 <img src="https://web888.vn/wp-content/uploads/2022/03/C-Datatypes-Range-and-Sizes.webp">
 

   Trong Embedded System thì ta sẽ sử dụng thư viện:
```C 
#include <stdint.h>
```
 ** Các kiểu dữ liệu:**
 
*Kiểu dữ liệu không dấu:*

    uint8_t(1 byte), uint16_t(2 byte), uint32_t(4 byte), uint64_t(8 byte)

*Kiểu dữ liệu có dấu:*

     int8_t(1 byte), int16_t(2 byte), int32_t(4 byte), int64_t(8 byte)

**Example:**
```C
#include<stdio.h>
#include<stdint.h>

uint8_t var; // 1 byte  // 2^8=256 //Giá trị từ 0 to 255
uint32_t var2;// 4 byte // 2^32 memmory //Giá trị  0 den 2^32-1
int16_t var3;// 2 byte // 2^16 memory //Giá trị -(2^16)/2 to (2^16)/2 -1
```
### 2.Typedef:
  
- Được dùng để thay đổi tên cho kiểu dữ liệu.
```c
 typedef struct 
 {
    float x;
    float y;
 }ToaDo;          // dung typedef doi ten du lieu struct

typedef int typeint;// dung typedef de doi ten int

 typeint a=10;   // khai bao a theo typeint
 ToaDo data;     //  khai bao data theo ToaDo
```
- VD: typedef int typeint -> typeint: sẽ thay đổi tên cho cho kiểu dữ liệu int.

### 3.Function:
 
 Trong C, thì sẽ hai loại hàm trả về giá trị hoặc trả lại bất cứ cái gì. Ngoài ra còn có hàm trả lại địa chỉ.
 ```c
 // Hàm không trả lại bất cứ cái gì
 void test (){
    printf("Gia tri ham so\n");
 }
// Hàm trả lại giá trị là kiểu int
 int tong(int a, int b){
     return a +b;
 }
 // Hàm trả lại địa chỉ ủa 1 đối tượng
 int *ptr(){   // Hàm trả lại địa chỉ 
    static int x=10;
    return &x;
 }
 ```
### 4. Enum:
  Là kiểu dữ liệu liệt kê trong C, các member sẽ được giá trị và các member kế sau sẽ được + 1. Dùng typedef để thay đổi tên dữ liệu.

  **Tóm lại:**
  + Giá trị của các phần tử sẽ bằng 0 -> N-1 nếu không gán giá trị ban đầu
  + Giá trị của phần tử sau sẽ tăng lên 1 đơn vị so với phần tử đứng trước
 ```c
 typedef enum{
     Thu2,
     Thu3, 
     Thu4,
     Thu5, 
     Thu6,
}Thu;

Thu x;
 ```
### 5. Loop For..:
Vòng lặp for sẽ có 3 phần: Khởi tạo biến -> So sánh điều kiện -> Thay đổi giá trị. Ngoài ra, t cũng phải biến lệnh *break*: khi gặp *break* thì thoát ra khỏi vòng lặp và *continue* : khi gặp *continue* thì bỏ câu lệnh phía sau và quay lại vòng lặp.

```c
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
        if(i>6) continue;;// when meet continious cancel 
        //cau lenh ben duoi and quay lai vong lap
        printf("Gia tri: %d\n", i); 
    }

```
### 6. While... do:
Đối với while.. do thì sẽ thực hiện điều kiện while trước nếu thoá thoả thì sẽ thực hiện câu lệnh bên dưới.
```c
 // loop while

    while (i<10)// nếu thoả điều khiên trong while thì tiếp tục lệnh
    {
        printf("Gia tri cua dieu khien: %d\n",i);
        i++;
    }
```
### 7.Do ... While:
Ngược lại với while ... do thì sẽ thực hiện câu lệnh trước rồi sao sánh điều kiện while. Nếu thoả tiếp tục câu lệnh sau đó.
```c
// do while
  do
   {
    printf("Gia tri la : %d\n", x);
    x++;
   } while (x<10);
```
### 8. Condition Sentences:
   **Đối với trường hợpnày nếu 1 trong các đièu kiên thoả thì thoát và xuống câu lệnh bên dưới**
```c
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
```
  **Đối với trường hợp này thì sẽ so sánh các trường hợp nếu thoả thì thoát và xuống câu lệnh bên dưới. Ở kiểu này thì nó sẽ làm tốn thời gian xử lý hơn.**
  ```c
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
   
  ```
  ### 9. Switch... case:
  **Đối vơi switch .. case thì sẽ so sánh từng case sẽ thực hiện. Cần phải phải có `break` để thoát ra nếu không nó sẽ thực hiện lệnh bên dưới. Nếu không có trường hợp nào thoả thì xuống `default` thực hiện.**
  ```c
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
  ```
</details>

##

<details>
<summary>L02: POINTER</summary>

### 1. Khái niệm về Pointer ?

* Là biến sẽ lưu giá trị là địa chỉ bộ nhớ/ô nhớ của đối tượng mà nó trỏ đến.

* Để trỏ đến lưu địa chỉ của đối tượng thì biến con trỏ phải được khai báo đúng kiểu dữ liệu.
- Bộ nhớ RAM chứa rất nhiều ô nhớ, mỗi ô nhớ có kích thước 1 byte.
- Mỗi ô nhớ có địa chỉ duy nhất và địa chỉ này được đánh số từ 0 trở đi. Nếu CPU 32 bit thì có 2^32 địa chỉ có thể đánh cho các ô nhớ trong RAM.

![pointer](https://gochocit.com/wp-content/uploads/2021/09/dia-chi-don-vi-nho-duoc-danh-dia-chi.png)

* Khi khai báo biến, trình biên dịch dành riêng một vùng nhớ với địa chỉ duy nhất để lưu biến. Trình biên dịch có nhiệm vụ liên kết địa chỉ ô nhớ đó với tên biến. Khi gọi tên biến, nó sẽ truy xuất tự động đến ô nhớ đã liên kết với tên biến để lấy dữ liệu. 

![pointer](https://gochocit.com/wp-content/uploads/2021/09/dia-chi-cua-bien-la-dia-chi-o-nho-dau-tien.png)
    
```c
 int *ptr= &a;

 printf("Dia chi cua a : %p\n", &a);

 printf("Dia chi cua a : %p\n", ptr);

 printf("Gia tri cua a : %p\n", *(&a));

 printf("Gia tri cua a : %p\n", *ptr);
```
  
### 2.Kích thước của  biến con trỏ ?

 `Thực tế kích thước con trỏ sẽ phụ thuộc vào kiến trúc của vi xử lý:`

- Kiến trúc 32 bit/8 bit = 4 bytes
- Kiến trúc 64 bit/8 bit = 8 bytes
- Kiến trúc 16 bit/8 bit = 2 bytes

### 3. Khai báo con trỏ:

  *Example:*

  < `kiểu dữ liệu` >  * <`tên biến`>

**Các kiểu dữ liệu khai báo con trỏ**
  
  ```C
  int *ptr1; // khai báo con trỏ để trỏ tới biến kiểu nguyên 
  float *ptr2; // khai báo con trỏ để trỏ tới biến kiểu thực 
  char *ptr3; // khai báo con trỏ để trỏ tới biến kiểu ký tự 
```

 *Example :*
```C
#include <stdio.h>
int main(){
	int *ptr=&a;
	printf("dia chi a %p\n",&a);
	printf("gia tri ptr %p\n",ptr);
	printf("gia tri cua a :d\n",*ptr);
return 0;
}
```
### 4.Con trỏ Void: 

*Khai báo* : void *ptr;

* Void *ptr là con trỏ có thể trỏ lưu địa chỉ tất cả các đối tượng với kiểu dữ liệu khác nhau. Nhưng để lấy giá trị tại các đối tượng đó thì cần ép kiểu dữ liệu cho con trỏ.
* 
```C
printf("test i=%d\n",(int*)ptr); //ép kiểu ptr về int
```
nếu muốn lấy giá trị tại địa chỉ
```C
printf("test i=%d\n",*(int*)ptr);  
```
**Example:**
```c
//con tro void
int i=10;
double d=10.3;   
char c='A';

void *ptr=NULL; // con trỏ void sẽ lưu Null(giá trị 0 ) sẽ không biến thành con trỏ rác

void test(){
    printf("This is a test\n");
 }

ptr=&d;
printf("Gia tri tai dia chi: %lf ",*((double*)ptr));// Lấy giá trị của đối tượng khi con trỏ void trỏ đến và ép kiểu dữ liệu double cho ptr

ptr=&c;
printf("Gia tri tai dia chi: %c ",*((char*)ptr));// Lấy giá trị của đối tượng khi con trỏ void trỏ đến và ép kiểu dữ liệu char cho ptr

ptr=&i;
printf("Gia tri tai dia chi: %d ",*((int*)i));// Lấy giá trị của đối tượng khi con trỏ void trỏ đến và ép kiểu dữ liệu int cho ptr

ptr=&test;
printf("Dia chi ham test : %p\n ", ptr);// Lấy địa chỉ của hàm test
```

### 5.Con trỏ hàm:

**`<kiểu trả về> (*tên con trỏ)(input parameter)` ;**
* Là con trỏ lưu trữ địa chỉ của một hàm, ta có thể gọi hàm(với các input parameter) mà thông qua biến đó trỏ tới như sau:

`**Ngoài ra, ép kiểu con trỏ trỏ đến object thành con trỏ hàm:**`

```c
 void *ptr3=NULL;// con trỏ void
    
 ptr3=&Tich1;// tro den luu dia chi ham Tich

((void(*)(int,int))ptr3)(8,4); // ép kiểu về con trỏ thành con trỏ hàm với hai input parameter
```

**Example về Pointer hàm nhận với input paramater kiểu int và trả về dữ liệu kiểu void.**
```C
void (*func)(int,int);// khai báo con trỏ hàm với hai input parameter
```
*Các function:*
```c
void Tong(int a, int b){
    printf("Tong cua %d va %d: %d\n",a,b,a+b);
}

void Hieu(int a, int b){
    printf("Hieu cua %d va %d: %d\n",a,b,a-b);
}

void Tich1(int a, int b){
    printf("Multiple cua %d va %d: %d\n",a,b,a*b);
}

int Tich2(int a, int b){ // hàm trả về kiểu int
    return a*b;
}

void Divide(int a, int b){
    printf("Divide cua %d va %d: %lf\n",a,b, (double) a/b);
}
```

```C
int main(){

      void(*ptr1)(int,int);// khai báo con trỏ hàm kiểu void

      ptr1=&Tong;// lưu địa chỉ hàm Tong
      ptr1(4,5); // Cho hàm Tong với hai input parameter

      ptr1=&Hieu;// lưu địa chỉ hàm Hieu
      ptr1(8,2); // Cho hàm Hieu với hai input parameter

      ptr1=&Tich1;// lưu địa chỉ hàm Tich1
      ptr1(2,4);  // Cho hàm Tich1 với hai input parameter

      ptr1=&Divide;// lưu địa chỉ hàm Divide
      ptr1(6,2);   // Cho hàm Divide với hai input parameter

      int(*ptr2)(int,int)=&Tich2;// khai báo con trỏ hàm kiểu int 
      ptr2(5,6);                 // Cho hàm Tich2 với hai input parameter               
}
```

**Ngoài ra, ta có thể dùng hàm function với input paramater là  `con trỏ hàm` với hai `biến kiểu int`**
```c
void Tinhtoan(void(*func)(int,int),int a, int b){    // input: con trỏ hàm và hai biến kiểu int
      printf("Tinh Toan\n");
     func(a,b);                                      // input : a và b
}


int main(){

   Tinhtoan(&Tong,9,9);  // Cung cấp input cho hàm Tinhtoan

   Tinhtoan(&Divide,9,4); // Cung cấp input cho hàm Tinhtoan
 
}
```
**Sủ dụng một mảng con trỏ để trỏ đến lưu trữ địa chỉ các hàm:**

```C
int main(){

void *arr[]={&Tong,&Hieu,&Tich1,&Divide};// Mảng của con trỏ lưu địa chỉ các hàm

((void(*)(int,int))arr[2])(6,7);// ép kiểu con tro arr[2] thành con tro hàm 

((void(*)(int,int))arr[0])(8,6);// ép kiểu con tro arr[0] thành con tro hàm 

return 0;
}
```
### Tại sao phải dùng con trỏ Null?

`Con trỏ NULL`: khi khai báo 1 con trỏ phải gán địa chỉ cho nó, nếu khai báo chưa sử dụng thì khai báo thành con trỏ NULL ( lưu giá trị 0 ), không gán trị cho thì nó sẽ là con trỏ rác và trỏ đến lưu địac chỉ rác.


### 7.Pointer to pointer là gì:
* Cũng là một biến con trỏ nhưng sẽ lưu giá trị là địa chỉ của một biến con trỏ khác thay vì lưu địa chỉ của một đối tượng.

```C
int *ptr=&a;// ptr1 trỏ đến lưu địa chỉ của biến a
int **ptr1= &ptr; // ptr1 đến trỏ đến lưu địa chỉ của ptr

printf("Gia tri: %p",*(ptr1))// lấy giá trị mà ptr1 lưu địa chỉ đó là ptr

printf("Gia tri: %d",*(ptr))// lấy giá trị mà ptr lưu địa chỉ đó là a

printf("Gia tri: %d",*(*ptr1))// lấy giá trị địa chỉ a
```
* Lưu ý: Khi nào dùng input parameter là con trỏ và biến. Dùng biến khi ta không muốn thay đổi giá trị của biến trong hàm. Dùng con trỏ khi ta có thể thay đổi giá trị biến sử dụng trong hàm.
```c
   test(int *ptr, int a);

   test(&a,5);
```

</details>

##

<details>
<summary>L03: MEMORY_ALLOCATION </summary>

**`Sơ đồ phân vừng nhớ trên RAM Memmory:`**


|          Stack          |
| :---------------------: |
|            ↓            |
|            ↑            |
|          Heap           |
| Bss(Uninitialized data) |
| Data(Initialized data)  |
|          Text           |
	
### 1. Phân vùng TEXT:
- Khi nạp source chương trình cho vi xử lý thì sẽ được lưu ở bộ nhớ Flash, cho dù tắt nguồn thì data và thông tin ở Flash vẫn không bị mất. Khi ta khởi động thì source program sẽ copy trong bộ nhớ Flash sang bộ nhớ RAM vào phân vùng TEXT, khi tắt nguồn thì data trong bộ nhớ RAM sẽ bị reset lại. Tốc độ truy xuất ở bộ nhớ RAM sẽ nhanh hơn so với bộ nhớ Flash.Thực tế, bộ nhớ Flash cũng có thể truy xuất dữ liệu ra nhưng tốc độ truy xuát sẽ bị chậm hơn.

- Chỉ quyền truy cập chỉ Read và nó chưa lệnh để thực thi nên tránh sửa đổi instruction.

- Chứa khai báo hằng số (constant) trong chương trình thì sẽ không bị thay đổi.
```c
const int b =20;// Khai bao constant duoc luu phan vung o TEXT
```

### 2.Phân vùng nhớ Data:

- Quyền truy cập là Read và Write.
 ```c
  int a=30;// khai bao biến toàn cục phân sẽ lưu phân vùng Data
  a=20 ;  // cho quyền write biến toàn cục
  printf("a= %d\n", a);
 ```

- Chứa biến toàn cục or biến static với giá trị khởi tạo khác không.
```c
int a=9;// Biến toàn cục ở  phầnn vung Data
static int d=8;// Bien global/Local static ở phân vùng Data
```
- Được giải phóng/thu hồi khi kết thúc vòng đời của chương trình.

### 3.Phân vùng nhớ BSS:

- Quyền truy cập là Read và Write.
 ```c
  int b=0;
  // khai bao biến toàn cục phân vùng BSS
  b=20 ;  // write biến toàn cục
  printf("b= %d\n", b);
 ```

- Chứa biến toàn cục or biến static với giá trị khởi tạo khác không.
```c
int a;
int a=0;
// Biến global được phân vung BSS
static int d=0;// Bien global/local static được phan vùng ở BSS
```
- Được giải phóng/thu hồi khi kết thúc vòng đời của chương trình.
     
###  4.Phân vùng nhớ Stack:

- Quyền truy cập là read và write.

  ```c
    int a=20// Bien local ở phân vùng Stack
    a=10;
    printf("a= %d\n", a);
  ```
- Được sử dụng cấp phát cho biến local, input parameter của hàm,…
  ```c
   void Tong(int a, int b){   // hai bien input parameter a va b duoc phan vung o Stack

   int c;// bien local o phan vung o Stack
   c=a+b;// thuc hien phep tong a + b ở bộ ALU tính toán (bo xu ly trung tam)
  
   printf("Tong cua a va b: %d\n", c);
  
   printf("Dia chi cua a: %p\n", &a);  // 
   printf("Dia chi cua b: %p\n", &b);
   printf("Dia chi cua c: %p\n", &c);
   }
  ```

- Sẽ được giải phóng/thu hồi vùng nhớ khi ra khỏi block code/hàm
  ```c
   Tong(5,7);      // khoi tao int a // 0x01
    //             // khoi tao int b // 0xc0
    //             // khoi tao int c // 0xd0
   printf("-------\n");
   // sau khi thoat khoi function thi no se thu hoi bo nho
   Tong(8,4);       // se truy cap vao bo nho Stack de luu
   // khởi tạo các biến a b c có thể cùng địa chỉ đã thu hồi
  ```

### 4.Phân vùng nhớ Heap:

*Tại sao phải cấp phát bộ nhớ động. Vì thực tế khi khai báo 1 mảng tĩnh thì nó mảng tĩnh không thể thay đổi được kích thước mảng cũng như số lượng phần tử của mảng:*

  ```c
 uint32_t arr[]={1,7,3,5,9};// mảng tĩnh không thay đổi được kích thước va được lưu ở phân vùng Stack.

 for (uint32_t i = 0; i < 5; i++)
 {
    printf("dia chi %d: %p\n",i+1,arr + i);
 }
  ```

- Quyền truy cập là read và write.

-Các hàm được sử dụng để cấp phát bộ nhớ động như: Malloc, Realloc.
- Sẽ được giải phóng/ thu hồi vùng nhớ khi gọi hàm free().
```c
    uint16_t *ptr= (uint16_t*)malloc(sizeof(uint16_t)*5);
    // 0x01 0x02 0x03 0x04 0x05
    // no se cap phat vung nho dong o vung nho Heap

    for (uint8_t i = 0; i < 5; i++)// bien i duoc phan vung Stack
    {
        ptr[i]=2*i;
    }
    for (uint8_t i = 0; i < 5; i++)//  bien i duoc phan vung Stack
    {
      printf("Gia tri i = %d\n", ptr[i]);
    }
   // Khi do cac phan tu của mang dong la: ptr[0], ptr[1], ptr[2], ptr[3], ptr[4]...

    printf("Dia chi: %d\n",sizeof(ptr[4])); // kich thuoc phan tu

    // Thay doi kich thuoc vung nho
    ptr=(uint16_t*)realloc(ptr,sizeof(uint16_t)*7);// thay doi kich thuoc cua vung nho
    
    
    for (uint8_t i = 0; i < 7; i++)
    {
        ptr[i]=2*i;
    }
    for (uint8_t i = 0; i < 7; i++)
    {
      printf("Gia tri i = %d\n", ptr[i]);
    
    // Cac malloc, calloc, realloc thi bo nho thi duoc luu phan vung nho Heap

    free(ptr);// Sau khi cap phat bo nho dong thi can giai phong/thu hoi bo nho 
```
**Cấp phát bộ nhớ động trong C : Malloc, Calloc, Realloc**

Cú pháp khai báo phân vùng nhớ động thường gặp:
```C
void * malloc (size_t size);
void * realloc (size_t num, size_t size);
void * calloc (size_t count ,size_t size);
```
 * Dùng  malloc tạo ra vùng nhớ động trên Heap và biến con trỏ trỏ đến.
 * Dùng  realloc để thay đổi kích thước vùng nhớ động của phần tử khi mà biến con trỏ trỏ đến.
 * Dùng  calloc cũng giống malloc thì các phần tử trên vùng nhớ động thì nó đều sẽ có giá trị là 0.
   
   `Cả ba hàm đều trả về là địa chỉ(Pointer kiểu void) cho nên ta cần phải ép kiểu dữ liệu hàm`
* Example
```C
// cú pháp malloc, realloc

uint8_t *ptr=(uint8_t*)malloc(sizeof(uint8_t)*5);          // tao vung nho 5 byte với mỗi phần từ là 1 byte
unit16_t *ptr=(uint16_t*)malloc(sizeof(unit16_t)*5);      // tao ra 1 mang voi 5 phan tư. Moi phan tu co kich thuoc 2 byte
```
 Dùng `free` : để thu hồi vùng nhớ.
```C
 free(ptr); // giai phong bo nho dong o phan vung Heap
```

### 5. Stack và Heap ?

• Phân vùng nhớ Heap và Stack đều được lưu trữ trong RAM khi chương trình được thực thi.

• Bộ nhớ Stack được dùng để lưu trữ các biến cục bộ trong hàm, tham số truyền vào... Truy cập vào bộ nhớ này rất nhanh và được thực thi khi chương trình được biên dịch.

• Bộ nhớ Heap được dùng để lưu trữ vùng nhớ cho những biến con trỏ để trỏ cấp phát bộ nhớ động cho các hàm malloc - calloc - realloc.

**Kích thước vùng nhớ**

* Stack: kích thước của bộ nhớ Stack là cố định, tùy thuộc vào từng hệ điều hành, ví dụ hệ điều hành Windows là 1 MB, hệ điều hành Linux là 8 MB (lưu ý là con số có thể khác tùy thuộc vào kiến trúc hệ điều hành của bạn).

* Heap: kích thước của bộ nhớ Heap là không cố định, có thể tăng hoặc giảm do đó sẽ đáp ứng được nhu cầu lưu trữ dữ liệu của chương trình.

**Đặc điểm vùng nhớ**
  
* Stack: vùng nhớ Stack được quản lý bởi hệ điều hành, dữ liệu được lưu trong Stack sẽ tự 
động hủy khi hàm thực hiện xong công việc của mình.

* Heap: Vùng nhớ Heap được quản lý bởi lập trình viên (trong C hoặc C++), dữ liệu trong Heap sẽ không bị hủy khi hàm thực hiện xong, điều đó có nghĩa bạn phải tự tay hủy vùng nhớ bằng câu lệnh `free (trong C)`, và `delete() hoặc delete [] (trong C++)`, nếu không sẽ xảy ra hiện tượng rò rỉ bộ nhớ. 

*`Lưu ý: việc tự động dọn vùng nhớ còn tùy thuộc vào trình biên dịch trung gian.`*

  **Vấn đề lỗi xảy ra đối với vùng nhớ**
  
* Stack: bởi vì bộ nhớ Stack cố định nên nếu chương trình bạn sử dụng quá nhiều bộ nhớ 
vượt quá khả năng lưu trữ của Stack chắc chắn sẽ xảy ra tình trạng tràn bộ nhớ Stack 
(Stack overflow), các trường hợp xảy ra như bạn khởi tạo quá nhiều biến cục bộ, hàm đệ 
quy vô hạn,...

Ví dụ về tràn bộ nhớ Stack với hàm đệ quy vô hạn:
```C
 int foo(int x){
 printf("De quy khong gioi han\n");
 return foo(x);
}
```

- Heap: Nếu bạn liên tục cấp phát vùng nhớ mà không giải phóng thì sẽ bị lỗi tràn vùng nhớ Heap (Heap overflow).

- Nếu bạn khởi tạo một vùng nhớ quá lớn mà vùng nhớ Heap không thể lưu trữ một lần 
được sẽ bị lỗi khởi tạo vùng nhớ Heap thất bại.

Ví dụ trường hợp khởi tạo vùng nhớ Heap quá lớn:
```C
int *A = (int *)malloc(18446744073709551615);
```

</details>

##

<details>
<summary> L04: VARIABLES</summary>

Biến static được cấp phát bộ nhớ trong data segment

### 1. Static local variable:

Khi 1 biến cục bộ được khai báo với từ khóa static và ô nhớ không bị thu hồi khi hàm kết thúc, chỉ có thể được gọi trong hàm khởi tạo ra nó. Mỗi lần hàm được gọi, giá trị của biến dó sẽ là giá trị lần gần nhất hàm được gọi.
```C

#include<stdio.h>
 
 void test(){
    static int a=10;// bien static local o phan vung nho Data
                    // doi voi bien static sau khi ket thuc chtr thi khong bi thu hoi bo nho
   printf("Gia tri : %d\n", a);
    a++;
 }
 
int main() {

     test();          //giá trị của x sẽ là 10
     test();          //giá trị của x tăng lên 1 đơn vị là 11
     test();          //giá trị của x tăng lên 1 đơn vị là 12
   return 0;
}
```
Kết quả:
`10
11
12`

### 2. Static global variable:
Biến static toàn cục ta chỉ có thể sử dụng biến đó trong File của nó, các File khác không truy cập được. 
```C
// biến a này chỉ được sử dụng trong file main.c
static int a;    // được phân vùng nhớ BSS.

// hàm test() này chỉ được sử dụng trong file main.c
static void test() {};   
```

### 2. Extern:
Dùng để lấy hàm/biến trong một file nào đó của Folder để sử dụng (trừ static hàm/biến).

```c
 extern void test();// lấy hàm test() từ file khác

 extern int count;// lấy biến count từ file khác
// Sau khi đó test và biến count cả hai file là như nhau
```

### 3.Volatile:

* Được dùng trong lập trình nhúng (Embedded System) với từ khóa volatile
* Việc khai báo biến volatile để tránh những lỗi sai khó phát hiện do tính năng optimization của compiler.

```c
 volatile int test;// thong bao cho complier khong duoc phep toi uu biến test;

    while (1)
    {
      test =readDataUART(); // doc tin hieu trạng thái từ phần cứng

      A();
      B();
      C();
    }
     
```

   ### 4. Register:

  - Việc dùng lệnh `register` có nghĩa là ta se lưu biến khởi tạo trên thanh ghi thay vì ta phải lưu biến trên bộ nhớ RAM.
 
    
   <img src="https://i.imgur.com/Q4Vnowf.jpg">

  ```C
  int a=10;// khai báo biến trên phần vùng stack trên RAM
  a=a+20;
  ```
 *Khi ta khởi tạo vùng nhớ cho a trên bộ nhớ RAM thì phép toán a+20 sẽ lấy từ bộ nhớ RAM sang register rồi qua bộ ALU(bộ xử lý trung tâm) để thực hiện phép tính toán. Sau đó, ALU sẽ chuyển giá trị về cho register rồi về RAM. Chính vì vậy nó sẽ là mất thời gian, khi ta dùng `register` để khởi tạo vùng nhớ cho a trên thanh ghi thì ta chỉ cần trao đổi giữa ALU với thanh ghi.*
 *Thực tế, hiện nay tốc độc trao đổi giữa RAM và thanh ghi cũng rất nhanh nhưng đối với một số vi điều khiển thì còn đang khá chậm. Thanh ghi cũng giống như bộ nhớ RAM nhưng khả năng lưu data không lớn.
 
 ```c
  register int x=10;//  khởi tạo bộ nhớ cho a  tren thanh ghi register cho nen toc do xu ly nhanh hon so voi luu tren RAM

  ```
  

</details>

##

<details>
<summary>L05: STRUCT_UNION </summary>
	
### 1.STRUCT:

* Kích thước của struct phụ thuộc vào kiểu dữ liệu lớn nhất để quét và phụ thuộc vào cách sắp xếp các member trong struct.
* Các member trong struct sẽ có địa chỉ liền kề nhau.
  Giải thích không đầy đủ: Kích thước của struct là kích thước của các member cộng lại với bộ nhớ đệm(pending).
*Example 1: Cách truy cập các member trong struct*
 - Tên của kiểu struct co thể do người dùng tự định nghĩa và dùng typedef.
```c
      typedef struct {
        uint8_t x;
        uint8_t y;
      }toaDo;
      int main(){
        toaDo M;  //hoặc {.x=10, .y=20};
        M.x = 10;
        M.y = 20;
        printf("toa do diem M: M.x = %d, M.y = %d\n", M.x, M.y);
        return 0;
      }
```
*Example2: Kích thước struct*

```C
 typedef struct
 {
    uint8_t x; // 1 byte     1 byte + 2 byte + 4byte + 1 bytes bo nho dem    = 8
    uint16_t z;// 2 bytes   
    uint32_t y;// 4 bytes    
    uint64_t t;// 8 bytes   8 byte                                           = 8           
 }toado;
// Do uint64_t là 8 byte theo dựa vào compiler của gcc thì mối lần quét là 8 byte.

 printf("Dia chi var: %d \n", sizeof(toado));// in cái kích thước cua struct
// ket qua : 8


//
   typedef struct
  {
    uint8_t x;// 1 byte      1 byte + 7 bytes bo nho dem
    uint16_t z;// 2 bytes    8 bytes
    uint32_t y;// 4 bytes    2 byte + 4 bytes + 2 bo nho dem 
    uint32_t t;// 4 bytes    4 bytes 
    uint64_t m;// 4 bytes
    uint32_t i;
  }toado;
```
### 2. UNION :

* Union là kiểu data do người dùng định nghĩa sẽ gồm các member với nhiều kiểu dữ liệu khác nhau nhưng các member sẽ có cùng địa chỉ. Tại 1 thời điểm thì ta chỉ nhận được một giá trị với từng kiểu loại dữ liệu của member.
* Ngoài ra kích thước của Union sẽ phục thuộc vào kiểu dữ liệu lớn nhất của member theo complie gcc để quét nần kích thước của Union có thể là bộ nhớ member lớn nhất + bộ nhớ đệm (pending).
Lưu ý: Các member đều có cùng vùng nhớ vậy khi dùng cái nào thì ta sẽ phải gọi từng member ra nếu gọi cùng lúc các member thì sẽ bị ghi đè. Tóm lại, khi mà ta thay đổi giá trị của một member thì sẽ ảnh hưởng đến các member khác. Khi trong quá trình truyền data thì tại 1 thời điểm ta có thể nhận giá trị của một kiểu dữ liệu của member duy nhất.
```C
 typedef union
 {
    uint8_t var1[5];  // 1 byte    15 bytes
    uint64_t var2[3]; // 8 byte    24 bytes
    uint32_t var3[7];//  4 byte    28 bytes     cho nên phải quét : 8 *4 = 32 bytes
 }typeunion;
// Do kiểu dữ liệu lớn nhất là uint64_t (8 byte) nên theo compiler gcc thì nó sẽ quét 8 byte. Cho nên kích thước Uinon là 28 bytes + 4 bytes bộ nhớ đệm = 32 byte

 int main(){
    // cách truy cập vào từng member của struct
    printf("Dia chi var1: %d \n", &(var.var1));// lấy địa chỉ member var1

    printf("Dia chi var2: %d \n", &(var.var2));// lấy địa chỉ member var2

    printf("Dia chi var3: %d \n", &(var.var3));// lấy địa chỉ member var2

    printf("Value of members: %d ", sizeof(typeunion));// kich thuoc union   

    // Kiểm tra việc lưu giá trị các membert trên cùng địa chỉ nhớ
    for (int i = 0; i < 5; i++)
    {
        /* code */
        var.var1[i]=i; // 0 1 2 3 4
    }
    
     for (int i = 0; i < 3; i++)
    {
        /* code */
        var.var2[i]=i*2; // 0 2 4
    }

     for (int i = 0; i < 6; i++)
    {
        /* code */
        var.var3[i]=i*3; // 0 3 6 9 12 15
    }

     for (int i = 0; i < 5; i++)
    {
      printf("%d ", var.var1[i]);
    }
 }
// ket qua: 0 3 6 9 12
```
**Example về việc dùng Union khi truyền frame data:**

```c
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
 }

```
 **Ta cần dùng Debugger để quan sát quá trình truyền và nhân data giữa các member trong Union vởi mảng arr.**
 
### 3.So sánh Struct và Union:

•	`Struct`: Dữ liệu của các member của struct được lưu trữ ở những vùng nhớ khác nhau. Do đó kích thước của 1 struct phụ thuộc vào kiểu dữ liệu lớn nhất   trong member để complier gcc để quét số bytes và cũngphụ thuộc các sắp xếp các member trong struct.

•	`Union` :  Các member sẽ có cùng 1 địa chỉ nhớ. Kích thước của union cũng phụ thuộc vào kiểu dữ liệu lớn nhất trong member để biết complie gcc biết quét số bytes. Cho nên kích thước của Union sẽ bằng member có kích thước lớn nhất + bộ nhớ đệm (pending).

*Lưu ý*: `Thực tế, việc quét số bytes bao nhiêu thì bản chất nó phụ thuộc vào architect của vi xử lý.Cáctrường hợp trên chỉ phụ thuộc vào kiểu dữ liệu lớn nhất quét là do complier gcc đã define lại aligment.`

</details>

##

<details>
<summary>L06: COMPLIER</summary>
	
* Quy trình biên dịch là quá trình chuyển đổi từ ngôn ngữ bậc cao (NNBC) (C/C++, Pascal, Java…) sang ngôn ngữ máy để máy tính có thể hiểu và thực thi. Thực tế các ngôn
ngữ (Pascal,Jave, Python) khi biên dich sang ngôn ngữ máy thì nó đều phải được trải qua chuyển thành ngôn ngữ C.

<img src="https://tapit.vn/wp-content/uploads/2017/07/GCC_CompilationProcess.png">

![image](https://github.com/KhanhTruongTG/EMBEDDED-INTERVIEW-T7/assets/139245069/5354cfc4-a723-434e-b080-bf5669424864)

Chương trình ngôn ngữ C để cho máy tính hiểu được phải trải qua một quá trình biên dịch để chuyển đổi từ dạng source file sang file mã thực thi. Quá trình được chia ra làm 4 giai đoạn chính:
 
### 1. Giai đoạn tiền xử lý (Pre-processor)

  Giai đoạn này sẽ thực hiện:
  - Các source file .c và .cpp .
  - Xoá bỏ các comment, chú thích.
  - Mở rộng các Macro và Include file.
  - Xử lý các câu lệnh điều kiện: Ifndef, elif...endif .
  - Sẽ copy nội dung từ các file khác để đưa vào file `main.c`  để chạy bằng cách là sẽ dùng include "Text.c". Thực tế thì trong C thì tất cá các file sẽ được chạy trên cùng một file`main.c` .
  
 * Sau khi qua tiền xử lý thì từ file `.c` sẽ tạo ra file code có đuôi `.i` : (main.i). Để tạo ra file main.i thì ta dùng lệnh `gcc -E filename.c -o filename.i` hoặc `gcc -E filename.i` để xem lại code sau quá trình tiền xử lý.

`Chú ý:Để cho hai file main.c và text.c` cùng chạy cfng lúc với nhau thì ta dùng cầu lệnh `gcc main.c text.c -o main` và sau đó nhập `./main` (file main là do ta tạo ra).

### 2. Giai đoạn dịch NNBC sang Assembly (Compiler)
  
  - Phân tích cú pháp (syntax) của mã nguồn NNBC
  - Chuyển chúng sang dạng mã Assembly là một ngôn ngữ bậc thấp (hợp ngữ) gần với tệp ngôn ngữ máy của bộ vi xử lý.
* Quá trình biên dịch code `.i` thành ngôn ngữ Assembly `.s` .  Dùng lệnh `gcc -S -o filename.i filename.s` để tạo ra file `.s` (main.s).
* Trong ngôn ngữ C thì chương trình sẽ chạy dựa vào địa chỉ hàm và biến.  Khi đó, trong C nó sẽ tự đông truy cập vào bộ nhớ RAM sẽ tìm và lấy địa chỉ trống bất kì
*  Trong file assembly thì ta sẽ thấy các hàm/biến sẽ được tự động gán địa chỉ nào bởi C. Ngoài ra, ta có thể thay đổi địa chỉ cho từng hàm và biến tuỳ ý không nhất thiết phải theo trình tự trong C.
*  Người ta thường dùng ngôn ngữ Assembly để viết hệ điều hành (RTOS) sẽ cho nhiều tab chạy song song với nhau.
  
### 3. Giai đoạn dịch Assembly sang ngôn ngữ máy (Assember)
  
  - Dich chương trình => Sang mã máy 0 và 1
  - Một tệp mã máy (Object) `.o` hoặc `.obj` sinh ra trong hệ thống sau đó
*  Dùng lệnh `gcc -c filename.c -o filename.o` để tạo ra file `.o` và dùng lệnh `objdump -d -Mintel filename.o` để xem code trong Object file.

### 4. Giai đoạn liên kết (Linker)
  
  - Trong giai đoạn này mã máy của một chương trình dịch từ nhiều nguồn (file `.c` hoặc file thư viện `.lib`) được liên kết lại với nhau để tạo thành chương trình đích duy nhất.
  - Mã máy của các hàm thư viện gọi trong chương trình cũng được đưa vào chương trình cuối trong giai đoạn này
  - Chính vì vậy mà các lỗi liên quan đến việc gọi hàm hay sử dụng biến tổng thể mà không tồn tại sẽ bị phát hiện. Kể cả lỗi viết chương trình chính không có hàm main() cũng được phát hiện trong liên kết
  - Kết thúc quá trình tất cả các đối tượng được liên kết lại với nhau thành một chương trình có thể thực thi được (`Executable` hay `.exe`) thống nhất

  -> File sau khi gộp lại sẽ có đuôi mở rộng `Executable` hoặc `.exe` trên Window, còn trên MacOS hay Linux có thể đuôi theo chỉ định hoặc không có đuôi mở rộng

  -> Để chạy file code C trên Terminal dùng lệnh `gcc -o filename filename.c` để tạo ra file thực thi, sau đó dùng lệnh `./filename` để chạy file thực thi

</details>

##

<details> 
<summary> L07: MACRO </summary>

### 1. MACRO

  - Define Marco là một định nghĩa (do lập trình viên đặt tên) dùng để đổi tên (đã định nghĩa) hàm/ biến đã define tương ứng.
  - Quá trình tiền xử lí (pre-processor), các Define Macro có nhiệm vụ sẽ thực hiện define Macro để  thay thế bởi các các định nghĩa hàm/biến tương ứng
 
      ```c
      #define SUM(a,b) a+b// thay thế a + b cho SUM(a,b) ở preprocessor 
      #define TEST abcxy  // thay thế abcxy cho TEST

      printf("Tong cua a va b : %d\n ", SUM(5,6));

      printf("Tong cua a va b : %d\n ", SUM(9,6));
      ```

    `#define SUM(a,b) a+b` => Preprocessor khi gặp bất kỳ lời gọi `SUM(a, b)` nào thì thay ngay bằng `a+b`


     `Macro định nghĩa hàm/biến hoặc cái gì thì sẽ thay thế tương ứng cái đó  trong quá trình tiền xử lý`

### 2.Khái niệm Ifndef, Elif, Else.. endif:
   
 * **Example 1:**
    ```c
     #define STM32 // define label STM32

     #ifndef STM32 // neu da define label STM32 thi bo cau lenh ben trong va nguoc lai
     int a=10;
     #endif       // ket thuc cau lenh dinh nghia
   ```
* **Example 2:**

  ```c
   #define SIZE 10  // define SIZE la 10

   #if SIZE >20     // So sanh neu thoa thi thuc hien a=30
   int a =30;

   #elif SIZE == 20 // So sanh neu thoa thi thuc hien a=10
   int a= 10;

   #else            // So sanh neu thoa hai cai tren thi thuc hien  a=5
   int a=5;
   #endif

   // Cac cau lenh nay se duoc thuc hien o qua trinh preprocessor
  ```
* **Example 3:**
  
  ```c
    // define ham CREATE_FUNC bang ham void funname(){}
    #define CREATE_FUNC(funname, cmd)        \ 
    void funname(){                          \
    printf(#cmd);                            \
    }
     // ky tu `#` tao dang string (tinh nang cua macro)
     // ky tu `\` de dinh nghia macro va bo phan cuoi 
    CREATE_FUNC(funA,This is funname A\n);  // define macro

    CREATE_FUNC(funB,"This is funname B");  // define macro

  ```
* **Example 4:**
  ```c
  // define FUNC() thanh type var1, var2, var3 ..
    #define FUNC(type, name)      \
    type var1##_ name;            \
    type var2##_ name;            \
    type var3##_ name;

    int main(){
      FUNC(int, test)
    }
   // ky tu `##` tao lien chuoi

   // ket qua: int var1_ test;int var2_ test;int var3_ test;
  ```
* **Example 5:**
  ```c
  // define __VA_ARGS_ cho goi bat cu cai gi ra
  #define FUNC(...)  __VA_ARGS__
  
  #define FUNC(type,...)       \
  int type;                    \
  __VA_ARGS__

  int main(){
    FUNC(name,"This is",15);  // thay the boi  __VA_ARGS__
  }
  // ket qua: int name; "This is"; 15;
  ```
  `Ứng dụng define Macro ở trong Embedded của Autosar khi dùng với nền tảng nhiều vi điều khiển mà không cần thay đổi chương trình:`
  
  File :  **`config.h`**
  ```c
  #define STM32    0
  #define PIC16F   1
  #define ATMGE    2

  typedef enum{   // kieu liet ke enum status
      LOW,
      HIGH
   }Status;

  typedef enum{   // kieu liet ke enum pin 
    PIN0 << 0,    // dich sang trai 0 bit
    PIN1 << 1     // dich sang trai 1 bit
  }Pin;
    
  // dung if, elif .. endif de chon o qua trinh preprocessor
   #if   MCU == STM32                   // So sanh MCU din nghia co phai la STM32 khong
   void digitalWrite(Pin pin, Status status){  // ham dieu khien port
    DAC| pin ~status;
  }
  #elif MCU == PIC16F                  // So sanh MCU din nghia co phai la PIC16F khong  

  void digitalWrite(Pin pin, Status status){  // ham dieu khien port
    CTP| pin ~status;
  }
  #elif MCU==ATMGE                     // So sanh MCU din nghia co phai la ATMGE khong  

  void digitalWrite(Pin pin, Status status){  // ham dieu khien port
    MBC | pin-ASC ~status;
  }
  #endif

  ```
   File:   **`main.c`**

  ```c
  #define MCU STM32  // option use for different of MCU: STM32, PIC16FC, ATMEGA
  #include"config.h" // include file config.h vao file main.c

  int main(){

     while (1)       // vong lap vo han
      {
        digitalWrite(PIN0,HIGH);// dieu khien port vi dieu khien
      }
     
  }

  ```


  

</details>

##

<details>
<summary>L08: FUNCTION - INLINE</summary>

### 1. FUCTION:
  
 <img src="https://i.imgur.com/O69VYvU.jpg">

* Program counter: Khi khởi động cấp nguồn cho vi điều khiển thì sẽ trỏ vào địa chỉ 0x0000 để bắt đầu chương trình thì nó sẽ tạo program counter. Thì program counter thì nó sẽ đếm tại mỗi địa chỉ rồi + 4 bytes và tại mỗi địa chỉ sẽ lấy giá trị ra đề chạy chương trình.( 4 bytes do kiến trúc vi xử lý 32 bit).

* Stack pointer: được sử dụng khi chương trình đang thực thi theo quy trình chuẩn địa chỉ từ 0x00 0x04 0x08..(kiến trúc vi xử lý là 32 bit) thì chương trình phải chuyển hướng sang địa chỉ hướng. Thì lúc này Stack Pointer xuất hiện sẽ lưu địa chỉ tiếp theo sau đó trước khi `program counter`chuyển hướng đến địa chỉ khác để thực thi function khác (trỏ đến địa chỉ hàm được gọi). Sau khi `program counter` thực thi xong thì sẽ vô `Stack pointer` để lấy địa chỉ và tiếp tục thực thi quy trình chuẩn
  
  Example:
   ```c
     void tong(int a, int b){                  
     // 0xC1... 0XC9       // Stack Pointer      // Program Counter

    
      ("Tong cua a va b: %d\n", a+b);
    }

     int main(int argc, char const *argv[])
     {
   
      A();    // 0x01

      B();    // 0x02

      C();    // 0x03

      tong(9,5);

      tong(6,4);

      return 0;
     }
  ```
     
  - Khi ta khai báo 1 hàm `tong(int a, int b)` thì sẽ có địa chỉ tương ứng từ "0XC1..0XC9". Lúc đó khi bắt đầu chương trình thì nó sẽ chạy tuần từ (Giả sử bộ đếm là 1 byte, thưc tế là 8 byte) hàm`A()// 0x01 => B()// 0x02 =>C()// 0x03` rồi tiếp theo là địa chỉ 0x04 mà lại tới hàm tong(). Thì lúc này địa chỉ `0x04` sẽ được vào `Stack Point` và `Program counter sẽ đếm từ địa chỉ hàm 0xC1.. 0xC9`. Sau khi đếm xong thì `Program counter` vào `Stack Point` để lấy địa chỉ 0x04 để tiếp tục chương trình. Cứ tiếp tục như vậy thì hàm `tong()` chỉ có duy nhất địa chỉ từ `0xC1 .. 0xC9 `nhưng tốc độ sẽ chậm vì phải do thực hiện qua các bước `Stack Pointer và Program counter`.
  - Khi sử dụng với `Macro` thì nó chỉ chức năng định nghĩa hàm (hàm đó có thể ở file khác). Cho nên khi bắt đầu chương trình thì nó sẽ chạy tuần từ(Giả sử bộ đếm là 1 byte, thưc tế là 8 byte) `hàm A()// 0x01 => B()// 0x02 =>C()// 0x03` rồi tiếp theo  `hàm tong()`sẽ có địa chỉ `0x04 ..0x07` rối tiếp đến `hàm tong()`sẽ có địa chỉ `0x08 ..0x1A`. Vậy nên thì trường hợp này thì tốc độ xử lý của nó sẽ nhanh hơn nhưng bộ nhớ nhiều.
  

### 2. INLINE:
Example:
```c
  inline tong(int a, int b){                  // 0xC1... 0XC9             //  abc anc and and     // ngon ngu assembly
    
    printf("Tong cua a va b: %d\n", a+b);
}

int main(int argc, char const *argv[])
     {
   
      A();    // 0x01

      B();    // 0x02

      C();    // 0x03

      tong(9,5);  // copy vào đây  //  abc anc and and

      tong(6,4);  // copy vào đây  //  abc anc and and

      return 0;
     }


```
- **Inline Function** được khai báo với từ khóa `Inline`
- Khi hàm nào là `Inline Function` thì nó thấy hàm `tong()` thì sẽ copy dòng mã assembly or mã máy vào chỗ đó  mà hàm đó đã được complier buit ra mã assembly or mã máy.
- Đối với dùng `Inline` thì tốc độ nhanh hơn và bộ nhớ cũng nhiều không phải qua các bước `Stack pointer` và `Program count`. Nhưng đối với Macro thì nó sẽ khác, Vì `Macro` là địh nghĩa, xử lý ở tiền xử lý còn `Inline` có thế buit `1 function lớn` ra mã assembly và mã máy.




</details>

##

<details> 
<summary> EXTRA KNOWLEDGE </summary>

### 1.CON TRỎ HẰNG :
```c
int i = 10;
const int *ptr = &i;  // con trỏ hằng
*ptr = 89;  // lỗi vì không thể thay đổi giá trị của i thông qua con trỏ ptr chỉ có thể thay đổi giá trị qua i
// Chỉ thay đổi được địa chỉ mà biến con trỏ lưu
ptr = &x;   // thoả
x = 50;     // thoa
```

### 2.HẰNG CON TRỎ :
```c
int i = 10;
int* const ptr = &x;
*ptr = 15;  // thay đổi giá trị i thông qua con trỏ ptr
px = &y;   // không thể thay đổi giá trị địa chỉ mà ptr lưu
```
 
### 3. Chức năng CONST :
```c
void test(){
    const int a=10; // khoi tao phan vung Stack 
                   // thoat hoi ham thi thu hoi vung nho
//Các biến khai báo cục bộ và input parameter đều được lưu ở phân vùng Stack trừ cục bộ static
}
```
*Lưu ý: Các biến khai báo ở các phân vùng nhớ Text, Data, BSS thì khai báo toàn cục mới có hiệu lực, trừ biến cục bộ static ở Data và BSS*

**Example:**
```c
int arr[] = {6, 9, 5};

void string(const int arr[]){    //khi có const thì ta không thể thay đổi giá trị của các phần tử mảng

int main(){
   string(arr);
}
}
```
```c

void test1(const int a)// 0xa2 k de thay gia tri 20 khi co "const"
{

}

int main(int argc, char const *argv[])
{
  
    int b=20;// 0xc1
    test1(b);// gan gia tri 20
    printf(""Gia tri : %d);
    return 0;
}
```
*Lưu ý :*
```c
typedef struct main
{
    int x;
    int y;
}Point;
// chỉ là kiểu dữ liệu (format) chưa được khởi động bên trong phân vùng nhớ

Point x =(1,3);// khởi tạo phân vùng nhớ
```

</details>

##

<details> 
<summary> AUTOSAR C CODING GUIDE</summary>

### Các quy tắc về đặt tên theo tiêu chuẩn “Autosar C Coding Guidelines” :

"Autosar C Coding Guidelines" là một trong những tiêu chuẩn phổ biến được sử dụng trong lĩnh vực phát triển các hệ thống nhúng. Tiêu chuẩn này cung cấp các quy tắc và hướng dẫn cho việc viết code theo chuẩn Autosar C, giúp đảm bảo tính linh hoạt, dễ bảo trì và dễ mở rộng của hệ thống nhúng.
Tiêu chuẩn Autosar C Coding Guidelines bao gồm nhiều quy tắc về đặt tên biến và hàm, sử dụng hằng số, định dạng code, sử dụng comment, kiểm tra mã nguồn, v.v. Quy tắc này được thiết kế để đảm bảo rằng các nhà phát triển có thể viết code đồng nhất và dễ đọc, giúp giảm thiểu lỗi và tăng tính ổn định của hệ thống nhúng.

Ngoài ra, tiêu chuẩn Autosar C Coding Guidelines cũng đưa ra các hướng dẫn về việc sử dụng các công cụ phân tích mã nguồn để tìm lỗi và cải thiện tính năng của hệ thống nhúng. Điều này là cực kỳ quan trọng đối với các hệ thống nhúng có tính chính xác cao và độ tin cậy yêu cầu cao, như trong các hệ thống điều khiển động cơ và hệ thống an toàn.

### 1.Quy tắc về đặt tên:

- Sử dụng kiểu đặt tên theo kiểu CamelCase cho các biến và hàm.

- Sử dụng kiểu đặt tên theo kiểu PascalCase cho các cấu trúc và lớp đối tượng.

- Sử dụng chữ hoa cho các hằng số.

- Sử dụng các từ khóa đặc biệt như "const" hoặc "static" để làm rõ rằng biến là hằng số hoặc cục bộ.

- Đặt tên các biến theo quy tắc "type + name" để biểu thị kiểu dữ liệu của biến.

- Đặt tên các biến trong hàm theo quy tắc "type + name" hoặc "name + type" để biểu thị kiểu dữ liệu của biến và thứ tự truyền vào. 
  
**Sử dụng kiểu đặt tên CamelCase cho biến và hàm:**
  ```c
    int numCars = 10;
    float totalSales = 1000.0;
    void getVehicleInfo() { ... }
  ```
**Sử dụng kiểu đặt tên PascalCase cho các cấu trúc và lớp đối tượng:**
  ```c++
   struct CarModel { ... };
   class SalesReport { ... };
  ```
**Sử dụng chữ hoa cho các hằng số:**
  ```c
   const int MAX_NUM_CARS = 100;
   const float DEFAULT_SPEED_LIMIT = 60.0;
  ```
**Đặt tên biến theo quy tắc "type + name":**
  ```c
   int iNumCars = 10;
   float fSalesTotal = 1000.0;
  ```
**Đặt tên biến trong hàm theo quy tắc "type + name" hoặc "name + type":**
  ```c
   int calculateRevenue(int iNumCars, float fPricePerCar);
   void printSalesReport(SalesReport rptSales);
  ```
**Đặt tên biến trong hàm theo quy tắc "type + name" hoặc "name + type":**
  ```c
   int calculateRevenue(int iNumCars, float fPricePerCar);
   void printSalesReport(SalesReport rptSales);
  ```
**Sử dụng tiền tố cho biến để chỉ định mục đích sử dụng của biến:**
  ```c
   int g_iNumCars = 10; // biến toàn cục
   int s_iSalesTotal = 1000.0; // biến cục bộ tĩnh
  ```
**Đặt tên hàm để thể hiện mục đích và hoạt động của nó:**
  ```c
   int calculateRevenue(int iNumCars, float fPricePerCar); // tính doanh thu
   void printSalesReport(SalesReport rptSales); // in báo cáo doanh số
  ```
**Đặt tên hàm callback để thể hiện mục đích và cách sử dụng của nó:**
  ```c
   void ButtonClickedCallback(void); // callback được gọi khi nút được nhấn
  ```
**Đặt tên enum và các hằng số để thể hiện ý nghĩa của chúng:**
  ```c
   enum CarType { SEDAN, SUV, SPORTS };
   const int MAX_NUM_SEATS = 8;
  ```
**Đặt tên các file và thư mục để thể hiện nội dung của chúng:**
  ```c++
   car_model.h // khai báo cấu trúc thông tin xe
   sales_report.cpp // mã nguồn tính toán báo cáo doanh số
  ```  
### 2.Quy tắc về comment:

**Block-level comment:** là một loại comment được đặt ở đầu của một phạm vi code, chẳng hạn như một file, một module hoặc một class, và được sử dụng để cung cấp thông tin về mục đích, tác giả, ngày tạo và các thông tin khác về phạm vi code đó.

Trong ngôn ngữ lập trình C, block-level comment được đặt bắt đầu bằng ký hiệu /* và kết thúc bằng ký hiệu */, và nội dung của comment được đặt giữa hai ký hiệu này.

```c
/*
* File: sample_file.c
* Author: John Doe
* Date: 24/03/2023
* Description: This is a sample file for demonstrating block-level comment
*/
```
Trong ví dụ trên, block-level comment được sử dụng để cung cấp thông tin về tên file, tác giả, ngày tạo và mô tả cho file "sample_file.c". Khi đọc code, các lập trình viên khác có thể dễ dàng hiểu được thông tin về phạm vi code này và sử dụng nó đúng cách.

 **Function-level comment:** là một loại comment được đặt trước một hàm và được sử dụng để cung cấp thông tin về tên, mô tả, tham số và giá trị trả về của hàm đó. Function-level comment giúp các lập trình viên hiểu rõ hơn về chức năng của hàm và cách sử dụng nó trong code.

Trong ngôn ngữ lập trình C, function-level comment được đặt trên một dòng riêng biệt và bắt đầu bằng ký hiệu /* và kết thúc bằng ký hiệu */. Nội dung của function-level comment bao gồm các thông tin sau:

+ Tên hàm

+ Mô tả về chức năng của hàm

+ Các tham số và kiểu dữ liệu của chúng

+ Giá trị trả về của hàm (nếu có)

```c
/*
* Function: calculate_sum
* Description: This function calculates the sum of two integers
* Input:
*   a - an integer value
*   b - an integer value
* Output:
*   returns the sum of a and b
*/
int calculate_sum(int a, int b) {
  return a + b;
}
```
 *function-level comment:* được sử dụng để cung cấp thông tin về tên hàm, chức năng của hàm là tính tổng của hai số nguyên, kiểu và tên của các tham số, và giá trị trả về của hàm. Các lập trình viên khác có thể dễ dàng hiểu được cách sử dụng hàm này trong code.

### 3.Quy tắc về định dạng code

**Khoảng trắng và dòng trống:** sử dụng khoảng trắng và dòng trống để tạo ra các nhóm liên quan trong code. Để code dễ đọc hơn, hãy đặt dòng trống trước và sau các khối lệnh, đoạn mã, hàm, v.v.

```c  
if (condition) {
    // code here
}
```

**Thụt đầu dòng:** sử dụng thụt đầu dòng để chỉ ra các phạm vi liên quan trong code. Thụt đầu dòng bằng 4 khoảng trắng. 

```c
void example_function() {
    if (condition) {
        // code here
    } else {
        // code here
    }
}
```
**Khoảng trắng trong phép toán:** sử dụng khoảng trắng trong các phép toán để làm cho code dễ đọc hơn. 
```c
int result = num1 + num2;
```
**Khoảng trắng trong đối số và tham số hàm:** sử dụng khoảng trắng để ngăn cách giữa các đối số và tham số trong hàm. 
```c
void example_function(int arg1, float arg2, char arg3) {
    // code here
}
```
**Chiều dài dòng:** giới hạn độ dài của dòng code không quá 80 ký tự. Nếu một dòng code dài hơn 80 ký tự, hãy chia thành nhiều dòng. 
```c
void example_function(int arg1, float arg2, char arg3) {
    if (arg1 > 0 && arg2 < 10.0 && arg3 == 'A') {
        // code here
    }
}
```

</details>

##

<details> 
<summary>BASIC KNOWLEDGE ABOUT MAKEFILE</summary>

### 1.CODE TRONG MAKE ĐỂ COMPILE C/C++:

**ABTRACT:**
``` makefile
CC := gcc                     # C
CXX := g++                    # C++   
CFLAGS := -Wall -Wextra -std=c11 -IHeader
CXXFLAGS := -Wall -Wextra -std=c++11 -IHeader
TARGET := main

SRC_C := $(wildcard Source/*.c)
SRC_CPP := $(wildcard Source/*.cpp)

.PHONY: all clean run

all: $(TARGET)         # Input                   # $(CC) $(CFLAGS) $^ -o $@

$(TARGET): $(SRC_C) $(SRC_CPP)
	$(CXX) $(CXXFLAGS) $^ -o $@       # Action
 
run: $(TARGET)        # Input  
	./$(TARGET)                       # Action

clean:
	$(RM) $(TARGET)                   # Action

print-%:                              #Du ghi make print-abc cung khong anh huong
	  @echo $(TARGET)
    @echo $@                          # khi make print-abc se hien ra `printabc`
    @echo $($(subst print-, ,$@))     # khi make print-TARGET thì tao ra $(TARGET) => main

```
`.PHONY`:  sẽ giúp make "all clean run" mà tránh các tên có trùng tên trên file trong file.

`wildcard` : có nghĩa giúp tìm các file bên trong folder mà có dạng `.c/.cpp` .
`all run clean ` : là các Target để thực hiện các `Action : `.

`$(TARGET)` : lấy giá trị tham chiếu được gán đó là `main`.

`echo $(TARGET)` : hiện ra giá trị được gán : `echo main` va `main` 

`@echo $(TARGET)` : tao ra `main` va k hiện echo main.Đó là chức năng của @.

`$@` : Đại diện cho Target, trong trường hợp này là "$(TARGET)"

 `$^`: Đại diện cho tất cả các phần phụ thuộc của mục tiêu, trong trường hợp này là "$(SRC_C)" và "$(SRC_CPP)"

 `$(CXX) $(CXXFLAGS)  $^ -o $@`: Lệnh biên dịch, `$^` sẽ được thay thế bằng 
 "$(SRC_C) và $(SRC_CPP)", và ` $@` sẽ được thay thế bằng "$(TARGET)" tao ra file.exe : **main.exe** nằm ở bên ngoài thự mục.

```makefile
   SRC_C := $(wildcard Source/*.c)
   SRC_CPP := $(wildcard Source/*.cpp)
```


**Example 1:** Compiler file main.c trong cùng 1 folder trên Makefile
```makefile
main.o: source/main.c   
      gcc -c source/main.c -o output/main.o   # tao ra file.o đưa vào thư mục output tu file.c

build: output/main.o
      gcc output/main.o -o output/main.exe      # tao ra file main.exe tu file main.o 
run:   output/main.o
       ./output/main `OR` ./output/main.exe                    # Run file main.exe
clean: 
      rm output/ *          # xoa cac file trong folder output
      rm *.o output         # xoa file .o trong folder output
      rm -rf *.txt~ *.c~    # remove temporary files
```
Để chạy Makefile trên Visual Studio Code thì ta dùng: 

`make` : là chạy toàn bộ câu lệnh trong Makefile.

`make main.o` :  tạo ra file main.o trong folder output

`make build`  : tao ra file main.exe trong folder output

`make run`   : Run file main.exe trong folder output

`make clean`  : xoá toàn bộ file tạo ra hoặc file.o


Ngoài ra, ta cũng có thể chạy makefile trên Cygwin64 :

**cd "D:\INTERVIEW\Document Material 2023\fdsf\test"** : link dẫn tới để make file

`ls ` : xem toàn bộ file được tạo ra trong folder.

Còn lại làm tương tự trên Visual Studio Code.

**Example 2:** Compiler 3 file test.c main.c test.h trong cùng 1 folder.
```makefile
output: output/main.o output/test.o
	gcc -c output/main.o output/test.o -o output/out.exe	
main.o: source/main.c     
	gcc -c source/main.c  -o  output/main.o
test.o: source/test.c     test.h
	gcc -c source/test.c  -o  output/test.o
run: 
	./output/out.exe 
clean: 
        rm *.o out
        rm *.o out     

```
### 2.Các câu lệnh để complier trong Visual Studio Code:

#### COMPLILER IN C PROGRAMMING LANGUAGE:

```MAKEFILE
ossh-keygen -t ed25519 -C "quocphu1807@gmail.com"

# Chuyen tu file source sang file preprocesser: Pre-processor
"gcc -E main.c -o main.i"

#Chuyen tu file preprocesser sang file  file assembly: Compilation
"gcc main.i -S -o main.s"
"gcc -S main.i -o main.s"

#Chuyen tu file assembly sang file object file: Assembler
"gcc -c main.s -o main.o"

#Để đọc code trong file .o: Linker
"objdump -d -Mintel main.o"

#Chuyen tu file .o sang file file .exe:
"gcc -o main.o main.exe"
hoac "gcc main.o -o main.exe"
sang đó: ./main

#Câu lệnh để sử dụng chạy cùng lúc hai file main.c và test.c :
" gcc main.c test.c -o main"

#Sau đó nhập:
"./main"

--------------------------------------------------------

#Để compiler 1 file.c:
"gcc -o main.exe main.c" 

#Sau đó nhập:  
"./main"

HOAC:
#Nếu dùng :    

"gcc main.c ". Sau đó nhập file: ".\a.exe" để compiler

Nếu dùng "gcc main.c -o ' ___' " (đặt tên cho file main1.exe nếu không sẽ tự tạo main.exe)

Sau đó nhập:  './main'

#Câu lệnh tạo ra main.o tu file main.c:
"gcc -c main.c -o main.o "

#De hai file.o thanh mot file moi:

"gcc main.o test.o -o output"

Tạo ra :' file .o ' chung

```

#### COMPLILER IN C++ PROGRAMING LANGUE:

```makefile
#Chuyen tu file source sang file preprocesser: Pre-processor
"g++ -E main.cpp -o main.i"

#Chuyen tu file preprocesser sang file  file assembly: Compilation
"g++ -S main.i -o main.s"
"g++ main.i -S -o main.s"

#Chuyen tu file assembly sang file object file: Assembler
"g++ -c main.s -o main.o"
Để đọc code trong file .o:
"objdump -d -Mintel main.o"

#Chuyen tu file .o sang file file .exe: Linker
"g++ -o main.o main.exe"
hoac "g++ main.o -o main.exe"
sang đó : "./main"
-------------------------------------------------------------------

# De chay 1 file.cpp:
"g++ -o main.exe main.cpp" sau do nhap : "./main"

HOAC:
"g++ main.cpp "thi dung Sau do de chay file: ".\a.exe"

"g++ main.cpp -o '___' "(dat ten cho file main1.exe néu khong se tu tạo main.exe)

Sau do de chay file:  "./main"

#cau lenh tao ra main.o tu file main.cpp:
" g++ -c main.cpp -o main.o "

#cau lenh bien dich makefile:
mingw32-make

#De hai file.o thanh mot file moi:

"gcc main.o test.o -o output"
tao ra "file .o" chung

```

</details>

</details>

##

<details>
<summary><h2>CHAPTER 2: C++ PROGRAMMING LANGUAGE</h2></summary>

<!-- ------------------------------------------------------------------------------ -->
##

<details> <summary>AUTOSAR C++ CODING GUIDELINES </summary>


### Các quy tắc về đặt tên theo tiêu chuẩn “Autosar C++ Coding Guidelines”:

Tiêu chuẩn "AUTOSAR C++14 Coding Guidelines" là một bộ quy tắc và hướng dẫn về cách viết mã nguồn C++ theo tiêu chuẩn Autosar. Tài liệu này đã được phát triển bởi Hiệp hội Autosar, một tổ chức quốc tế chuyên về nghiên cứu và phát triển hệ thống phần mềm trong lĩnh vực ô tô.

Mục tiêu của tiêu chuẩn này là cung cấp một tập hợp các quy tắc và hướng dẫn cho các nhà phát triển phần mềm ô tô để đảm bảo tính nhất quán, dễ bảo trì và an toàn của mã nguồn. Tiêu chuẩn này đưa ra các quy tắc về kiến trúc, xử lý ngoại lệ, quản lý bộ nhớ, đặt tên biến, hằng số, hàm và lớp, kiểm tra lỗi trên biên, kiểm tra chế độ debug, và nhiều vấn đề khác liên quan đến mã nguồn C++.

Với sự phát triển nhanh chóng của các công nghệ ô tô, việc đảm bảo tính an toàn của các phần mềm trong xe là một vấn đề cực kỳ quan trọng. Vì vậy, tiêu chuẩn AUTOSAR C++14 Coding Guidelines là một công cụ hữu ích giúp các nhà phát triển đảm bảo tính an toàn của mã nguồn phần mềm ô tô.

### 1. Đặt tên biến và hằng số:

- **Đặt tên biến**: Tên biến nên được đặt sao cho dễ hiểu, ngắn gọn và miêu tả rõ mục đích sử dụng.

- **Đặt tên hằng số**: Tên hằng số nên được đặt sao cho dễ hiểu, ngắn gọn và miêu tả rõ mục đích sử dụng.

  ```c++
  #include <iostream>
  #include <string>

  // Đặt tên biến
  int numberOfWheels = 4;
  double speedLimit = 60.0;
  bool isRunning = false;

  // Đặt tên hằng số
  const double kPi = 3.14159265358979323846;
  const int kMaxSpeed = 100;
  const double kGravity = 9.81;

  int main() {
    // Sử dụng biến và hằng số đã định nghĩa
    std::cout << "This car has " << numberOfWheels << " wheels." << std::endl;
    std::cout << "The speed limit is " << speedLimit << " km/h." << std::endl;
    std::cout << "Is the car running? " << std::boolalpha << isRunning << std::endl;
    std::cout << "The value of PI is " << kPi << std::endl;
    std::cout << "The maximum speed is " << kMaxSpeed << " km/h." << std::endl;
    std::cout << "The value of gravity is " << kGravity << " m/s^2." << std::endl;
    return 0;
  }
  ```

Trong ví dụ trên, chúng ta đã đặt tên các biến và hằng số sao cho dễ hiểu, ngắn gọn và miêu tả rõ mục đích sử dụng của chúng. Các tên biến và hằng số đều bắt đầu bằng chữ cái viết thường và các từ trong tên được phân cách bằng dấu gạch dưới. Ví dụ: "numberOfWheels", "kMaxSpeed", "kGravity".   

Chú ý rằng trong tiêu chuẩn AUTOSAR C++ Coding Guidelines, việc đặt tên biến và hằng số nên tuân thủ một số quy tắc như sau:

- Tên biến và hằng số nên bắt đầu bằng chữ cái viết thường.

- Các từ trong tên biến và hằng số nên được phân cách bằng dấu gạch dưới.

- Tên biến và hằng số không nên sử dụng những từ viết tắt khó hiểu hoặc không rõ nghĩa.
  
</details>

##

<details> 
<summary>L01_CLASS</summary>

### 1. C++ BASIC:

- C++ Language thì dùng chủ yếu thư hiện #include<isostream> và thư viện không có `.h`. Các thư hiện trong C thì đều được dùng trong C++.
**EXAMPLE 1:**
```c++
#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    int key = 0;

    cout<<"Nhap key:";

    cin>> key;

    cout<<"Key : " <<key;

    return 0;
}
```
### 2. CÁCH TRUY CẬP VÀO CÁC MEMBER CỦA CLASS:

- CLASS thực chất là kiểu dữ liệu do lập trình viên tự định nghĩa giống với Struc bên C về bản chất hoạt động là giống nhau nhưng cách gọi tên khác nhau.

**EXAMPLE 2:** Kháo báo CLASS với các property

```c++
#include<iostream>
#include<string>

using namespace std;

class SinhVien{

    public:
        int MSSV;         // property
        string TEN;        // property
        string LOP;       // property
        int NAM_LINH;      // property
};

int main(int argc, char const *argv[])
{
    

    SinhVien sv;              // Class: SinhVien        // Object : sv

    sv.MSSV = 10012;           // Truy cập từng member trong Class
    sv.TEN  = "Hoang";
    sv.LOP  = "OTO12";
    sv.NAM_LINH = 2001;

    cout << "MSSV: " << sv.MSSV <<endl;
    cout << "TEN :"  << sv.TEN <<endl ;
    cout << "LOP: " << sv.LOP <<endl;
    cout << "NAM_LINH: " << sv.NAM_LINH <<endl;

    return 0;
}
```

**EXAMPLE 3**: CLASS với các property và kiểu phương thức truy cập vào các thuộc tính 

```c++
#include<iostream>
#include<string>

using namespace std;

class SinhVien{

    public:
        int MSSV;     // property
        string TEN;    // property
        string LOP;     // property
        int NAM_LINH;    // property
};

void display(SinhVien sv){

    cout << "MSSV: " << sv.MSSV <<endl;               
    cout << "TEN :"  << sv.TEN <<endl ;
    cout << "LOP: " << sv.LOP <<endl;
    cout << "NAM_LINH: " << sv.NAM_LINH <<endl;
}

int main(int argc, char const *argv[])
{
    
    SinhVien sv1;             // Class: SinhVien        // Object : sv1

    sv1.MSSV = 10012;            // Truy cập từng property trong Class
    sv1.TEN  = "Hoang";
    sv1.LOP  = "OTO12";
    sv1.NAM_LINH = 2001;

    SinhVien sv2 = {12367,"Thang","CDT15",1999};         // Class: SinhVien        // Object :sv2

    display(sv1);

    printf("-------------\n");

    display(sv2);

    return 0;
}

```
**EXAMPLE 4:** Dùng Class gồm các property với method
```c++
#include<iostream>
#include<string>

using namespace std;

class SinhVien{
    public:
          int MSSV;           // property
          string TEN;        // property
          string LOP;        // property
          int NAM_LINH;     // property
          int TUOI(){       // method
              return 2023 - NAM_LINH;
          }

};
void display(SinhVien sv){

    cout << "MSSV: " << sv.MSSV <<endl;      // Truy cập từng property trong Class
    cout << "TEN :"  << sv.TEN <<endl ;
    cout << "LOP: " << sv.LOP <<endl;
    cout << "NAM_LINH: " << sv.NAM_LINH <<endl;
    cout << "TUOI: " << sv.TUOI() <<endl;
}

int main(int argc, char const *argv[])
{
    
    SinhVien sv1;

    sv1.MSSV = 10012;
    sv1.TEN  = "Hoang";
    sv1.LOP  = "OTO12";
    sv1.NAM_LINH = 2001;

    SinhVien sv2 = {12367,"Thang","CDT15",1999};

    display(sv1);

    printf("-------------\n");

    display(sv2);

    return 0;
}
```
 **EXAMPLE 5:** Dùng Constructor không có input parameter.
- Khi Object `sv1` or `sv2` được khai báo Class thì hai object sẽ tự động vào `Constructor: Sinh viên` để thực hiện và sau đó mới khởi tạo các `Property` sau đó.
- Các Property có thể như là các biến toàn cục và `Method`, `Constructor` coi như là các Function, CodeBlock như trong C.
- 
 ```c++
  #include<iostream>
  #include<string>

  using namespace std;

  class SinhVien{

      public:
          SinhVien(){                      // Constructors not the input paramaters;
              static int id = 1000;        // declare id with the key "static" will free memory id when the end of program
              MSSV = id;
              id++;
          }
          int MSSV;           // property
          string TEN;        // property
          string LOP;        // property
          int NAM_LINH;     // property
          int TUOI(){       // method
              return 2023 - NAM_LINH;
          }

  };

  void display(SinhVien sv){

      cout << "MSSV: " << sv.MSSV <<endl;
      cout << "TEN :"  << sv.TEN <<endl ;
      cout << "LOP: " << sv.LOP <<endl;
      cout << "NAM_LINH: " << sv.NAM_LINH <<endl;
      cout << "TUOI: " << sv.TUOI() <<endl;
  }

  int main(int argc, char const *argv[])
  {
      
      SinhVien sv1;

      sv1.TEN  = "Hoang";
      sv1.LOP  = "OTO12";
      sv1.NAM_LINH = 2001;

      SinhVien sv2;

      sv2.TEN  = "Trung";
      sv2.LOP  = "CDT53";
      sv2.NAM_LINH = 1999;

      display(sv1);

      printf("-------------\n");

      display(sv2);

      return 0;
  }
 ```

 **EXAMPLE 6:** Dùng Constructor có input parameter.

 - Khi khai báo object mà có contructor với input parameter thì dùng cú pháp: 
  ```c++
    SinhVien sv1("Hoang",2001,"CDT56");    
  ```

 ```c++
  #include<iostream>
  #include<string>

  using namespace std;

  class SinhVien{

      public:
          SinhVien(string ten,int nam_sinh, string lop){           // Constructors with the input paramaters;
              TEN = ten;
              LOP = lop;
              NAM_LINH = nam_sinh;                                                               
              static int id = 1000;                              // declare id with the key "static" will free memory id when the end of program
              MSSV = id;
              id++;
          }
          int MSSV;           // property
          string TEN;        // property
          string LOP;        // property
          int NAM_LINH;     // property
          int TUOI(){       // method
              return 2023 - NAM_LINH;
          }

  };

  void display(SinhVien sv){

      cout << "MSSV: " << sv.MSSV <<endl;
      cout << "TEN :"  << sv.TEN <<endl ;
      cout << "LOP: " << sv.LOP <<endl;
      cout << "NAM_LINH: " << sv.NAM_LINH <<endl;
      cout << "TUOI: " << sv.TUOI() <<endl;
  }

  int main(int argc, char const *argv[])
  {
      
      SinhVien sv1("Hoang",2001,"CDT56");

      SinhVien sv2("Trung",1998,"KHMT12");

      display(sv1);

      printf("-------------\n");

      display(sv2);

      return 0;
  }
 ```

 **EXAMPLE 7:**  Sử dụng hai function test1() va test2() đề kiếm tra id(khai báo static).

 ```cpp
    #include<iostream>
    #include<string>

    using namespace std;

    class SinhVien{

        public:
            SinhVien(string ten,int nam_sinh, string lop){                       // Constructors with the input paramaters;
                TEN = ten;
                LOP = lop;
                NAM_LINH = nam_sinh;                                                               
                static int id = 1000;                                           // declare id with the key "static" will free memory id when the end of program
                MSSV = id;
                id++;
            }
            int MSSV;           // property
            string TEN;        // property
            string LOP;        // property
            int NAM_LINH;     // property
            void display(){           //method
                cout << "MSSV: " << MSSV <<endl;
                cout << "TEN :"  << TEN <<endl ;
                cout << "LOP: " << LOP <<endl;
                cout << "NAM_LINH: " << NAM_LINH <<endl;
                cout << "TUOI: " << 2023 - NAM_LINH <<endl;
            }

    };

    void test1(){

          SinhVien sv1("Hoang",2001,"CDT50");
          SinhVien sv2("Kiet",1999,"KHMT20");
          sv1.display();
          sv2.display();
    }

    void test2(){

          SinhVien sv1("Hoang",2001,"CDT50");
          SinhVien sv2("Kiet",1999,"KHMT20");
          sv1.display();
          sv2.display();
    }

    int main(int argc, char const *argv[])
    {
        test1();
        printf("----------\n");
        test2();

        return 0;
    }
 ```
 **EXAMPLE 8:** Cách hoạt động `Destructor` trong CLASS 
- `Destructor` sẽ được dùng trước khi mà ta thu hồi bộ nhớ của Object.
- Khi chương trình thực hiện mà chuyển đến hàm được gọi `test1()` thì lúc này `Object: sv1` sẽ khởi tạo Class trước và thực hiện: khởi tạo các property, constructor, method. Sau đó thì `Object: sv2 ` mới được khởi Class. Sau khi function/CodeBlock test1() kết thúc thì trước khi thu hồi thì sẽ thực hiện `Destructor` trong Class.
- Do `hai Object sv1 và sv2 ` đều là Object cục bộ phần vùng Stack trong Ram nên `Object sv2` sẽ xếp trên `Object sv1` do khai báo Class sau. Do đó, `Object sv2` trước khi bị thu hồi sẽ thực hiện `Destructor` bên trong Class trước. Sau đó, thì `Object sv1` thì sẽ thực hiện `Destructor` trong Class trước khi bị thu hồi vùng nhớ ở Stack. 

 ```c++
#include<iostream>
#include<string>

using namespace std;

class SinhVien{

    public:
        SinhVien(string ten,int nam_sinh, string lop){                       // Constructors with the input paramaters;
            TEN = ten;
            LOP = lop;
            NAM_LINH = nam_sinh;                                                               
            static int id = 1000;                                           // declare id with the key "static" will free memory id when the end of program
            MSSV = id;
            id++;
        }
        ~SinhVien(){                                                      //Destructor : pha huy
            
            cout <<"THOAT TEN "<< TEN << endl;
            *ptr = 1000;                     // Thay đổi giá trị tại địa chỉ của id.
        }
        int *ptr;
        int MSSV;           // property
        string TEN;        // property
        string LOP;        // property
        int NAM_LINH;     // property
        void display(){           //method
            cout << "MSSV: " << MSSV <<endl;
            cout << "TEN :"  << TEN <<endl ;
            cout << "LOP: " << LOP <<endl;
            cout << "NAM_LINH: " << NAM_LINH <<endl;
            cout << "TUOI: " << 2023 - NAM_LINH <<endl;
        }

};

void test1(){

       SinhVien sv1("Hoang",2001,"CDT50");
       SinhVien sv2("Kiet",1999,"KHMT20");
       sv1.display();
       sv2.display();
}

void test2(){

       SinhVien sv1("Hoang",2001,"CDT50");
       SinhVien sv2("Kiet",1999,"KHMT20");
       sv1.display();
       sv2.display();
}

int main(int argc, char const *argv[])
{
    test1();
    printf("----------\n");
    //test2();

    return 0;
}

 ```

### 3. STATIC AND SCOPE IN CLASS:

**EXAMPLE 1:** Scope public.

```c++
#include<iostream>
#include<string>

using namespace std;

class SinhVien{
    public:
          static int MSSV;
          string TEN;
          string LOP;
};

int SinhVien::MSSV;             // khởi tạo ban đầu đề có địa chỉ vì dùng static

int main(int argc, char const *argv[])
{
    SinhVien sv1,sv2;

    printf("Dia chi sv1: %p\n", &(sv1.MSSV));
    printf("Dia chi sv2: %p\n", &(sv2.MSSV));

    printf("Dia chi sv1: %p\n", &(sv1.TEN));
    printf("Dia chi sv2: %p\n", &(sv2.TEN));


    return 0;
}

```
- Khi ta khai báo `static property of member` trong Class thì ta cần phải khởi tạo `property or member` đó trước bằng cú pháp :`int SinhVien::MSSV;`
-  Tại vì các `Object` khi truy cập vào `static member` thì các object sẽ cùng truy cập vào chung một địa chỉ của`Static member`. Còn các member không khái báo static thì sẽ có địa chỉ khác nhau tương ứng với các Object khác nhau. Tại vì `static member` nó chỉ bị thu hồi vùng nhớ khi kết thúc vòng đời của chương trình.

**EXAPLE 2:** Tạo ra Library của SinhVien
- Class là kiểu dữ liệu do lập trình viên định nghĩa vậy nên nó chỉ là form, kiểu dữ liệu. Để tạo một thư viện thì cần hai file: .cpp và .hpp .
- Trong FILE `file .hpp` thì sẽ khai báo, khởi tạo hay chứa tên, label của các function, khởi tạo các biến. Nó chỉ có tác dụng định nghĩa. Chứa các câu lệnh xét điều kiện Macro.
- Còn trong FILE `file.cpp` thì sẽ triển khai, chứa nội dung các câu lệnh của các Function đó và sẽ khởi tạo cho `static member` ban đầu nếu có.

*FILE: SinhVien.hpp*
```c++
#ifndef   _SinhVien_H
#define   _SinhVien_H

#include<iostream>
#include<string>

using namespace std;

class SinhVien{
    public:
         SinhVien(string ten, int tuoi);     // Instructor
         string TEN;                         // Property
         int TUOI;                           // Property
         static int ID;                      // Property
         void Display();                     // Method
};

#endif // _SinhVien_H INCLUDED

```

*FILE: SinhVien.cpp*
```c++
#include"SinhVien.hpp"

SinhVien::SinhVien(string ten, int tuoi){     // Khởi tạo function/method của class SinhVien

       TEN = ten;
       TUOI = tuoi;
       ID = 10;
}

void SinhVien::Display(){                  // Khởi tạo function/method của class SinhVien

     cout << "TEN: " <<TEN <<endl;
     cout << "TUOI: " <<TUOI <<endl;
    
}

int SinhVien::ID;  // khởi tạo ban đầu đề có địa chỉ vì dùng static


File: main.cpp

#include"SinhVien.hpp"
#include<iostream>

using namespace std;

int main()
{

    
    SinhVien sv("Hoang",2001);

    SinhVien sv1("Tuan", 2005);

    //sv.Display();

    sv.ID = 40;

    sv1.ID = 80;

    //sv.ID = 0;

    cout<< "ID: "<<sv.ID<<endl;

    printf("Dia chi cua sv: \t%p \n", &(sv.ID));

    printf("Dia chi cua sv1: \t%p\n", &(sv1.ID));

    printf("Dia chi cua sv: \t%p \n", &(sv.TEN));

    printf("Dia chi cua sv1: \t%p\n", &(sv1.TEN));

    return 0;
}

```


**EXAMPLE 3:** Scope private.
```c++
class SinhVien{
    public:
        SinhVien(string ten, int tuoi); 
        void Display();  
    private:
         string TEN;                         
         int TUOI;                           
         int ID;                                        
};
```
- Đối với phạm vi `public` thì member bên trong đó sẽ được các `Object`, `Class kế thứa` tuý ý truy cập và trỏ đến sử dụng, bổ sung.
- Còn đối với `private` nếu như các member có cùng `Class SinhVien` nên các member trong `private` chỉ được truy cập bởi các member cùng `Class SinhVien` truy cập và trỏ đến. Còn các `Object và Class kế thừa`thì không được truy cập đến được `phạm vi private`. Có nghĩa là các member trong Class thì sẽ có quyền truy cập đến `phạm vi private`. Cho dù ta có include thư viện vào file khác thì ta chỉ có thể truy cập vào phạm vi `public`.
- Việc việc dùng `private` nhằm tránh cho người dùng truy cập các member bên trong private để thay đổi giá trị và chỉ cho phép người dùng truy cập vào phạm vi public. Nó khá giống với `static bên C Advance`.
  
**Example 4:** Scope protected.

*FILE: .hpp* 
```c++
class SinhVien{
    public:
        void SetInformation1(string ten, int tuoi); 
        void Display1();  
    protected:
        string TEN;                         
        int TUOI;                           
                                       
};

class HocSinh : public SinhVien{             // Cấu trúc kế thừa Class
    public:
        void SetInformation(string ten, int tuoi, int mssv); 
        void Display();  
        int MSSV;

};
```
*FILE: .cpp*
```c++
#include"SinhVien.hpp"

void SinhVien::SetInformation1(string ten, int tuoi){       // Khởi tạo function/method của class SinhVien

       TEN = ten;
       TUOI = tuoi;
}
void SinhVien::Display1(){                            // Khởi tạo function/method của class SinhVien
      
     cout << "TEN: " <<TEN <<endl;
     cout << "TUOI: " <<TUOI <<endl;
    
}

void HocSinh::SetInformation(string ten, int tuoi, int mssv){    // Khởi tạo function/method của class Hocsinh
    TEN  = ten;
    TUOI = tuoi;
    MSSV = mssv;
}
void HocSinh :: Display(){                        // Khởi tạo function/method của class Hocsinh
    cout << "TEN: " <<TEN <<endl;
    cout << "TUOI: " <<TUOI <<endl;
    cout << "MSSV: " << MSSV <<endl;
}

```
- Đối với phạm vi `protected` thì các`Object` không thể truy cập đến các member trong phạm vi này nhưng mà `Class kế thừa` thì có khả năng truy cập vào các member trong phạm vi `protected`. Cho dù ta có include thư viện thì các `Object` không thể truy cập vào phạm vi này.
- Phạm vi này có tác dụng cho người dùng có thể kế thừa `Class trước đó` và phát triển thêm tính năng cho `Class sau` mà vẫn truy cập được các member trong Class trước đó.
- Ngoài đó, để kế thừa `Class trước đó` thì ta sử dụng cấu trúc: `class HocSinh : public SinhVien`
- Khi khai báo Object ở `Class Hocsinh` thì ta có thể truy cập các member trong phạm vi public của Class khác và cả Class của nó. Nhưng phạm vị `private và protected` thì không thể truy cập được.
- Bởi vì do tính kế thừa nên tên của các member của `Class kế thừa` có thể khác tên so với Class trước đó.
  
#### 4.CÁC LƯU Ý QUAN TRỌNG:

`CHÚ Ý 1:` Các member ở private scope có thể truy cập vào protected scope, public scope và ngược lại các member ở protected scope có thể truy cập vào private scope, public scope. Vì thực chất các member đều cùng chung phạm vi CLASS.

```c++
FILE thư viện : .hpp
class SinhVien{
    public:
        void SetInformation1(string ten, int tuoi); 
        void Display1();  
        static int ID; 
    private:
        int NAM_SINH;
        void display1();
        static int CMND;                 // khai báo static trong privte cũng phải khởi tạo đầu tiên cho member:
    protected:
        string TEN;                         
        int TUOI;   
        void display2();                                                            
};


FILE thư viện: .cpp

void SinhVien::SetInformation1(string ten, int tuoi){

       TEN = ten;                                     // Các Member ở public có thể truy cập vào phạm vi: private và protected
       TUOI = tuoi;
       NAM_SINH = 2001;                              
       ID =60;
       CMND= 30;
}
void SinhVien::Display1(){                          // Các Member ở public có thể truy cập vào phạm vi: private và protected

     cout << "TEN: " <<TEN <<endl;
     cout << "TUOI: " <<TUOI <<endl;
     ID=900;
     display1();
     display2();

}

int SinhVien :: ID =10;

int SinhVien::CMND;                                  // khởi tạo khai báo static của member ở phạm vi private. Giúp khởi tạo vùng nhớ có địa chỉ ban đầu không đầu

void SinhVien::display1(){                           // khai báo method ở class SinhVien phạm vi: private
    cout<<"Nhap TEN: "<< TEN <<endl;
    cout<<"Nhap TUOI: "<<TUOI << endl;
}

void SinhVien::display2(){                           // khai báo method ở class SinhVien phạm vi: protected
    cout<<"Nhap NAM_SINH: "<< NAM_SINH<< endl;
    cout << "ID: " <<ID <<endl;
    CMND = 800;                                      // Các Member ở protected có thể truy cập vào phạm vi private 
    cout<<"Nhap CMND: "<<CMND<< endl;
}

```

`Chú ý 2:` Ở CLASS kế thừa Hocsinh thì các member ở phạm vi private có thể truy cập ở phạm vi public(HocSinh),protected(HocSinh) và có thể truy cập vào phạm vi public(SinhVien), protected(SinhVien) của CLASS SinhVien.

```c++
FILE thư viện: .hpp

class SinhVien{
    public:
        void SetInformation1(string ten, int tuoi); 
        void Display1();  
        static int ID; 
    private:
        int NAM_SINH;
        void display1();
        static int CMND;
    protected:
        string TEN;                         
        int TUOI;   
        void display2();                       
                                       
};

class HocSinh : public SinhVien{                    // CLASS Kế Thừa
    public:
        void SetInformation(string ten, int tuoi, int mssv); 
        void Display();  
        int MSSV;
    private:
         void Print();
};

FILE thư viện: .cpp

void HocSinh::Print(){

    cout<<"MSSV HOC SINH: "<< MSSV<<endl;
    ID = 812;
    printf("------\n");
    display2();
    printf("------\n");
    Display1();
}

```
</details>


##

<details> <summary>L02: OOP </summary>

### 1. Tính kế thừa (Inheritance):


- CLASS SinhVien dùng tính chất kế thừa của Class DoiTuong. Vậy khi ta khai báo Object kiểu Class SinhVien thì nó sẽ kế thừa các đặc tính của Class DoiTuong ở phạm vi public(các member). Ngoài ra, các member trong Class SinhVien cũng có thể kế thừa các đặc tính các member trong phạm vi public và protected.
- Trong tính chất kế thừa còn có phương pháp ghi đè giúp cho Method trong Class kế thừa(SubClass) có quyền ghi đè thêm tính chất của method trong SuperClass.
- `This` là 1 pointer của Class dữ liệu và sẽ trỏ đến các member mà nó có thể trỏ đến.

**EXAMPLE 1:**  Tính chất kế thừa theo kiểu public.
```c++
class DoiTuong{
    protected:
            string TEN;
            int TUOI;
    public:
            void SetInformation(string ten, int tuoi);
            void Display();

};

void DoiTuong :: SetInformation(string ten, int tuoi){
    this->TEN = ten;
    this->TUOI = tuoi;
}
void DoiTuong :: Display(){
    cout<<"Ten: "<<TEN<<endl;
    cout<<"Tuoi: "<<TUOI<<endl;
}

class SinhVien : public DoiTuong{      // Kế thừa theo kiểu Public
    private:
            int MSSV;
    public:
            void SetInformation(string ten, int tuoi, int mssv);    // Kieu or phuong phap ghi de trong tinh ke thua cua OOP
            void Display();
    
};

void SinhVien::SetInformation(string ten, int tuoi, int mssv){

    this->TEN = ten;
    this->TUOI = tuoi;
    this->MSSV = mssv;

}

 void SinhVien:: Display(){

    cout<<"Ten: "<<TEN<<endl;
    cout<<"Tuoi: "<<TUOI<<endl;
    cout<<"MSSV: "<<MSSV<<endl;

 }

 int main(int argc, char const *argv[])
{
  
    SinhVien sv;

    sv.SetInformation("Hoang", 45, 191765);
     
    sv.Display();

    return 0;
}
```
**EXAMPLE 2:** Tính kế thừa theo kiểu protected:
- Vì Class SinhVien kế thừa Class DoiTuong theo kiểu protected. Vậy nên những member ở phạm vi public và protected của Class DoiTuong sang Class SinhVien sẽ đều sẽ trở thành các member ở phạm vi protected của Class SinhVien.
- Do đó, khi khởi tạo Object theo Class SinhVien thì ta k thể truy cập đến các member của Class DoiTuong.
- Dù kế thừa theo kiểu protected nhưng ta vãn có thể sử dụng tính cất ghi đè.

```c++
class DoiTuong{
    protected:
            string TEN;
            int TUOI;
    public:
            void SetInformation(string ten, int tuoi);
            void Display();

};

class SinhVien : protected DoiTuong{
    private:
            int MSSV;
    public:
            void SetInformation1(string ten, int tuoi, int mssv);    // Kieu or phuong phap ghi de trong tinh ke thua cua OOP
            void Display1();
    
};

int main(int argc, char const *argv[])
{
  
    SinhVien sv;

    sv.SetInformation1("Hoang", 45, 191765);
     
    sv.Display1();


    return 0;
}

```

**EXAMPLE 3:** Tính chất kế thừa theo kiểu Private:
- Khi Class SinhVien kế thừa theo kiểu Private của Class DoiTuong. Vậy nên các member ở phạm vi public và protected ở Class DoiTuong khi sang Class SinhVien thì các member đó sẽ ở phạm vi Private của SinhVien.
- Do đó khi khởi tạo Object kiểu Class SinhVien thì Object không có quyền truy cập đến các member ở phạm vi Private.
  
```c++
class DoiTuong{
    protected:
            string TEN;
            int TUOI;
    public:
            void SetInformation(string ten, int tuoi);
            void Display();

};

class SinhVien : private DoiTuong{
    private:
            int MSSV;
    public:
            void SetInformation1(string ten, int tuoi, int mssv);    // Kieu or phuong phap ghi de trong tinh ke thua cua OOP
            void Display1();
    
};

int main(int argc, char const *argv[])
{
  
    SinhVien sv;

    sv.SetInformation("Hoang", 45, 191765);
     
    //sv.Display();           // khong kế thừa được vì ở private SinhVien


    return 0;
}
``` 
### 2. Tính đa hình(Polymorphism):

- Trong Class khi khai báo method mà tên các method trùng nhau nhưng có input parametres khác nhau (về số lượng, kiểu dữ liệu từng agrument) thì nó có thể phân biệt được từng method và điều này khác với tính chất ngôn ngữ C.
- Trong C++ nếu Tên các method trùng nhau cho dù method kiểu void hay int thì cũng không phân biệt được và chỉ có thể dựa vào input parameters.
- Trong Class thì các method có thể có cùng label và dù khác kiểu dữ liệu trả về nhưng trong OOP của C++ nó sẽ phân biệt các method nhờ input paramaters của các method để phân biệt chức năng của các method khác nhau.
  
```c++
class ToanHoc{
    public:
            void Tong(int a, int b){
                cout<<"Tong a va b: " <<a+b<<endl;
            }
            void Tong(int a, int b, int c){
                cout<<"Tong a, b va c: " <<a+b+c<<endl;
            }
            int Tong(int a, double b){      // method
                return a+(int)b;
            }
 };


int main(int argc, char const *argv[])
{
  
   ToanHoc sv;

    sv.Tong(8,9);
     
    sv.Tong(2,9,9);

    cout<<"Tong a va b: "<<sv.Tong(5,14.6)<<endl;
    

    return 0;
}

```

### 3. Tính trừu tượng (Abstraction):
- Tính trừu tượng trong C++ có thể hiểu: Khi ta thiết kế thư viện của một phương trình bậc hai thì ta chỉ cho phép người dùng được truy cập vào hàm nhập thông tin và trả kết quả. Còn các hàm xử lý, tính toán kết quả thì ta sẽ không cho người truy cập vào.
- Do đó ở phạm vi public thì Object(Người dùng) có thể truy cập và trỏ đến sử dụng các method ở phạm vi này. Còn ở phạm vi private và protected thì Object(người dùng ) không có quyền truy cập vào. Đây cũng là tính chất khi mà ta thiết kế thư viện.
- Tính trừu tượng này khá giống với khai báo static bên C khi thiết kế thư viện. Bên C khi ta khái báo static một function hay biến trong file cụ thê thì ta chỉ dùng private các function trong file đó. Cho dù ta include các file header vào các file .c khác thì ta cũng không thể truy cập đền các function static đó. Điều này khiến cho người dùng không cần quan tâm đến các function xử lý, bên trong đó mà chỉ quan tâm đến **input và result**. 

```c++
class TinhToan{
   public:
          void setData();
          void result();
   private:
          int Detal();
}
```

### 4. Tính đóng gói:
- Object không được truy cập trực tiếp đến member phạm vi private, protected để gán các giá trị trực tiếp cho nó. Mà cần phải gán giá trị cho các propety thông qua nhờ các method ở phạm vi public. Điều này phức tạp mà đảm bảo tính đồng bộ và chính xác khi thiết kế thư viện.
- Điều này giúp Object hay người dùng không được truy cập vào các member ở private và protected để thay đổi giá trị. Mà cần phải qua các method ở public để xử lý các trường hợp nhập data sai từ Object(người dùng) và sẽ nhận các giá trị đúng thông qua method đã được xử lý ở public chco các property.
- Trong OOP thì tính đóng gói(Encapsulation) có ý nghĩa là người dùng không thể sử đụng Object tuy cập trực tiếp vào các member để thay đổi giá trị và trạng thái nội của nó. Ta chỉ có thể thông qua dùng method tại Object để thay đổi các giá trị và trạng thái nội.
```c++
class TinhToan{
   public:
          void setData(int ten){
            TEN=ten;
          };

          int getData(){
            return TEN;
          }
   private:
          int TEN;
          int tuoi;
}
```
</details>

</details>
<!-- ----------------------------------------------------------------------------- -->

##

<details>
<summary><h2>CHAPTER 3: EMBEDDED IN AUTOMOTIVE</h2></summary>

##

<details> 
<summary> EMBEDDED</summary>



</details>
</details>

<!-- ----------------------------------------------------------------------------- -->
##

<details>
<summary><h2>CHAPTER 4: TECHNICAL ENGLISH IN AUTOMOTIVE EMBEDDED</h2></summary>
  
##

<details> <summary> L01_MICROCONTROLLER </summary>

</details>
</details>

