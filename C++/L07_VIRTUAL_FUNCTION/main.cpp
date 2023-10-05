#include<iostream>

using namespace std;

class DoiTuong{
    public:
        virtual char *cmd(){

            return (char *)"Doi tuong";
        }
        void display(){

            printf("%s", cmd());
        }
};

class Sinhvien : public DoiTuong{
    public:
        char *cmd(){

            return (char *)"Sinh vien";
        }
};

int main(int argc, char const *argv[])
{
   DoiTuong dt;

   dt.display();

   printf("\n");

   Sinhvien sv;

   sv.display();
   
    return 0;
}
