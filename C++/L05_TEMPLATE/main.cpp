#include<iostream>

using namespace std;

template <typename var , typename var2>

var2 Add( var a, var2 b){

    return var2(a+b);
}

int main(int argc, char const *argv[])
{
    std::cout<<"Add of a and b: "<<Add(4,4.5);
    return 0;
}
