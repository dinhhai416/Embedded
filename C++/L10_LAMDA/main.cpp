#include<iostream>
#include<stdint.h>

using namespace std;

int main(int argc, char const *argv[])
{
    uint8_t x = 2;
    uint8_t y = 5;
    auto fun =[=](int a, int b){

        printf("Add of %d and %d: %d",a,b,a+b);
        printf(" i = %d, %d", x, y);
    };

    fun(6,8);

    // std::sort(array.begin(), array.end(), [](int a, int b)-> return bool{

    //     a<b;
    // };)
    return 0;
}