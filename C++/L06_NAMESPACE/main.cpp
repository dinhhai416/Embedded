#include<iostream>
#include"test.cpp"

//template <typename var3, typename var1>;
using namespace std;

namespace soilSensor{

    int temperature = 40;
    // var1 Measure(var3 c, var1 b){

    //     return var1(c+b);
    // }

}

 namespace airSensor{

     int temperature = 70;
//     var3 Measure(var3 c, var3 b){

//         return var3(c+b);
//    }    
 }

using namespace airSensor;

int main(int argc, char const *argv[])
{
    temperature = 100;
    soilSensor::Sinhvien sv;
    std::cout<<temperature;//<<airSensor :: Measure(4, 5,8)<<std::endl;
    std::cout<< sv.pressure() <<std::endl;
    std:: cout<< soilSensor :: temperature;//<<soilSensor:: Measure(4, 5)<<std::endl;
    return 0;
}
